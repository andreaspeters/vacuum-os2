#ifndef SPELLCHECKER_H
#define SPELLCHECKER_H

#include <definitions/actiongroups.h>
#include <definitions/optionvalues.h>
#include <interfaces/ispellchecker.h>
#include <interfaces/ipluginmanager.h>
#include <interfaces/imessagewidgets.h>
#include <interfaces/imultiuserchat.h>
#include <utils/options.h>
#include "spellhighlighter.h"

class SpellChecker : 
	public QObject,
	public IPlugin,
	public ISpellChecker
{
	Q_OBJECT;
	Q_INTERFACES(IPlugin ISpellChecker);
public:
	SpellChecker();
	~SpellChecker();
	virtual QObject *instance() { return this; }
	virtual QUuid pluginUuid() const { return SPELLCHECKER_UUID; }
	virtual void pluginInfo(IPluginInfo *APluginInfo);
	virtual bool initConnections(IPluginManager *APluginManager, int &AInitOrder);
	virtual bool initObjects();
	virtual bool initSettings();
	virtual bool startPlugin();
public:
	virtual bool isSpellEnabled() const;
	virtual void setSpellEnabled(bool AEnabled);
	virtual bool isSpellAvailable() const;
	virtual QList<QString> availDictionaries() const;
	virtual QString currentDictionary() const;
	virtual void setCurrentDictionary(const QString &ADict);
	virtual bool isCorrectWord(const QString &AWord) const;
	virtual QList<QString> wordSuggestions(const QString &AWord) const;
	virtual bool canAddWordToPersonalDict(const QString &AWord) const;
	virtual void addWordToPersonalDict(const QString &AWord);
signals:
	void spellEnableChanged(bool AEnabled);
	void currentDictionaryChanged(const QString &ADict);
	void wordAddedToPersonalDict(const QString &AWord);
protected:
	void rehightlightAll();
	QString dictionaryName(const QString &ADict) const;
protected slots:
	void onChangeSpellEnable();
	void onChangeDictionary();
	void onRepairWordUnderCursor();
	void onAddUnknownWordToDictionary();
	void onEditWidgetCreated(IEditWidget *AWidget);
	void onEditWidgetContextMenuRequested(const QPoint &APosition, Menu *AMenu);
	void onTextEditDestroyed(QObject *AObject);
protected slots:
	void onOptionsOpened();
	void onOptionsChanged(const OptionsNode &ANode);
private:
	IPluginManager *FPluginManager;
	IMessageWidgets *FMessageWidgets;
private:
	QTextEdit *FCurrentTextEdit;
	int FCurrentCursorPosition;
	QMap<QObject *, SpellHighlighter *> FSpellHighlighters;
};

#endif // SPELLCHECKER_H
