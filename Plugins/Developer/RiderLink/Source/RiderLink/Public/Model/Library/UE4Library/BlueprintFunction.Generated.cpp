//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a RdGen v1.10.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "BlueprintFunction.Generated.h"



#ifdef _MSC_VER
#pragma warning( push )
#pragma warning( disable:4250 )
#pragma warning( disable:4307 )
#pragma warning( disable:4267 )
#pragma warning( disable:4244 )
#pragma warning( disable:4100 )
#endif

namespace JetBrains {
namespace EditorPlugin {
// companion
// constants
constexpr rd::wstring_view BlueprintFunction::separator;
// initializer
void BlueprintFunction::initialize()
{
}
// primary ctor
BlueprintFunction::BlueprintFunction(rd::Wrapper<UClass> class_, FString name_) :
rd::IPolymorphicSerializable()
,class_(std::move(class_)), name_(std::move(name_))
{
    initialize();
}
// secondary constructor
// default ctors and dtors
// reader
BlueprintFunction BlueprintFunction::read(rd::SerializationCtx& ctx, rd::Buffer & buffer)
{
    auto class_ = UClass::read(ctx, buffer);
    auto name_ = rd::Polymorphic<FString>::read(ctx, buffer);
    BlueprintFunction res{std::move(class_), std::move(name_)};
    return res;
}
// writer
void BlueprintFunction::write(rd::SerializationCtx& ctx, rd::Buffer& buffer) const
{
    rd::Polymorphic<std::decay_t<decltype(class_)>>::write(ctx, buffer, class_);
    rd::Polymorphic<std::decay_t<decltype(name_)>>::write(ctx, buffer, name_);
}
// virtual init
// identify
// getters
UClass const & BlueprintFunction::get_class() const
{
    return *class_;
}
FString const & BlueprintFunction::get_name() const
{
    return name_;
}
// intern
// equals trait
bool BlueprintFunction::equals(rd::ISerializable const& object) const
{
    auto const &other = dynamic_cast<BlueprintFunction const&>(object);
    if (this == &other) return true;
    if (this->class_ != other.class_) return false;
    if (this->name_ != other.name_) return false;
    
    return true;
}
// equality operators
bool operator==(const BlueprintFunction &lhs, const BlueprintFunction &rhs) {
    if (lhs.type_name() != rhs.type_name()) return false;
    return lhs.equals(rhs);
}
bool operator!=(const BlueprintFunction &lhs, const BlueprintFunction &rhs){
    return !(lhs == rhs);
}
// hash code trait
size_t BlueprintFunction::hashCode() const noexcept
{
    size_t __r = 0;
    __r = __r * 31 + (rd::hash<UClass>()(get_class()));
    __r = __r * 31 + (rd::hash<FString>()(get_name()));
    return __r;
}
// type name trait
std::string BlueprintFunction::type_name() const
{
    return "BlueprintFunction";
}
// static type name trait
std::string BlueprintFunction::static_type_name()
{
    return "BlueprintFunction";
}
// polymorphic to string
std::string BlueprintFunction::toString() const
{
    std::string res = "BlueprintFunction\n";
    res += "\tclass = ";
    res += rd::to_string(class_);
    res += '\n';
    res += "\tname = ";
    res += rd::to_string(name_);
    res += '\n';
    return res;
}
// external to string
std::string to_string(const BlueprintFunction & value)
{
    return value.toString();
}
}
}

#ifdef _MSC_VER
#pragma warning( pop )
#endif

