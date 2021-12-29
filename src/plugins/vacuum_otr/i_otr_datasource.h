#pragma once

#include <QString>

#include "OtrMessaging.hpp"

#define OPV_OTR_POLICY                         "otr.policy"

class IOTRDataSource
{
public:
    virtual QString dataDir() const = 0;
    virtual bool contactOnline(const QString& account, const QString& contact) = 0;
    virtual void sendMessage(const QString& account, const QString& to, const QString& message) = 0;
    virtual void fakeMessage(const QString& account, const QString& from, const QString& message) = 0;
    virtual void savePolicy(otr::OtrPolicy policy) = 0;
    virtual otr::OtrPolicy policy() const = 0;

    virtual void goneSecure(const QString& account, const QString& contact) = 0;
    virtual void goneInsecure(const QString& account, const QString& contact) = 0;
    virtual void updateContexts() = 0;
};
