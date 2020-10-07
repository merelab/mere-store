#ifndef CONFIG_H
#define CONFIG_H

#include "../global.h"


#include <QMap>
#include <QObject>
#include <QVariant>
#include <QDebug>

namespace Mere
{
namespace Store
{

const QString NameKey    = "mere.store.name";
const QString VersionKey = "mere.store.version";
const QString PathKey    = "mere.store.path";
const QString MimeKey    = "mere.store.mime";

class MERE_STORE_LIBSPEC Config : public QObject
{
    Q_OBJECT
protected:
    explicit Config(QObject *parent = nullptr);
    explicit Config(const QString &config, QObject *parent = nullptr);

public:
    void init();

    QString path() const;
    void setPath(const QString &path);

    QString mime() const;
    void setMime(const QString &mime);

    QVariant get(const QString &key) const;
    void set(const QString &key, const QVariant &value);

//    QList<SliceConfig> slices() const;
//    SliceConfig slice(const QString &name) const;
//    void addSlice(const SliceConfig &slice);

    virtual QMap<QString, QVariant> section(const QString &section);
    virtual int flush();

    static Config* instance();

private:
    QMap<QString, QVariant> m_configs;

    QString m_config;

//    QMap<QString, SliceConfig> m_slices;
};

} // namespace Store
} // namespace Mere

#endif // CONFIG_H
