#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QHash>

#include "node.h"

// abstract dio objects from MQTT



class DistioClient : public QObject
{
    Q_OBJECT
public:
    explicit DistioClient(QObject *parent = 0);


signals:

public slots:

};

#endif // CLIENT_H
