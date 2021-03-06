#ifndef TABWINDOW_H
#define TABWINDOW_H

#include <QTimer>
#include <QMainWindow>
#include <definitions/optionvalues.h>
#include <definitions/resources.h>
#include <definitions/menuicons.h>
#include <definitions/actiongroups.h>
#include <definitions/shortcuts.h>
#include <interfaces/imessagewidgets.h>
#include <utils/options.h>
#include <utils/shortcuts.h>
#include <utils/widgetmanager.h>
#include "ui_tabwindow.h"

class TabWindow :
	public QMainWindow,
	public ITabWindow
{
	Q_OBJECT;
	Q_INTERFACES(ITabWindow IMainCentralPage);
public:
	TabWindow(IMessageWidgets *AMessageWidgets, const QUuid &AWindowId);
	~TabWindow();
	virtual QMainWindow *instance() { return this; }
	// IMainCentralPage
	virtual void showCentralPage(bool AMinimized = false);
	virtual QIcon centralPageIcon() const;
	virtual QString centralPageCaption() const;
	// ITabWindow
	virtual void showWindow();
	virtual void showMinimizedWindow();
	virtual QUuid windowId() const;
	virtual QString windowName() const;
	virtual Menu *windowMenu() const;
	virtual bool isTabBarVisible() const;
	virtual void setTabBarVisible(bool AVisible);
	virtual bool isAutoCloseEnabled() const;
	virtual void setAutoCloseEnabled(bool AEnabled);
	virtual int tabPageCount() const;
	virtual ITabPage *tabPage(int AIndex) const;
	virtual void addTabPage(ITabPage *APage);
	virtual bool hasTabPage(ITabPage *APage) const;
	virtual ITabPage *currentTabPage() const;
	virtual void setCurrentTabPage(ITabPage *APage);
	virtual void detachTabPage(ITabPage *APage);
	virtual void removeTabPage(ITabPage *APage);
signals:
	// ITabWindow
	void currentTabPageChanged(ITabPage *APage);
	void tabPageMenuRequested(ITabPage *APage, Menu *AMenu);
	void tabPageAdded(ITabPage *APage);
	void tabPageRemoved(ITabPage *APage);
	void tabPageDetached(ITabPage *APage);
	void windowChanged();
	void windowDestroyed();
	// IMainCentralPage
	void centralPageShow(bool AMinimized);
	void centralPageChanged();
	void centralPageDestroyed();
protected:
	void createActions();
	void saveWindowStateAndGeometry();
	void loadWindowStateAndGeometry();
	void updateWindow();
	void clearTabs();
	void updateTab(int AIndex);
	void updateTabs(int AFrom, int ATo);
protected:
	void showEvent(QShowEvent *AEvent);
	void closeEvent(QCloseEvent *AEvent);
protected slots:
	void onTabMoved(int AFrom, int ATo);
	void onTabChanged(int AIndex);
	void onTabCloseRequested(int AIndex);
	void onTabMenuRequested(int AIndex);
	void onTabPageShow();
	void onTabPageShowMinimized();
	void onTabPageClose();
	void onTabPageChanged();
	void onTabPageDestroyed();
	void onTabPageNotifierChanged();
	void onTabPageNotifierActiveNotifyChanged(int ANotifyId);
	void onTabWindowNameChanged(const QUuid &AWindowId, const QString &AName);
	void onOptionsChanged(const OptionsNode &ANode);
	void onActionTriggered(bool);
	void onTabMenuActionTriggered(bool);
	void onShortcutActivated(const QString &AId, QWidget *AWidget);
	void onBlinkTabNotifyTimerTimeout();
	void onCloseWindowIfEmpty();
private:
	Ui::TabWindowClass ui;
private:
	IMessageWidgets *FMessageWidgets;
private:
	Menu *FWindowMenu;
	Action *FNextTab;
	Action *FPrevTab;
	Action *FShowCloseButtons;
	Action *FTabsBottom;
	Action *FShowIndices;
	Action *FRemoveTabsOnClose;
	Action *FSetAsDefault;
	Action *FRenameWindow;
	Action *FCloseWindow;
	Action *FDeleteWindow;
private:
	QUuid FWindowId;
	OptionsNode FOptionsNode;
private:
	bool FAutoClose;
	bool FBlinkVisible;
	bool FShownDetached;
	QTimer FBlinkTimer;
};

#endif // TABWINDOW_H
