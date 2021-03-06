#ifndef DATETIME_H
#define DATETIME_H

#include <QMetaType>
#include <QDateTime>
#include <QSharedData>
#include "utilsexport.h"

class DateTimeData :
   public QSharedData
{
public:
	DateTimeData(const QDateTime &ADT, int ATZD);
	DateTimeData(const DateTimeData &AOther);
public:
	int tzd;
	QDateTime dt;
};

class UTILS_EXPORT DateTime
{
public:
	DateTime(const QString &AX85DateTime);
	DateTime(const QDateTime &ADateTime = QDateTime());
	~DateTime();
	bool isNull() const;
	bool isValid() const;
	int timeZone() const;
	void setTimeZone(int ASecs);
	QDateTime dateTime() const;
	void setDateTime(const QDateTime &ADateTime);
	QDateTime toUTC() const;
	QDateTime toLocal() const;
	QString toX85TZD() const;
	QString toX85Date() const;
	QString toX85Time() const;
	QString toX85DateTime() const;
	QString toX85UTC() const;
	QString toX85Format(bool ADate, bool ATime, bool ATZD) const;
public:
	static int tzdFromX85(const QString &AX85DateTime);
	static QDateTime dtFromX85(const QString &AX85DateTime);
private:
	QSharedDataPointer<DateTimeData> d;
};

Q_DECLARE_METATYPE(DateTime);

#endif // DATETIME_H
