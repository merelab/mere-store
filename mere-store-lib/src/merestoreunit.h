#ifndef MERESTOREUNIT_H
#define MERESTOREUNIT_H

#include "merestoreglobal.h"
#include "merestoreunitref.h"
//#include "merestoreunitdescriptor.h"

#include <QMap>
#include <QVariant>

typedef QMap<QString, QVariant> MereStoreUnitMap;
typedef QMap<QString, QVariant> MereStoreUnitAttributes;

class MERE_STORE_LIBSPEC MereStoreUnit : public MereStoreUnitRef
{
public:
    virtual ~MereStoreUnit();
    explicit MereStoreUnit(const QString &type);

    MereStoreUnit() = default;
    MereStoreUnit(const MereStoreUnit &other) = default;

    virtual MereStoreUnitAttributes attributes() const;
    virtual void setAttributes(MereStoreUnitAttributes attributes);

    virtual void addAttribute(const QString &name, const QVariant &value);
    virtual void addAttributes(MereStoreUnitAttributes attributes);

    MereStoreUnitMap map() const;

private:
    class MereStoreUnitPrivate;
    MereStoreUnitPrivate *d_ptr;
};

Q_DECLARE_METATYPE(MereStoreUnit);
Q_DECLARE_METATYPE(MereStoreUnit*);
Q_DECLARE_OPAQUE_POINTER(MereStoreUnit::MereStoreUnitPrivate);
Q_DECLARE_OPAQUE_POINTER(MereStoreUnit::MereStoreUnitPrivate*);

#endif // MERESTOREUNIT_H
