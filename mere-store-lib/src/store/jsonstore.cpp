#include "jsonstore.h"

Mere::Store::JsonStore::~JsonStore()
{

}

Mere::Store::JsonStore::JsonStore(const QString &store, QObject *parent)
    : JsonStore(store, "", parent)
{
    //qDebug() << "MereJsonStore::...." << store;
}

Mere::Store::JsonStore::JsonStore(const QString &store, const QString &slice, QObject *parent)
    : PairStore(store, slice, parent)
{
    //qDebug() << "MereJsonStore::...." << store;
}

void Mere::Store::JsonStore::save(QJsonObject unit)
{
   // qDebug() << "Going to save...";

//    QUuid uuid = unit.value("uuid").toUuid();
//    if (!uuid.isNull())
//        update(unit);
//    else
//        create(unit);
}

void Mere::Store::JsonStore::create(QJsonObject unit)
{
    qDebug() << "Going to create..." << unit.value("type");

//    // Unit Type
//    QString type = unit.value("type").toString();
//    if (MereStringUtils::isBlank(type))
//    {
//        qDebug() << "Invalid or missing type of the unit...";
//        return;
//    }

//    // Unit Path
//    QString path = unit.value("path", ".").toString();

//    // Unit UUID
//    QUuid uuid = unit.value("uuid", QUuid::createUuid()).toUuid();
//    if (uuid.isNull()) uuid = QUuid::createUuid();

//    // Unit Attrs
//    MappedStoreUnit attrs = unit.value("attr").toMap();

//    QString key(path);
//    key = key.append(type);

//    write(key, uuid, attrs);

    //emit created(unit);

    //qDebug() << QString("Unit %1:uuid:%2 added to the system").arg(key).arg(uuid.toString());
}


void Mere::Store::JsonStore::update(QJsonObject unit)
{
    qDebug() << "Going to update...";

//    // Unit Type
//    const QString type = unit.value("type").toString();
//    if (MereStringUtils::isBlank(type))
//    {
//        qDebug() << "Invalid or missing type of the unit...";
//        return;
//    }

//    // Unit Path
//    const QString path = unit.value("path", ".").toString();

//    // Unit UUID
//    const QUuid uuid = unit.value("uuid").toUuid();
//    if (uuid.isNull())
//    {
//        qDebug() << "Invalid or missing uuid of the unit...";
//        return;
//    }

//    // Unit Attrs
//    MappedStoreUnit attrs = unit.value("attr").toMap();

//    QString key(path);
//    key = key.append(type);

//    write(key, uuid, attrs);

    //emit updated(unit);

    //qDebug() << QString("Unit %1:uuid:%2 updated to the system").arg(key).arg(uuid.toString());
}


void Mere::Store::JsonStore::fetch(QJsonObject unit)
{
    qDebug() << "Going to fetch...";
//    // Unit Type
//    const QString type = unit.value("type").toString();
//    if (MereStringUtils::isBlank(type))
//    {
//        qDebug() << "Invalid or missing type of the unit...";
//        throw "Invalid or missing type of the unit...";
//    }

//    // Unit Path
//    const QString path = unit.value("path", ".").toString();

//    // Unit UUID
//    const QUuid uuid = unit.value("uuid").toUuid();
//    if (uuid.isNull())
//    {
//        qDebug() << "Invalid or missing uuid of the unit...";
//        //return;
//        throw "Invalid or missing uuid of the unit...";
//    }

//    QString key(path);
//    key = key.append(type);

//    key = UNIT_KEY.arg(key, uuid.toString());

//    unit.remove("attr");

//    read(key, unit);

    //emit fetched(unit);
}


void Mere::Store::JsonStore::remove(QJsonObject unit)
{
    qDebug() << "Going to remove...";

//    // Unit Type
//    const QString type = unit.value("type").toString();
//    if (MereStringUtils::isBlank(type))
//    {
//        qDebug() << "Invalid or missing type of the unit...";
//        return;
//    }

//    // Unit Path
//    const QString path = unit.value("path", ".").toString();

//    // Unit UUID
//    const QUuid uuid = unit.value("uuid").toUuid();
//    if (uuid.isNull())
//    {
//        qDebug() << "Invalid or missing uuid of the unit...";
//        return;
//    }

//    QString pkey(path);
//    pkey = pkey.append(type);

//    pkey = UNIT_KEY.arg(pkey, uuid.toString());

//    remove(pkey);

    //emit removed(unit);
}


void Mere::Store::JsonStore::search(QJsonObject query)
{
    qDebug() << "Search for path:" << query.value("path").toString();
    qDebug() << "Search for type:" << query.value("type").toString();

//    // Unit Type
//    const QString type = query.value("type").toString();
//    if (MereStringUtils::isBlank(type))
//    {
//        qDebug() << "Invalid or missing type of the unit...";
//        return;
//    }

//    // Unit Path
//    const QString path = query.value("path", ".").toString();

//    QString pkey(path);
//    pkey = pkey.append(type).append(":");

////    pkey = UNIT_KEY.arg(pkey, uuid.toString());

//    std::string skey = pkey.toStdString();
//    std::string ekey = (pkey + ("~")).toStdString();

//    leveldb::Iterator* it = db()->NewIterator(leveldb::ReadOptions());
//    for (it->Seek(skey); it->Valid() && it->key().ToString() < ekey; it->Next())
//    {
//        QString  _key   = QString::fromStdString(it->key().ToString());
//        QVariant _value = QString::fromStdString(it->value().ToString());

//        qDebug() << "Key/Value: " << _key << " => " << _value;

//    }

//    delete it;
}

//void MereJsonStore::list(QJsonObject criteria)
//{
//    qDebug() << "DEKHA JAK KI HOY!!!" << db();
//    QString pkey;

//    std::string skey = pkey.toStdString();
//    std::string ekey = (pkey + ("~")).toStdString();

////    leveldb::Iterator* it = db()->NewIterator(leveldb::ReadOptions());
////    for (it->Seek(skey); it->Valid() && it->key().ToString() < ekey; it->Next())
////    {
////        QString  _key   = QString::fromStdString(it->key().ToString());
////        QVariant _value = QString::fromStdString(it->value().ToString());

////        qDebug() << "Key/Value: " << _key << " => " << _value;

////    }
//}
