#ifndef STYLEVIEWER_H
#define STYLEVIEWER_H

#include <QTextBrowser>
#include <utils/animatedtextbrowser.h>

class StyleViewer: 
	public AnimatedTextBrowser
{
	Q_OBJECT;
public:
	StyleViewer(QWidget *AParent);
	~StyleViewer();
};

#endif // STYLEVIEWER_H
