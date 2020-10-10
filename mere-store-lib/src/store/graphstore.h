#ifndef GRAPHSTORE_H
#define GRAPHSTORE_H

#include "hexastore.h"

namespace Mere
{
namespace Store
{

class MERE_STORE_LIBSPEC GraphStore : public HexaStore
{
    Q_OBJECT
public:
    virtual ~GraphStore();
    explicit GraphStore(const QString &store, QObject *parent = nullptr);
    explicit GraphStore(const QString &store, const QString &slice, QObject *parent = nullptr);

    virtual int add(const Ref &subject, const QString &predicate, const Ref &object) const;
    virtual int del(const Ref &subject, const QString &predicate, const Ref &object) const;

    virtual QList<UnitRef> vertex(const UnitRef &ref, HexaStore::Flow flow = InComing) const;
    virtual QList<UnitRef> vertex(const UnitRef &ref, const QString &predicate, HexaStore::Flow flow = InComing) const;
    //virtual QList<UnitRef> vertex(const QString &predicate) const;

private:
    using HexaStore::vertex;
    using HexaStore::add;
    using HexaStore::del;

    class GraphStorePrivate;
    GraphStorePrivate *d_ptr;
};

} // namespace Store
} // namespace Mere

#endif // GRAPHSTORE_H
