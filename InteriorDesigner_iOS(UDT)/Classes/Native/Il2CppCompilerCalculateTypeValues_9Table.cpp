#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t713131622;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t3355146440;
// System.String
struct String_t;
// System.Version
struct Version_t3456873960;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Security.NamedPermissionSet
struct NamedPermissionSet_t2915669112;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t3052133691;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t97388457;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Reflection.Assembly
struct Assembly_t;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Security.SecurityContext
struct SecurityContext_t2435442044;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t2402303981;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.ApplicationIdentity
struct ApplicationIdentity_t1917735356;
// System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
struct IList_1_t1196077101;
// System.SByte[]
struct SByteU5BU5D_t2651576203;
// System.Void
struct Void_t1185182177;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t1972936122;
// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection
struct KeyContainerPermissionAccessEntryCollection_t4144114052;
// System.Security.Policy.CodeGroup
struct CodeGroup_t3811807446;
// System.Security.SecurityElement
struct SecurityElement_t1046076091;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef PUBLISHER_T2758056332_H
#define PUBLISHER_T2758056332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Publisher
struct  Publisher_t2758056332  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Policy.Publisher::m_cert
	X509Certificate_t713131622 * ___m_cert_0;

public:
	inline static int32_t get_offset_of_m_cert_0() { return static_cast<int32_t>(offsetof(Publisher_t2758056332, ___m_cert_0)); }
	inline X509Certificate_t713131622 * get_m_cert_0() const { return ___m_cert_0; }
	inline X509Certificate_t713131622 ** get_address_of_m_cert_0() { return &___m_cert_0; }
	inline void set_m_cert_0(X509Certificate_t713131622 * value)
	{
		___m_cert_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_cert_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUBLISHER_T2758056332_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef PERMISSIONREQUESTEVIDENCE_T59447972_H
#define PERMISSIONREQUESTEVIDENCE_T59447972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PermissionRequestEvidence
struct  PermissionRequestEvidence_t59447972  : public RuntimeObject
{
public:
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::requested
	PermissionSet_t223948603 * ___requested_0;
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::optional
	PermissionSet_t223948603 * ___optional_1;
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::denied
	PermissionSet_t223948603 * ___denied_2;

public:
	inline static int32_t get_offset_of_requested_0() { return static_cast<int32_t>(offsetof(PermissionRequestEvidence_t59447972, ___requested_0)); }
	inline PermissionSet_t223948603 * get_requested_0() const { return ___requested_0; }
	inline PermissionSet_t223948603 ** get_address_of_requested_0() { return &___requested_0; }
	inline void set_requested_0(PermissionSet_t223948603 * value)
	{
		___requested_0 = value;
		Il2CppCodeGenWriteBarrier((&___requested_0), value);
	}

	inline static int32_t get_offset_of_optional_1() { return static_cast<int32_t>(offsetof(PermissionRequestEvidence_t59447972, ___optional_1)); }
	inline PermissionSet_t223948603 * get_optional_1() const { return ___optional_1; }
	inline PermissionSet_t223948603 ** get_address_of_optional_1() { return &___optional_1; }
	inline void set_optional_1(PermissionSet_t223948603 * value)
	{
		___optional_1 = value;
		Il2CppCodeGenWriteBarrier((&___optional_1), value);
	}

	inline static int32_t get_offset_of_denied_2() { return static_cast<int32_t>(offsetof(PermissionRequestEvidence_t59447972, ___denied_2)); }
	inline PermissionSet_t223948603 * get_denied_2() const { return ___denied_2; }
	inline PermissionSet_t223948603 ** get_address_of_denied_2() { return &___denied_2; }
	inline void set_denied_2(PermissionSet_t223948603 * value)
	{
		___denied_2 = value;
		Il2CppCodeGenWriteBarrier((&___denied_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONREQUESTEVIDENCE_T59447972_H
#ifndef STRONGNAMEMEMBERSHIPCONDITION_T2614563360_H
#define STRONGNAMEMEMBERSHIPCONDITION_T2614563360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.StrongNameMembershipCondition
struct  StrongNameMembershipCondition_t2614563360  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.StrongNameMembershipCondition::version
	int32_t ___version_0;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongNameMembershipCondition::blob
	StrongNamePublicKeyBlob_t3355146440 * ___blob_1;
	// System.String System.Security.Policy.StrongNameMembershipCondition::name
	String_t* ___name_2;
	// System.Version System.Security.Policy.StrongNameMembershipCondition::assemblyVersion
	Version_t3456873960 * ___assemblyVersion_3;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t2614563360, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_blob_1() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t2614563360, ___blob_1)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get_blob_1() const { return ___blob_1; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of_blob_1() { return &___blob_1; }
	inline void set_blob_1(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		___blob_1 = value;
		Il2CppCodeGenWriteBarrier((&___blob_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t2614563360, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_assemblyVersion_3() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t2614563360, ___assemblyVersion_3)); }
	inline Version_t3456873960 * get_assemblyVersion_3() const { return ___assemblyVersion_3; }
	inline Version_t3456873960 ** get_address_of_assemblyVersion_3() { return &___assemblyVersion_3; }
	inline void set_assemblyVersion_3(Version_t3456873960 * value)
	{
		___assemblyVersion_3 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyVersion_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEMEMBERSHIPCONDITION_T2614563360_H
#ifndef STRONGNAME_T3675724614_H
#define STRONGNAME_T3675724614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.StrongName
struct  StrongName_t3675724614  : public RuntimeObject
{
public:
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::publickey
	StrongNamePublicKeyBlob_t3355146440 * ___publickey_0;
	// System.String System.Security.Policy.StrongName::name
	String_t* ___name_1;
	// System.Version System.Security.Policy.StrongName::version
	Version_t3456873960 * ___version_2;

public:
	inline static int32_t get_offset_of_publickey_0() { return static_cast<int32_t>(offsetof(StrongName_t3675724614, ___publickey_0)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get_publickey_0() const { return ___publickey_0; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of_publickey_0() { return &___publickey_0; }
	inline void set_publickey_0(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		___publickey_0 = value;
		Il2CppCodeGenWriteBarrier((&___publickey_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(StrongName_t3675724614, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(StrongName_t3675724614, ___version_2)); }
	inline Version_t3456873960 * get_version_2() const { return ___version_2; }
	inline Version_t3456873960 ** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(Version_t3456873960 * value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier((&___version_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAME_T3675724614_H
#ifndef SITE_T1075497104_H
#define SITE_T1075497104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Site
struct  Site_t1075497104  : public RuntimeObject
{
public:
	// System.String System.Security.Policy.Site::origin_site
	String_t* ___origin_site_0;

public:
	inline static int32_t get_offset_of_origin_site_0() { return static_cast<int32_t>(offsetof(Site_t1075497104, ___origin_site_0)); }
	inline String_t* get_origin_site_0() const { return ___origin_site_0; }
	inline String_t** get_address_of_origin_site_0() { return &___origin_site_0; }
	inline void set_origin_site_0(String_t* value)
	{
		___origin_site_0 = value;
		Il2CppCodeGenWriteBarrier((&___origin_site_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SITE_T1075497104_H
#ifndef MEMBERSHIPCONDITIONHELPER_T2246572704_H
#define MEMBERSHIPCONDITIONHELPER_T2246572704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.MembershipConditionHelper
struct  MembershipConditionHelper_t2246572704  : public RuntimeObject
{
public:

public:
};

struct MembershipConditionHelper_t2246572704_StaticFields
{
public:
	// System.String System.Security.Policy.MembershipConditionHelper::XmlTag
	String_t* ___XmlTag_0;

public:
	inline static int32_t get_offset_of_XmlTag_0() { return static_cast<int32_t>(offsetof(MembershipConditionHelper_t2246572704_StaticFields, ___XmlTag_0)); }
	inline String_t* get_XmlTag_0() const { return ___XmlTag_0; }
	inline String_t** get_address_of_XmlTag_0() { return &___XmlTag_0; }
	inline void set_XmlTag_0(String_t* value)
	{
		___XmlTag_0 = value;
		Il2CppCodeGenWriteBarrier((&___XmlTag_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERSHIPCONDITIONHELPER_T2246572704_H
#ifndef EVIDENCE_T2008144148_H
#define EVIDENCE_T2008144148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence
struct  Evidence_t2008144148  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Policy.Evidence::_locked
	bool ____locked_0;
	// System.Collections.ArrayList System.Security.Policy.Evidence::hostEvidenceList
	ArrayList_t2718874744 * ___hostEvidenceList_1;
	// System.Collections.ArrayList System.Security.Policy.Evidence::assemblyEvidenceList
	ArrayList_t2718874744 * ___assemblyEvidenceList_2;
	// System.Int32 System.Security.Policy.Evidence::_hashCode
	int32_t ____hashCode_3;

public:
	inline static int32_t get_offset_of__locked_0() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ____locked_0)); }
	inline bool get__locked_0() const { return ____locked_0; }
	inline bool* get_address_of__locked_0() { return &____locked_0; }
	inline void set__locked_0(bool value)
	{
		____locked_0 = value;
	}

	inline static int32_t get_offset_of_hostEvidenceList_1() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ___hostEvidenceList_1)); }
	inline ArrayList_t2718874744 * get_hostEvidenceList_1() const { return ___hostEvidenceList_1; }
	inline ArrayList_t2718874744 ** get_address_of_hostEvidenceList_1() { return &___hostEvidenceList_1; }
	inline void set_hostEvidenceList_1(ArrayList_t2718874744 * value)
	{
		___hostEvidenceList_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEvidenceList_1), value);
	}

	inline static int32_t get_offset_of_assemblyEvidenceList_2() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ___assemblyEvidenceList_2)); }
	inline ArrayList_t2718874744 * get_assemblyEvidenceList_2() const { return ___assemblyEvidenceList_2; }
	inline ArrayList_t2718874744 ** get_address_of_assemblyEvidenceList_2() { return &___assemblyEvidenceList_2; }
	inline void set_assemblyEvidenceList_2(ArrayList_t2718874744 * value)
	{
		___assemblyEvidenceList_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEvidenceList_2), value);
	}

	inline static int32_t get_offset_of__hashCode_3() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ____hashCode_3)); }
	inline int32_t get__hashCode_3() const { return ____hashCode_3; }
	inline int32_t* get_address_of__hashCode_3() { return &____hashCode_3; }
	inline void set__hashCode_3(int32_t value)
	{
		____hashCode_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCE_T2008144148_H
#ifndef DEFAULTPOLICIES_T2520506789_H
#define DEFAULTPOLICIES_T2520506789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.DefaultPolicies
struct  DefaultPolicies_t2520506789  : public RuntimeObject
{
public:

public:
};

struct DefaultPolicies_t2520506789_StaticFields
{
public:
	// System.Version System.Security.Policy.DefaultPolicies::_fxVersion
	Version_t3456873960 * ____fxVersion_0;
	// System.Byte[] System.Security.Policy.DefaultPolicies::_ecmaKey
	ByteU5BU5D_t4116647657* ____ecmaKey_1;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.DefaultPolicies::_ecma
	StrongNamePublicKeyBlob_t3355146440 * ____ecma_2;
	// System.Byte[] System.Security.Policy.DefaultPolicies::_msFinalKey
	ByteU5BU5D_t4116647657* ____msFinalKey_3;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.DefaultPolicies::_msFinal
	StrongNamePublicKeyBlob_t3355146440 * ____msFinal_4;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_fullTrust
	NamedPermissionSet_t2915669112 * ____fullTrust_5;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_localIntranet
	NamedPermissionSet_t2915669112 * ____localIntranet_6;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_internet
	NamedPermissionSet_t2915669112 * ____internet_7;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_skipVerification
	NamedPermissionSet_t2915669112 * ____skipVerification_8;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_execution
	NamedPermissionSet_t2915669112 * ____execution_9;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_nothing
	NamedPermissionSet_t2915669112 * ____nothing_10;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_everything
	NamedPermissionSet_t2915669112 * ____everything_11;

public:
	inline static int32_t get_offset_of__fxVersion_0() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____fxVersion_0)); }
	inline Version_t3456873960 * get__fxVersion_0() const { return ____fxVersion_0; }
	inline Version_t3456873960 ** get_address_of__fxVersion_0() { return &____fxVersion_0; }
	inline void set__fxVersion_0(Version_t3456873960 * value)
	{
		____fxVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&____fxVersion_0), value);
	}

	inline static int32_t get_offset_of__ecmaKey_1() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____ecmaKey_1)); }
	inline ByteU5BU5D_t4116647657* get__ecmaKey_1() const { return ____ecmaKey_1; }
	inline ByteU5BU5D_t4116647657** get_address_of__ecmaKey_1() { return &____ecmaKey_1; }
	inline void set__ecmaKey_1(ByteU5BU5D_t4116647657* value)
	{
		____ecmaKey_1 = value;
		Il2CppCodeGenWriteBarrier((&____ecmaKey_1), value);
	}

	inline static int32_t get_offset_of__ecma_2() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____ecma_2)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get__ecma_2() const { return ____ecma_2; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of__ecma_2() { return &____ecma_2; }
	inline void set__ecma_2(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		____ecma_2 = value;
		Il2CppCodeGenWriteBarrier((&____ecma_2), value);
	}

	inline static int32_t get_offset_of__msFinalKey_3() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____msFinalKey_3)); }
	inline ByteU5BU5D_t4116647657* get__msFinalKey_3() const { return ____msFinalKey_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__msFinalKey_3() { return &____msFinalKey_3; }
	inline void set__msFinalKey_3(ByteU5BU5D_t4116647657* value)
	{
		____msFinalKey_3 = value;
		Il2CppCodeGenWriteBarrier((&____msFinalKey_3), value);
	}

	inline static int32_t get_offset_of__msFinal_4() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____msFinal_4)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get__msFinal_4() const { return ____msFinal_4; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of__msFinal_4() { return &____msFinal_4; }
	inline void set__msFinal_4(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		____msFinal_4 = value;
		Il2CppCodeGenWriteBarrier((&____msFinal_4), value);
	}

	inline static int32_t get_offset_of__fullTrust_5() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____fullTrust_5)); }
	inline NamedPermissionSet_t2915669112 * get__fullTrust_5() const { return ____fullTrust_5; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__fullTrust_5() { return &____fullTrust_5; }
	inline void set__fullTrust_5(NamedPermissionSet_t2915669112 * value)
	{
		____fullTrust_5 = value;
		Il2CppCodeGenWriteBarrier((&____fullTrust_5), value);
	}

	inline static int32_t get_offset_of__localIntranet_6() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____localIntranet_6)); }
	inline NamedPermissionSet_t2915669112 * get__localIntranet_6() const { return ____localIntranet_6; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__localIntranet_6() { return &____localIntranet_6; }
	inline void set__localIntranet_6(NamedPermissionSet_t2915669112 * value)
	{
		____localIntranet_6 = value;
		Il2CppCodeGenWriteBarrier((&____localIntranet_6), value);
	}

	inline static int32_t get_offset_of__internet_7() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____internet_7)); }
	inline NamedPermissionSet_t2915669112 * get__internet_7() const { return ____internet_7; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__internet_7() { return &____internet_7; }
	inline void set__internet_7(NamedPermissionSet_t2915669112 * value)
	{
		____internet_7 = value;
		Il2CppCodeGenWriteBarrier((&____internet_7), value);
	}

	inline static int32_t get_offset_of__skipVerification_8() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____skipVerification_8)); }
	inline NamedPermissionSet_t2915669112 * get__skipVerification_8() const { return ____skipVerification_8; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__skipVerification_8() { return &____skipVerification_8; }
	inline void set__skipVerification_8(NamedPermissionSet_t2915669112 * value)
	{
		____skipVerification_8 = value;
		Il2CppCodeGenWriteBarrier((&____skipVerification_8), value);
	}

	inline static int32_t get_offset_of__execution_9() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____execution_9)); }
	inline NamedPermissionSet_t2915669112 * get__execution_9() const { return ____execution_9; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__execution_9() { return &____execution_9; }
	inline void set__execution_9(NamedPermissionSet_t2915669112 * value)
	{
		____execution_9 = value;
		Il2CppCodeGenWriteBarrier((&____execution_9), value);
	}

	inline static int32_t get_offset_of__nothing_10() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____nothing_10)); }
	inline NamedPermissionSet_t2915669112 * get__nothing_10() const { return ____nothing_10; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__nothing_10() { return &____nothing_10; }
	inline void set__nothing_10(NamedPermissionSet_t2915669112 * value)
	{
		____nothing_10 = value;
		Il2CppCodeGenWriteBarrier((&____nothing_10), value);
	}

	inline static int32_t get_offset_of__everything_11() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____everything_11)); }
	inline NamedPermissionSet_t2915669112 * get__everything_11() const { return ____everything_11; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__everything_11() { return &____everything_11; }
	inline void set__everything_11(NamedPermissionSet_t2915669112 * value)
	{
		____everything_11 = value;
		Il2CppCodeGenWriteBarrier((&____everything_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPOLICIES_T2520506789_H
#ifndef CODEGROUP_T3811807446_H
#define CODEGROUP_T3811807446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.CodeGroup
struct  CodeGroup_t3811807446  : public RuntimeObject
{
public:
	// System.Security.Policy.PolicyStatement System.Security.Policy.CodeGroup::m_policy
	PolicyStatement_t3052133691 * ___m_policy_0;
	// System.Security.Policy.IMembershipCondition System.Security.Policy.CodeGroup::m_membershipCondition
	RuntimeObject* ___m_membershipCondition_1;
	// System.String System.Security.Policy.CodeGroup::m_description
	String_t* ___m_description_2;
	// System.String System.Security.Policy.CodeGroup::m_name
	String_t* ___m_name_3;
	// System.Collections.ArrayList System.Security.Policy.CodeGroup::m_children
	ArrayList_t2718874744 * ___m_children_4;

public:
	inline static int32_t get_offset_of_m_policy_0() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_policy_0)); }
	inline PolicyStatement_t3052133691 * get_m_policy_0() const { return ___m_policy_0; }
	inline PolicyStatement_t3052133691 ** get_address_of_m_policy_0() { return &___m_policy_0; }
	inline void set_m_policy_0(PolicyStatement_t3052133691 * value)
	{
		___m_policy_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_policy_0), value);
	}

	inline static int32_t get_offset_of_m_membershipCondition_1() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_membershipCondition_1)); }
	inline RuntimeObject* get_m_membershipCondition_1() const { return ___m_membershipCondition_1; }
	inline RuntimeObject** get_address_of_m_membershipCondition_1() { return &___m_membershipCondition_1; }
	inline void set_m_membershipCondition_1(RuntimeObject* value)
	{
		___m_membershipCondition_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_membershipCondition_1), value);
	}

	inline static int32_t get_offset_of_m_description_2() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_description_2)); }
	inline String_t* get_m_description_2() const { return ___m_description_2; }
	inline String_t** get_address_of_m_description_2() { return &___m_description_2; }
	inline void set_m_description_2(String_t* value)
	{
		___m_description_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_description_2), value);
	}

	inline static int32_t get_offset_of_m_name_3() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_name_3)); }
	inline String_t* get_m_name_3() const { return ___m_name_3; }
	inline String_t** get_address_of_m_name_3() { return &___m_name_3; }
	inline void set_m_name_3(String_t* value)
	{
		___m_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_3), value);
	}

	inline static int32_t get_offset_of_m_children_4() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_children_4)); }
	inline ArrayList_t2718874744 * get_m_children_4() const { return ___m_children_4; }
	inline ArrayList_t2718874744 ** get_address_of_m_children_4() { return &___m_children_4; }
	inline void set_m_children_4(ArrayList_t2718874744 * value)
	{
		___m_children_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_children_4), value);
	}
};

struct CodeGroup_t3811807446_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Policy.CodeGroup::<>f__switch$map2E
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map2E_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2E_5() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446_StaticFields, ___U3CU3Ef__switchU24map2E_5)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map2E_5() const { return ___U3CU3Ef__switchU24map2E_5; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map2E_5() { return &___U3CU3Ef__switchU24map2E_5; }
	inline void set_U3CU3Ef__switchU24map2E_5(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map2E_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2E_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEGROUP_T3811807446_H
#ifndef HASH_T5925575_H
#define HASH_T5925575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Hash
struct  Hash_t5925575  : public RuntimeObject
{
public:
	// System.Reflection.Assembly System.Security.Policy.Hash::assembly
	Assembly_t * ___assembly_0;
	// System.Byte[] System.Security.Policy.Hash::data
	ByteU5BU5D_t4116647657* ___data_1;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(Hash_t5925575, ___assembly_0)); }
	inline Assembly_t * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_0), value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Hash_t5925575, ___data_1)); }
	inline ByteU5BU5D_t4116647657* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t4116647657* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASH_T5925575_H
#ifndef GACINSTALLED_T3565883570_H
#define GACINSTALLED_T3565883570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.GacInstalled
struct  GacInstalled_t3565883570  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GACINSTALLED_T3565883570_H
#ifndef EVIDENCEENUMERATOR_T1708166667_H
#define EVIDENCEENUMERATOR_T1708166667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence/EvidenceEnumerator
struct  EvidenceEnumerator_t1708166667  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::currentEnum
	RuntimeObject* ___currentEnum_0;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::hostEnum
	RuntimeObject* ___hostEnum_1;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::assemblyEnum
	RuntimeObject* ___assemblyEnum_2;

public:
	inline static int32_t get_offset_of_currentEnum_0() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t1708166667, ___currentEnum_0)); }
	inline RuntimeObject* get_currentEnum_0() const { return ___currentEnum_0; }
	inline RuntimeObject** get_address_of_currentEnum_0() { return &___currentEnum_0; }
	inline void set_currentEnum_0(RuntimeObject* value)
	{
		___currentEnum_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentEnum_0), value);
	}

	inline static int32_t get_offset_of_hostEnum_1() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t1708166667, ___hostEnum_1)); }
	inline RuntimeObject* get_hostEnum_1() const { return ___hostEnum_1; }
	inline RuntimeObject** get_address_of_hostEnum_1() { return &___hostEnum_1; }
	inline void set_hostEnum_1(RuntimeObject* value)
	{
		___hostEnum_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEnum_1), value);
	}

	inline static int32_t get_offset_of_assemblyEnum_2() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t1708166667, ___assemblyEnum_2)); }
	inline RuntimeObject* get_assemblyEnum_2() const { return ___assemblyEnum_2; }
	inline RuntimeObject** get_address_of_assemblyEnum_2() { return &___assemblyEnum_2; }
	inline void set_assemblyEnum_2(RuntimeObject* value)
	{
		___assemblyEnum_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEnum_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCEENUMERATOR_T1708166667_H
#ifndef URL_T207802215_H
#define URL_T207802215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Url
struct  Url_t207802215  : public RuntimeObject
{
public:
	// System.String System.Security.Policy.Url::origin_url
	String_t* ___origin_url_0;

public:
	inline static int32_t get_offset_of_origin_url_0() { return static_cast<int32_t>(offsetof(Url_t207802215, ___origin_url_0)); }
	inline String_t* get_origin_url_0() const { return ___origin_url_0; }
	inline String_t** get_address_of_origin_url_0() { return &___origin_url_0; }
	inline void set_origin_url_0(String_t* value)
	{
		___origin_url_0 = value;
		Il2CppCodeGenWriteBarrier((&___origin_url_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URL_T207802215_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3123823036 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1188251036 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoder_fallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoder_fallback_4)); }
	inline EncoderFallback_t1188251036 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1188251036 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2843939325* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1523322056 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1523322056 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1523322056 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1523322056 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1523322056 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t2843939325* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t2843939325* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t1523322056 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t1523322056 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t1523322056 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t1523322056 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t1523322056 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t1523322056 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t1523322056 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t1523322056 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t1523322056 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t1523322056 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t1523322056 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t1523322056 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t1523322056 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t1523322056 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t1523322056 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t1523322056 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t1523322056 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef NATIVEEVENTCALLS_T570794723_H
#define NATIVEEVENTCALLS_T570794723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.NativeEventCalls
struct  NativeEventCalls_t570794723  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEEVENTCALLS_T570794723_H
#ifndef EXECUTIONCONTEXT_T1748372627_H
#define EXECUTIONCONTEXT_T1748372627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ExecutionContext
struct  ExecutionContext_t1748372627  : public RuntimeObject
{
public:
	// System.Security.SecurityContext System.Threading.ExecutionContext::_sc
	SecurityContext_t2435442044 * ____sc_0;
	// System.Boolean System.Threading.ExecutionContext::_suppressFlow
	bool ____suppressFlow_1;
	// System.Boolean System.Threading.ExecutionContext::_capture
	bool ____capture_2;

public:
	inline static int32_t get_offset_of__sc_0() { return static_cast<int32_t>(offsetof(ExecutionContext_t1748372627, ____sc_0)); }
	inline SecurityContext_t2435442044 * get__sc_0() const { return ____sc_0; }
	inline SecurityContext_t2435442044 ** get_address_of__sc_0() { return &____sc_0; }
	inline void set__sc_0(SecurityContext_t2435442044 * value)
	{
		____sc_0 = value;
		Il2CppCodeGenWriteBarrier((&____sc_0), value);
	}

	inline static int32_t get_offset_of__suppressFlow_1() { return static_cast<int32_t>(offsetof(ExecutionContext_t1748372627, ____suppressFlow_1)); }
	inline bool get__suppressFlow_1() const { return ____suppressFlow_1; }
	inline bool* get_address_of__suppressFlow_1() { return &____suppressFlow_1; }
	inline void set__suppressFlow_1(bool value)
	{
		____suppressFlow_1 = value;
	}

	inline static int32_t get_offset_of__capture_2() { return static_cast<int32_t>(offsetof(ExecutionContext_t1748372627, ____capture_2)); }
	inline bool get__capture_2() const { return ____capture_2; }
	inline bool* get_address_of__capture_2() { return &____capture_2; }
	inline void set__capture_2(bool value)
	{
		____capture_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTIONCONTEXT_T1748372627_H
#ifndef MONITOR_T2197244473_H
#define MONITOR_T2197244473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Monitor
struct  Monitor_t2197244473  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONITOR_T2197244473_H
#ifndef COMPRESSEDSTACK_T1202932761_H
#define COMPRESSEDSTACK_T1202932761_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CompressedStack
struct  CompressedStack_t1202932761  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Threading.CompressedStack::_list
	ArrayList_t2718874744 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(CompressedStack_t1202932761, ____list_0)); }
	inline ArrayList_t2718874744 * get__list_0() const { return ____list_0; }
	inline ArrayList_t2718874744 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t2718874744 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSEDSTACK_T1202932761_H
#ifndef ENCODERFALLBACKBUFFER_T3523102303_H
#define ENCODERFALLBACKBUFFER_T3523102303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackBuffer
struct  EncoderFallbackBuffer_t3523102303  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKBUFFER_T3523102303_H
#ifndef DECODERFALLBACK_T3123823036_H
#define DECODERFALLBACK_T3123823036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallback
struct  DecoderFallback_t3123823036  : public RuntimeObject
{
public:

public:
};

struct DecoderFallback_t3123823036_StaticFields
{
public:
	// System.Text.DecoderFallback System.Text.DecoderFallback::exception_fallback
	DecoderFallback_t3123823036 * ___exception_fallback_0;
	// System.Text.DecoderFallback System.Text.DecoderFallback::replacement_fallback
	DecoderFallback_t3123823036 * ___replacement_fallback_1;
	// System.Text.DecoderFallback System.Text.DecoderFallback::standard_safe_fallback
	DecoderFallback_t3123823036 * ___standard_safe_fallback_2;

public:
	inline static int32_t get_offset_of_exception_fallback_0() { return static_cast<int32_t>(offsetof(DecoderFallback_t3123823036_StaticFields, ___exception_fallback_0)); }
	inline DecoderFallback_t3123823036 * get_exception_fallback_0() const { return ___exception_fallback_0; }
	inline DecoderFallback_t3123823036 ** get_address_of_exception_fallback_0() { return &___exception_fallback_0; }
	inline void set_exception_fallback_0(DecoderFallback_t3123823036 * value)
	{
		___exception_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_fallback_0), value);
	}

	inline static int32_t get_offset_of_replacement_fallback_1() { return static_cast<int32_t>(offsetof(DecoderFallback_t3123823036_StaticFields, ___replacement_fallback_1)); }
	inline DecoderFallback_t3123823036 * get_replacement_fallback_1() const { return ___replacement_fallback_1; }
	inline DecoderFallback_t3123823036 ** get_address_of_replacement_fallback_1() { return &___replacement_fallback_1; }
	inline void set_replacement_fallback_1(DecoderFallback_t3123823036 * value)
	{
		___replacement_fallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_fallback_1), value);
	}

	inline static int32_t get_offset_of_standard_safe_fallback_2() { return static_cast<int32_t>(offsetof(DecoderFallback_t3123823036_StaticFields, ___standard_safe_fallback_2)); }
	inline DecoderFallback_t3123823036 * get_standard_safe_fallback_2() const { return ___standard_safe_fallback_2; }
	inline DecoderFallback_t3123823036 ** get_address_of_standard_safe_fallback_2() { return &___standard_safe_fallback_2; }
	inline void set_standard_safe_fallback_2(DecoderFallback_t3123823036 * value)
	{
		___standard_safe_fallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___standard_safe_fallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACK_T3123823036_H
#ifndef DECODER_T2204182725_H
#define DECODER_T2204182725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Decoder
struct  Decoder_t2204182725  : public RuntimeObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t3123823036 * ___fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t2402303981 * ___fallback_buffer_1;

public:
	inline static int32_t get_offset_of_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t2204182725, ___fallback_0)); }
	inline DecoderFallback_t3123823036 * get_fallback_0() const { return ___fallback_0; }
	inline DecoderFallback_t3123823036 ** get_address_of_fallback_0() { return &___fallback_0; }
	inline void set_fallback_0(DecoderFallback_t3123823036 * value)
	{
		___fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___fallback_0), value);
	}

	inline static int32_t get_offset_of_fallback_buffer_1() { return static_cast<int32_t>(offsetof(Decoder_t2204182725, ___fallback_buffer_1)); }
	inline DecoderFallbackBuffer_t2402303981 * get_fallback_buffer_1() const { return ___fallback_buffer_1; }
	inline DecoderFallbackBuffer_t2402303981 ** get_address_of_fallback_buffer_1() { return &___fallback_buffer_1; }
	inline void set_fallback_buffer_1(DecoderFallbackBuffer_t2402303981 * value)
	{
		___fallback_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___fallback_buffer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T2204182725_H
#ifndef INTERLOCKED_T2273387594_H
#define INTERLOCKED_T2273387594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Interlocked
struct  Interlocked_t2273387594  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERLOCKED_T2273387594_H
#ifndef ENCODERFALLBACK_T1188251036_H
#define ENCODERFALLBACK_T1188251036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallback
struct  EncoderFallback_t1188251036  : public RuntimeObject
{
public:

public:
};

struct EncoderFallback_t1188251036_StaticFields
{
public:
	// System.Text.EncoderFallback System.Text.EncoderFallback::exception_fallback
	EncoderFallback_t1188251036 * ___exception_fallback_0;
	// System.Text.EncoderFallback System.Text.EncoderFallback::replacement_fallback
	EncoderFallback_t1188251036 * ___replacement_fallback_1;
	// System.Text.EncoderFallback System.Text.EncoderFallback::standard_safe_fallback
	EncoderFallback_t1188251036 * ___standard_safe_fallback_2;

public:
	inline static int32_t get_offset_of_exception_fallback_0() { return static_cast<int32_t>(offsetof(EncoderFallback_t1188251036_StaticFields, ___exception_fallback_0)); }
	inline EncoderFallback_t1188251036 * get_exception_fallback_0() const { return ___exception_fallback_0; }
	inline EncoderFallback_t1188251036 ** get_address_of_exception_fallback_0() { return &___exception_fallback_0; }
	inline void set_exception_fallback_0(EncoderFallback_t1188251036 * value)
	{
		___exception_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_fallback_0), value);
	}

	inline static int32_t get_offset_of_replacement_fallback_1() { return static_cast<int32_t>(offsetof(EncoderFallback_t1188251036_StaticFields, ___replacement_fallback_1)); }
	inline EncoderFallback_t1188251036 * get_replacement_fallback_1() const { return ___replacement_fallback_1; }
	inline EncoderFallback_t1188251036 ** get_address_of_replacement_fallback_1() { return &___replacement_fallback_1; }
	inline void set_replacement_fallback_1(EncoderFallback_t1188251036 * value)
	{
		___replacement_fallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_fallback_1), value);
	}

	inline static int32_t get_offset_of_standard_safe_fallback_2() { return static_cast<int32_t>(offsetof(EncoderFallback_t1188251036_StaticFields, ___standard_safe_fallback_2)); }
	inline EncoderFallback_t1188251036 * get_standard_safe_fallback_2() const { return ___standard_safe_fallback_2; }
	inline EncoderFallback_t1188251036 ** get_address_of_standard_safe_fallback_2() { return &___standard_safe_fallback_2; }
	inline void set_standard_safe_fallback_2(EncoderFallback_t1188251036 * value)
	{
		___standard_safe_fallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___standard_safe_fallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACK_T1188251036_H
#ifndef CODEACCESSPERMISSION_T2681295399_H
#define CODEACCESSPERMISSION_T2681295399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.CodeAccessPermission
struct  CodeAccessPermission_t2681295399  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSPERMISSION_T2681295399_H
#ifndef DECODERFALLBACKBUFFER_T2402303981_H
#define DECODERFALLBACKBUFFER_T2402303981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackBuffer
struct  DecoderFallbackBuffer_t2402303981  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKBUFFER_T2402303981_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef STRONGNAMEPUBLICKEYBLOB_T3355146440_H
#define STRONGNAMEPUBLICKEYBLOB_T3355146440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNamePublicKeyBlob
struct  StrongNamePublicKeyBlob_t3355146440  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Permissions.StrongNamePublicKeyBlob::pubkey
	ByteU5BU5D_t4116647657* ___pubkey_0;

public:
	inline static int32_t get_offset_of_pubkey_0() { return static_cast<int32_t>(offsetof(StrongNamePublicKeyBlob_t3355146440, ___pubkey_0)); }
	inline ByteU5BU5D_t4116647657* get_pubkey_0() const { return ___pubkey_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_pubkey_0() { return &___pubkey_0; }
	inline void set_pubkey_0(ByteU5BU5D_t4116647657* value)
	{
		___pubkey_0 = value;
		Il2CppCodeGenWriteBarrier((&___pubkey_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEPUBLICKEYBLOB_T3355146440_H
#ifndef KEYCONTAINERPERMISSIONACCESSENTRYCOLLECTION_T4144114052_H
#define KEYCONTAINERPERMISSIONACCESSENTRYCOLLECTION_T4144114052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection
struct  KeyContainerPermissionAccessEntryCollection_t4144114052  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Permissions.KeyContainerPermissionAccessEntryCollection::_list
	ArrayList_t2718874744 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntryCollection_t4144114052, ____list_0)); }
	inline ArrayList_t2718874744 * get__list_0() const { return ____list_0; }
	inline ArrayList_t2718874744 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t2718874744 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSIONACCESSENTRYCOLLECTION_T4144114052_H
#ifndef KEYCONTAINERPERMISSIONACCESSENTRYENUMERATOR_T3641947072_H
#define KEYCONTAINERPERMISSIONACCESSENTRYENUMERATOR_T3641947072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator
struct  KeyContainerPermissionAccessEntryEnumerator_t3641947072  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator::e
	RuntimeObject* ___e_0;

public:
	inline static int32_t get_offset_of_e_0() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntryEnumerator_t3641947072, ___e_0)); }
	inline RuntimeObject* get_e_0() const { return ___e_0; }
	inline RuntimeObject** get_address_of_e_0() { return &___e_0; }
	inline void set_e_0(RuntimeObject* value)
	{
		___e_0 = value;
		Il2CppCodeGenWriteBarrier((&___e_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSIONACCESSENTRYENUMERATOR_T3641947072_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef ALLMEMBERSHIPCONDITION_T198137363_H
#define ALLMEMBERSHIPCONDITION_T198137363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.AllMembershipCondition
struct  AllMembershipCondition_t198137363  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.AllMembershipCondition::version
	int32_t ___version_0;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(AllMembershipCondition_t198137363, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLMEMBERSHIPCONDITION_T198137363_H
#ifndef APPLICATIONTRUST_T3270368423_H
#define APPLICATIONTRUST_T3270368423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationTrust
struct  ApplicationTrust_t3270368423  : public RuntimeObject
{
public:
	// System.ApplicationIdentity System.Security.Policy.ApplicationTrust::_appid
	ApplicationIdentity_t1917735356 * ____appid_0;
	// System.Security.Policy.PolicyStatement System.Security.Policy.ApplicationTrust::_defaultPolicy
	PolicyStatement_t3052133691 * ____defaultPolicy_1;
	// System.Object System.Security.Policy.ApplicationTrust::_xtranfo
	RuntimeObject * ____xtranfo_2;
	// System.Boolean System.Security.Policy.ApplicationTrust::_trustrun
	bool ____trustrun_3;
	// System.Boolean System.Security.Policy.ApplicationTrust::_persist
	bool ____persist_4;
	// System.Collections.Generic.IList`1<System.Security.Policy.StrongName> System.Security.Policy.ApplicationTrust::fullTrustAssemblies
	RuntimeObject* ___fullTrustAssemblies_5;

public:
	inline static int32_t get_offset_of__appid_0() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____appid_0)); }
	inline ApplicationIdentity_t1917735356 * get__appid_0() const { return ____appid_0; }
	inline ApplicationIdentity_t1917735356 ** get_address_of__appid_0() { return &____appid_0; }
	inline void set__appid_0(ApplicationIdentity_t1917735356 * value)
	{
		____appid_0 = value;
		Il2CppCodeGenWriteBarrier((&____appid_0), value);
	}

	inline static int32_t get_offset_of__defaultPolicy_1() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____defaultPolicy_1)); }
	inline PolicyStatement_t3052133691 * get__defaultPolicy_1() const { return ____defaultPolicy_1; }
	inline PolicyStatement_t3052133691 ** get_address_of__defaultPolicy_1() { return &____defaultPolicy_1; }
	inline void set__defaultPolicy_1(PolicyStatement_t3052133691 * value)
	{
		____defaultPolicy_1 = value;
		Il2CppCodeGenWriteBarrier((&____defaultPolicy_1), value);
	}

	inline static int32_t get_offset_of__xtranfo_2() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____xtranfo_2)); }
	inline RuntimeObject * get__xtranfo_2() const { return ____xtranfo_2; }
	inline RuntimeObject ** get_address_of__xtranfo_2() { return &____xtranfo_2; }
	inline void set__xtranfo_2(RuntimeObject * value)
	{
		____xtranfo_2 = value;
		Il2CppCodeGenWriteBarrier((&____xtranfo_2), value);
	}

	inline static int32_t get_offset_of__trustrun_3() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____trustrun_3)); }
	inline bool get__trustrun_3() const { return ____trustrun_3; }
	inline bool* get_address_of__trustrun_3() { return &____trustrun_3; }
	inline void set__trustrun_3(bool value)
	{
		____trustrun_3 = value;
	}

	inline static int32_t get_offset_of__persist_4() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____persist_4)); }
	inline bool get__persist_4() const { return ____persist_4; }
	inline bool* get_address_of__persist_4() { return &____persist_4; }
	inline void set__persist_4(bool value)
	{
		____persist_4 = value;
	}

	inline static int32_t get_offset_of_fullTrustAssemblies_5() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ___fullTrustAssemblies_5)); }
	inline RuntimeObject* get_fullTrustAssemblies_5() const { return ___fullTrustAssemblies_5; }
	inline RuntimeObject** get_address_of_fullTrustAssemblies_5() { return &___fullTrustAssemblies_5; }
	inline void set_fullTrustAssemblies_5(RuntimeObject* value)
	{
		___fullTrustAssemblies_5 = value;
		Il2CppCodeGenWriteBarrier((&___fullTrustAssemblies_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONTRUST_T3270368423_H
#ifndef CODECONNECTACCESS_T1103527196_H
#define CODECONNECTACCESS_T1103527196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.CodeConnectAccess
struct  CodeConnectAccess_t1103527196  : public RuntimeObject
{
public:
	// System.String System.Security.Policy.CodeConnectAccess::_scheme
	String_t* ____scheme_4;
	// System.Int32 System.Security.Policy.CodeConnectAccess::_port
	int32_t ____port_5;

public:
	inline static int32_t get_offset_of__scheme_4() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196, ____scheme_4)); }
	inline String_t* get__scheme_4() const { return ____scheme_4; }
	inline String_t** get_address_of__scheme_4() { return &____scheme_4; }
	inline void set__scheme_4(String_t* value)
	{
		____scheme_4 = value;
		Il2CppCodeGenWriteBarrier((&____scheme_4), value);
	}

	inline static int32_t get_offset_of__port_5() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196, ____port_5)); }
	inline int32_t get__port_5() const { return ____port_5; }
	inline int32_t* get_address_of__port_5() { return &____port_5; }
	inline void set__port_5(int32_t value)
	{
		____port_5 = value;
	}
};

struct CodeConnectAccess_t1103527196_StaticFields
{
public:
	// System.String System.Security.Policy.CodeConnectAccess::AnyScheme
	String_t* ___AnyScheme_0;
	// System.Int32 System.Security.Policy.CodeConnectAccess::DefaultPort
	int32_t ___DefaultPort_1;
	// System.Int32 System.Security.Policy.CodeConnectAccess::OriginPort
	int32_t ___OriginPort_2;
	// System.String System.Security.Policy.CodeConnectAccess::OriginScheme
	String_t* ___OriginScheme_3;

public:
	inline static int32_t get_offset_of_AnyScheme_0() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196_StaticFields, ___AnyScheme_0)); }
	inline String_t* get_AnyScheme_0() const { return ___AnyScheme_0; }
	inline String_t** get_address_of_AnyScheme_0() { return &___AnyScheme_0; }
	inline void set_AnyScheme_0(String_t* value)
	{
		___AnyScheme_0 = value;
		Il2CppCodeGenWriteBarrier((&___AnyScheme_0), value);
	}

	inline static int32_t get_offset_of_DefaultPort_1() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196_StaticFields, ___DefaultPort_1)); }
	inline int32_t get_DefaultPort_1() const { return ___DefaultPort_1; }
	inline int32_t* get_address_of_DefaultPort_1() { return &___DefaultPort_1; }
	inline void set_DefaultPort_1(int32_t value)
	{
		___DefaultPort_1 = value;
	}

	inline static int32_t get_offset_of_OriginPort_2() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196_StaticFields, ___OriginPort_2)); }
	inline int32_t get_OriginPort_2() const { return ___OriginPort_2; }
	inline int32_t* get_address_of_OriginPort_2() { return &___OriginPort_2; }
	inline void set_OriginPort_2(int32_t value)
	{
		___OriginPort_2 = value;
	}

	inline static int32_t get_offset_of_OriginScheme_3() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196_StaticFields, ___OriginScheme_3)); }
	inline String_t* get_OriginScheme_3() const { return ___OriginScheme_3; }
	inline String_t** get_address_of_OriginScheme_3() { return &___OriginScheme_3; }
	inline void set_OriginScheme_3(String_t* value)
	{
		___OriginScheme_3 = value;
		Il2CppCodeGenWriteBarrier((&___OriginScheme_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODECONNECTACCESS_T1103527196_H
#ifndef ENCODEREXCEPTIONFALLBACK_T1243849599_H
#define ENCODEREXCEPTIONFALLBACK_T1243849599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallback
struct  EncoderExceptionFallback_t1243849599  : public EncoderFallback_t1188251036
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACK_T1243849599_H
#ifndef ENCODEREXCEPTIONFALLBACKBUFFER_T3597232471_H
#define ENCODEREXCEPTIONFALLBACKBUFFER_T3597232471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallbackBuffer
struct  EncoderExceptionFallbackBuffer_t3597232471  : public EncoderFallbackBuffer_t3523102303
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACKBUFFER_T3597232471_H
#ifndef ENCODERREPLACEMENTFALLBACK_T1623206753_H
#define ENCODERREPLACEMENTFALLBACK_T1623206753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallback
struct  EncoderReplacementFallback_t1623206753  : public EncoderFallback_t1188251036
{
public:
	// System.String System.Text.EncoderReplacementFallback::replacement
	String_t* ___replacement_3;

public:
	inline static int32_t get_offset_of_replacement_3() { return static_cast<int32_t>(offsetof(EncoderReplacementFallback_t1623206753, ___replacement_3)); }
	inline String_t* get_replacement_3() const { return ___replacement_3; }
	inline String_t** get_address_of_replacement_3() { return &___replacement_3; }
	inline void set_replacement_3(String_t* value)
	{
		___replacement_3 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACK_T1623206753_H
#ifndef PUBLISHERIDENTITYPERMISSION_T594127488_H
#define PUBLISHERIDENTITYPERMISSION_T594127488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.PublisherIdentityPermission
struct  PublisherIdentityPermission_t594127488  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Permissions.PublisherIdentityPermission::x509
	X509Certificate_t713131622 * ___x509_0;

public:
	inline static int32_t get_offset_of_x509_0() { return static_cast<int32_t>(offsetof(PublisherIdentityPermission_t594127488, ___x509_0)); }
	inline X509Certificate_t713131622 * get_x509_0() const { return ___x509_0; }
	inline X509Certificate_t713131622 ** get_address_of_x509_0() { return &___x509_0; }
	inline void set_x509_0(X509Certificate_t713131622 * value)
	{
		___x509_0 = value;
		Il2CppCodeGenWriteBarrier((&___x509_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUBLISHERIDENTITYPERMISSION_T594127488_H
#ifndef SECURITYATTRIBUTE_T4008260079_H
#define SECURITYATTRIBUTE_T4008260079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAttribute
struct  SecurityAttribute_t4008260079  : public Attribute_t861562559
{
public:
	// System.Boolean System.Security.Permissions.SecurityAttribute::m_Unrestricted
	bool ___m_Unrestricted_0;

public:
	inline static int32_t get_offset_of_m_Unrestricted_0() { return static_cast<int32_t>(offsetof(SecurityAttribute_t4008260079, ___m_Unrestricted_0)); }
	inline bool get_m_Unrestricted_0() const { return ___m_Unrestricted_0; }
	inline bool* get_address_of_m_Unrestricted_0() { return &___m_Unrestricted_0; }
	inline void set_m_Unrestricted_0(bool value)
	{
		___m_Unrestricted_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T4008260079_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef DECODEREXCEPTIONFALLBACKBUFFER_T90938522_H
#define DECODEREXCEPTIONFALLBACKBUFFER_T90938522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderExceptionFallbackBuffer
struct  DecoderExceptionFallbackBuffer_t90938522  : public DecoderFallbackBuffer_t2402303981
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEREXCEPTIONFALLBACKBUFFER_T90938522_H
#ifndef DECODERREPLACEMENTFALLBACKBUFFER_T841144779_H
#define DECODERREPLACEMENTFALLBACKBUFFER_T841144779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallbackBuffer
struct  DecoderReplacementFallbackBuffer_t841144779  : public DecoderFallbackBuffer_t2402303981
{
public:
	// System.Boolean System.Text.DecoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned_0;
	// System.Int32 System.Text.DecoderReplacementFallbackBuffer::current
	int32_t ___current_1;
	// System.String System.Text.DecoderReplacementFallbackBuffer::replacement
	String_t* ___replacement_2;

public:
	inline static int32_t get_offset_of_fallback_assigned_0() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t841144779, ___fallback_assigned_0)); }
	inline bool get_fallback_assigned_0() const { return ___fallback_assigned_0; }
	inline bool* get_address_of_fallback_assigned_0() { return &___fallback_assigned_0; }
	inline void set_fallback_assigned_0(bool value)
	{
		___fallback_assigned_0 = value;
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t841144779, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_replacement_2() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t841144779, ___replacement_2)); }
	inline String_t* get_replacement_2() const { return ___replacement_2; }
	inline String_t** get_address_of_replacement_2() { return &___replacement_2; }
	inline void set_replacement_2(String_t* value)
	{
		___replacement_2 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACKBUFFER_T841144779_H
#ifndef DECODERREPLACEMENTFALLBACK_T1462101135_H
#define DECODERREPLACEMENTFALLBACK_T1462101135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallback
struct  DecoderReplacementFallback_t1462101135  : public DecoderFallback_t3123823036
{
public:
	// System.String System.Text.DecoderReplacementFallback::replacement
	String_t* ___replacement_3;

public:
	inline static int32_t get_offset_of_replacement_3() { return static_cast<int32_t>(offsetof(DecoderReplacementFallback_t1462101135, ___replacement_3)); }
	inline String_t* get_replacement_3() const { return ___replacement_3; }
	inline String_t** get_address_of_replacement_3() { return &___replacement_3; }
	inline void set_replacement_3(String_t* value)
	{
		___replacement_3 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACK_T1462101135_H
#ifndef ENCODERREPLACEMENTFALLBACKBUFFER_T1863187162_H
#define ENCODERREPLACEMENTFALLBACKBUFFER_T1863187162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallbackBuffer
struct  EncoderReplacementFallbackBuffer_t1863187162  : public EncoderFallbackBuffer_t3523102303
{
public:
	// System.String System.Text.EncoderReplacementFallbackBuffer::replacement
	String_t* ___replacement_0;
	// System.Int32 System.Text.EncoderReplacementFallbackBuffer::current
	int32_t ___current_1;
	// System.Boolean System.Text.EncoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned_2;

public:
	inline static int32_t get_offset_of_replacement_0() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t1863187162, ___replacement_0)); }
	inline String_t* get_replacement_0() const { return ___replacement_0; }
	inline String_t** get_address_of_replacement_0() { return &___replacement_0; }
	inline void set_replacement_0(String_t* value)
	{
		___replacement_0 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t1863187162, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_fallback_assigned_2() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t1863187162, ___fallback_assigned_2)); }
	inline bool get_fallback_assigned_2() const { return ___fallback_assigned_2; }
	inline bool* get_address_of_fallback_assigned_2() { return &___fallback_assigned_2; }
	inline void set_fallback_assigned_2(bool value)
	{
		___fallback_assigned_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACKBUFFER_T1863187162_H
#ifndef UTF8ENCODING_T3956466879_H
#define UTF8ENCODING_T3956466879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding
struct  UTF8Encoding_t3956466879  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitIdentifier
	bool ___emitIdentifier_28;

public:
	inline static int32_t get_offset_of_emitIdentifier_28() { return static_cast<int32_t>(offsetof(UTF8Encoding_t3956466879, ___emitIdentifier_28)); }
	inline bool get_emitIdentifier_28() const { return ___emitIdentifier_28; }
	inline bool* get_address_of_emitIdentifier_28() { return &___emitIdentifier_28; }
	inline void set_emitIdentifier_28(bool value)
	{
		___emitIdentifier_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8ENCODING_T3956466879_H
#ifndef UTF7DECODER_T2247208115_H
#define UTF7DECODER_T2247208115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding/UTF7Decoder
struct  UTF7Decoder_t2247208115  : public Decoder_t2204182725
{
public:
	// System.Int32 System.Text.UTF7Encoding/UTF7Decoder::leftOver
	int32_t ___leftOver_2;

public:
	inline static int32_t get_offset_of_leftOver_2() { return static_cast<int32_t>(offsetof(UTF7Decoder_t2247208115, ___leftOver_2)); }
	inline int32_t get_leftOver_2() const { return ___leftOver_2; }
	inline int32_t* get_address_of_leftOver_2() { return &___leftOver_2; }
	inline void set_leftOver_2(int32_t value)
	{
		___leftOver_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF7DECODER_T2247208115_H
#ifndef UTF8DECODER_T2159214862_H
#define UTF8DECODER_T2159214862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding/UTF8Decoder
struct  UTF8Decoder_t2159214862  : public Decoder_t2204182725
{
public:
	// System.UInt32 System.Text.UTF8Encoding/UTF8Decoder::leftOverBits
	uint32_t ___leftOverBits_2;
	// System.UInt32 System.Text.UTF8Encoding/UTF8Decoder::leftOverCount
	uint32_t ___leftOverCount_3;

public:
	inline static int32_t get_offset_of_leftOverBits_2() { return static_cast<int32_t>(offsetof(UTF8Decoder_t2159214862, ___leftOverBits_2)); }
	inline uint32_t get_leftOverBits_2() const { return ___leftOverBits_2; }
	inline uint32_t* get_address_of_leftOverBits_2() { return &___leftOverBits_2; }
	inline void set_leftOverBits_2(uint32_t value)
	{
		___leftOverBits_2 = value;
	}

	inline static int32_t get_offset_of_leftOverCount_3() { return static_cast<int32_t>(offsetof(UTF8Decoder_t2159214862, ___leftOverCount_3)); }
	inline uint32_t get_leftOverCount_3() const { return ___leftOverCount_3; }
	inline uint32_t* get_address_of_leftOverCount_3() { return &___leftOverCount_3; }
	inline void set_leftOverCount_3(uint32_t value)
	{
		___leftOverCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8DECODER_T2159214862_H
#ifndef UTF32DECODER_T635925672_H
#define UTF32DECODER_T635925672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF32Encoding/UTF32Decoder
struct  UTF32Decoder_t635925672  : public Decoder_t2204182725
{
public:
	// System.Boolean System.Text.UTF32Encoding/UTF32Decoder::bigEndian
	bool ___bigEndian_2;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::leftOverByte
	int32_t ___leftOverByte_3;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::leftOverLength
	int32_t ___leftOverLength_4;

public:
	inline static int32_t get_offset_of_bigEndian_2() { return static_cast<int32_t>(offsetof(UTF32Decoder_t635925672, ___bigEndian_2)); }
	inline bool get_bigEndian_2() const { return ___bigEndian_2; }
	inline bool* get_address_of_bigEndian_2() { return &___bigEndian_2; }
	inline void set_bigEndian_2(bool value)
	{
		___bigEndian_2 = value;
	}

	inline static int32_t get_offset_of_leftOverByte_3() { return static_cast<int32_t>(offsetof(UTF32Decoder_t635925672, ___leftOverByte_3)); }
	inline int32_t get_leftOverByte_3() const { return ___leftOverByte_3; }
	inline int32_t* get_address_of_leftOverByte_3() { return &___leftOverByte_3; }
	inline void set_leftOverByte_3(int32_t value)
	{
		___leftOverByte_3 = value;
	}

	inline static int32_t get_offset_of_leftOverLength_4() { return static_cast<int32_t>(offsetof(UTF32Decoder_t635925672, ___leftOverLength_4)); }
	inline int32_t get_leftOverLength_4() const { return ___leftOverLength_4; }
	inline int32_t* get_address_of_leftOverLength_4() { return &___leftOverLength_4; }
	inline void set_leftOverLength_4(int32_t value)
	{
		___leftOverLength_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF32DECODER_T635925672_H
#ifndef UTF32ENCODING_T312252005_H
#define UTF32ENCODING_T312252005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF32Encoding
struct  UTF32Encoding_t312252005  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UTF32Encoding::bigEndian
	bool ___bigEndian_28;
	// System.Boolean System.Text.UTF32Encoding::byteOrderMark
	bool ___byteOrderMark_29;

public:
	inline static int32_t get_offset_of_bigEndian_28() { return static_cast<int32_t>(offsetof(UTF32Encoding_t312252005, ___bigEndian_28)); }
	inline bool get_bigEndian_28() const { return ___bigEndian_28; }
	inline bool* get_address_of_bigEndian_28() { return &___bigEndian_28; }
	inline void set_bigEndian_28(bool value)
	{
		___bigEndian_28 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_29() { return static_cast<int32_t>(offsetof(UTF32Encoding_t312252005, ___byteOrderMark_29)); }
	inline bool get_byteOrderMark_29() const { return ___byteOrderMark_29; }
	inline bool* get_address_of_byteOrderMark_29() { return &___byteOrderMark_29; }
	inline void set_byteOrderMark_29(bool value)
	{
		___byteOrderMark_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF32ENCODING_T312252005_H
#ifndef LATIN1ENCODING_T950549005_H
#define LATIN1ENCODING_T950549005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Latin1Encoding
struct  Latin1Encoding_t950549005  : public Encoding_t1523322056
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LATIN1ENCODING_T950549005_H
#ifndef FORWARDINGDECODER_T3503728819_H
#define FORWARDINGDECODER_T3503728819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/ForwardingDecoder
struct  ForwardingDecoder_t3503728819  : public Decoder_t2204182725
{
public:
	// System.Text.Encoding System.Text.Encoding/ForwardingDecoder::encoding
	Encoding_t1523322056 * ___encoding_2;

public:
	inline static int32_t get_offset_of_encoding_2() { return static_cast<int32_t>(offsetof(ForwardingDecoder_t3503728819, ___encoding_2)); }
	inline Encoding_t1523322056 * get_encoding_2() const { return ___encoding_2; }
	inline Encoding_t1523322056 ** get_address_of_encoding_2() { return &___encoding_2; }
	inline void set_encoding_2(Encoding_t1523322056 * value)
	{
		___encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORWARDINGDECODER_T3503728819_H
#ifndef UNICODEENCODING_T1959134050_H
#define UNICODEENCODING_T1959134050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UnicodeEncoding
struct  UnicodeEncoding_t1959134050  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UnicodeEncoding::bigEndian
	bool ___bigEndian_28;
	// System.Boolean System.Text.UnicodeEncoding::byteOrderMark
	bool ___byteOrderMark_29;

public:
	inline static int32_t get_offset_of_bigEndian_28() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t1959134050, ___bigEndian_28)); }
	inline bool get_bigEndian_28() const { return ___bigEndian_28; }
	inline bool* get_address_of_bigEndian_28() { return &___bigEndian_28; }
	inline void set_bigEndian_28(bool value)
	{
		___bigEndian_28 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_29() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t1959134050, ___byteOrderMark_29)); }
	inline bool get_byteOrderMark_29() const { return ___byteOrderMark_29; }
	inline bool* get_address_of_byteOrderMark_29() { return &___byteOrderMark_29; }
	inline void set_byteOrderMark_29(bool value)
	{
		___byteOrderMark_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICODEENCODING_T1959134050_H
#ifndef UTF7ENCODING_T2644108479_H
#define UTF7ENCODING_T2644108479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding
struct  UTF7Encoding_t2644108479  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UTF7Encoding::allowOptionals
	bool ___allowOptionals_28;

public:
	inline static int32_t get_offset_of_allowOptionals_28() { return static_cast<int32_t>(offsetof(UTF7Encoding_t2644108479, ___allowOptionals_28)); }
	inline bool get_allowOptionals_28() const { return ___allowOptionals_28; }
	inline bool* get_address_of_allowOptionals_28() { return &___allowOptionals_28; }
	inline void set_allowOptionals_28(bool value)
	{
		___allowOptionals_28 = value;
	}
};

struct UTF7Encoding_t2644108479_StaticFields
{
public:
	// System.Byte[] System.Text.UTF7Encoding::encodingRules
	ByteU5BU5D_t4116647657* ___encodingRules_29;
	// System.SByte[] System.Text.UTF7Encoding::base64Values
	SByteU5BU5D_t2651576203* ___base64Values_30;

public:
	inline static int32_t get_offset_of_encodingRules_29() { return static_cast<int32_t>(offsetof(UTF7Encoding_t2644108479_StaticFields, ___encodingRules_29)); }
	inline ByteU5BU5D_t4116647657* get_encodingRules_29() const { return ___encodingRules_29; }
	inline ByteU5BU5D_t4116647657** get_address_of_encodingRules_29() { return &___encodingRules_29; }
	inline void set_encodingRules_29(ByteU5BU5D_t4116647657* value)
	{
		___encodingRules_29 = value;
		Il2CppCodeGenWriteBarrier((&___encodingRules_29), value);
	}

	inline static int32_t get_offset_of_base64Values_30() { return static_cast<int32_t>(offsetof(UTF7Encoding_t2644108479_StaticFields, ___base64Values_30)); }
	inline SByteU5BU5D_t2651576203* get_base64Values_30() const { return ___base64Values_30; }
	inline SByteU5BU5D_t2651576203** get_address_of_base64Values_30() { return &___base64Values_30; }
	inline void set_base64Values_30(SByteU5BU5D_t2651576203* value)
	{
		___base64Values_30 = value;
		Il2CppCodeGenWriteBarrier((&___base64Values_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF7ENCODING_T2644108479_H
#ifndef UNICODEDECODER_T872550992_H
#define UNICODEDECODER_T872550992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UnicodeEncoding/UnicodeDecoder
struct  UnicodeDecoder_t872550992  : public Decoder_t2204182725
{
public:
	// System.Boolean System.Text.UnicodeEncoding/UnicodeDecoder::bigEndian
	bool ___bigEndian_2;
	// System.Int32 System.Text.UnicodeEncoding/UnicodeDecoder::leftOverByte
	int32_t ___leftOverByte_3;

public:
	inline static int32_t get_offset_of_bigEndian_2() { return static_cast<int32_t>(offsetof(UnicodeDecoder_t872550992, ___bigEndian_2)); }
	inline bool get_bigEndian_2() const { return ___bigEndian_2; }
	inline bool* get_address_of_bigEndian_2() { return &___bigEndian_2; }
	inline void set_bigEndian_2(bool value)
	{
		___bigEndian_2 = value;
	}

	inline static int32_t get_offset_of_leftOverByte_3() { return static_cast<int32_t>(offsetof(UnicodeDecoder_t872550992, ___leftOverByte_3)); }
	inline int32_t get_leftOverByte_3() const { return ___leftOverByte_3; }
	inline int32_t* get_address_of_leftOverByte_3() { return &___leftOverByte_3; }
	inline void set_leftOverByte_3(int32_t value)
	{
		___leftOverByte_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICODEDECODER_T872550992_H
#ifndef DECODEREXCEPTIONFALLBACK_T3981484394_H
#define DECODEREXCEPTIONFALLBACK_T3981484394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderExceptionFallback
struct  DecoderExceptionFallback_t3981484394  : public DecoderFallback_t3123823036
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEREXCEPTIONFALLBACK_T3981484394_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef UNIONCODEGROUP_T3773268997_H
#define UNIONCODEGROUP_T3773268997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.UnionCodeGroup
struct  UnionCodeGroup_t3773268997  : public CodeGroup_t3811807446
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIONCODEGROUP_T3773268997_H
#ifndef SITEIDENTITYPERMISSION_T4239769539_H
#define SITEIDENTITYPERMISSION_T4239769539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SiteIdentityPermission
struct  SiteIdentityPermission_t4239769539  : public CodeAccessPermission_t2681295399
{
public:
	// System.String System.Security.Permissions.SiteIdentityPermission::_site
	String_t* ____site_0;

public:
	inline static int32_t get_offset_of__site_0() { return static_cast<int32_t>(offsetof(SiteIdentityPermission_t4239769539, ____site_0)); }
	inline String_t* get__site_0() const { return ____site_0; }
	inline String_t** get_address_of__site_0() { return &____site_0; }
	inline void set__site_0(String_t* value)
	{
		____site_0 = value;
		Il2CppCodeGenWriteBarrier((&____site_0), value);
	}
};

struct SiteIdentityPermission_t4239769539_StaticFields
{
public:
	// System.Boolean[] System.Security.Permissions.SiteIdentityPermission::valid
	BooleanU5BU5D_t2897418192* ___valid_1;

public:
	inline static int32_t get_offset_of_valid_1() { return static_cast<int32_t>(offsetof(SiteIdentityPermission_t4239769539_StaticFields, ___valid_1)); }
	inline BooleanU5BU5D_t2897418192* get_valid_1() const { return ___valid_1; }
	inline BooleanU5BU5D_t2897418192** get_address_of_valid_1() { return &___valid_1; }
	inline void set_valid_1(BooleanU5BU5D_t2897418192* value)
	{
		___valid_1 = value;
		Il2CppCodeGenWriteBarrier((&___valid_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SITEIDENTITYPERMISSION_T4239769539_H
#ifndef NETCODEGROUP_T2217812384_H
#define NETCODEGROUP_T2217812384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.NetCodeGroup
struct  NetCodeGroup_t2217812384  : public CodeGroup_t3811807446
{
public:
	// System.Collections.Hashtable System.Security.Policy.NetCodeGroup::_rules
	Hashtable_t1853889766 * ____rules_8;
	// System.Int32 System.Security.Policy.NetCodeGroup::_hashcode
	int32_t ____hashcode_9;

public:
	inline static int32_t get_offset_of__rules_8() { return static_cast<int32_t>(offsetof(NetCodeGroup_t2217812384, ____rules_8)); }
	inline Hashtable_t1853889766 * get__rules_8() const { return ____rules_8; }
	inline Hashtable_t1853889766 ** get_address_of__rules_8() { return &____rules_8; }
	inline void set__rules_8(Hashtable_t1853889766 * value)
	{
		____rules_8 = value;
		Il2CppCodeGenWriteBarrier((&____rules_8), value);
	}

	inline static int32_t get_offset_of__hashcode_9() { return static_cast<int32_t>(offsetof(NetCodeGroup_t2217812384, ____hashcode_9)); }
	inline int32_t get__hashcode_9() const { return ____hashcode_9; }
	inline int32_t* get_address_of__hashcode_9() { return &____hashcode_9; }
	inline void set__hashcode_9(int32_t value)
	{
		____hashcode_9 = value;
	}
};

struct NetCodeGroup_t2217812384_StaticFields
{
public:
	// System.String System.Security.Policy.NetCodeGroup::AbsentOriginScheme
	String_t* ___AbsentOriginScheme_6;
	// System.String System.Security.Policy.NetCodeGroup::AnyOtherOriginScheme
	String_t* ___AnyOtherOriginScheme_7;

public:
	inline static int32_t get_offset_of_AbsentOriginScheme_6() { return static_cast<int32_t>(offsetof(NetCodeGroup_t2217812384_StaticFields, ___AbsentOriginScheme_6)); }
	inline String_t* get_AbsentOriginScheme_6() const { return ___AbsentOriginScheme_6; }
	inline String_t** get_address_of_AbsentOriginScheme_6() { return &___AbsentOriginScheme_6; }
	inline void set_AbsentOriginScheme_6(String_t* value)
	{
		___AbsentOriginScheme_6 = value;
		Il2CppCodeGenWriteBarrier((&___AbsentOriginScheme_6), value);
	}

	inline static int32_t get_offset_of_AnyOtherOriginScheme_7() { return static_cast<int32_t>(offsetof(NetCodeGroup_t2217812384_StaticFields, ___AnyOtherOriginScheme_7)); }
	inline String_t* get_AnyOtherOriginScheme_7() const { return ___AnyOtherOriginScheme_7; }
	inline String_t** get_address_of_AnyOtherOriginScheme_7() { return &___AnyOtherOriginScheme_7; }
	inline void set_AnyOtherOriginScheme_7(String_t* value)
	{
		___AnyOtherOriginScheme_7 = value;
		Il2CppCodeGenWriteBarrier((&___AnyOtherOriginScheme_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETCODEGROUP_T2217812384_H
#ifndef URLIDENTITYPERMISSION_T48040392_H
#define URLIDENTITYPERMISSION_T48040392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UrlIdentityPermission
struct  UrlIdentityPermission_t48040392  : public CodeAccessPermission_t2681295399
{
public:
	// System.String System.Security.Permissions.UrlIdentityPermission::url
	String_t* ___url_0;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(UrlIdentityPermission_t48040392, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URLIDENTITYPERMISSION_T48040392_H
#ifndef ASCIIENCODING_T3446586211_H
#define ASCIIENCODING_T3446586211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.ASCIIEncoding
struct  ASCIIEncoding_t3446586211  : public Encoding_t1523322056
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASCIIENCODING_T3446586211_H
#ifndef FIRSTMATCHCODEGROUP_T885469689_H
#define FIRSTMATCHCODEGROUP_T885469689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.FirstMatchCodeGroup
struct  FirstMatchCodeGroup_t885469689  : public CodeGroup_t3811807446
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIRSTMATCHCODEGROUP_T885469689_H
#ifndef SNIP_T4156255223_H
#define SNIP_T4156255223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct  SNIP_t4156255223 
{
public:
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Permissions.StrongNameIdentityPermission/SNIP::PublicKey
	StrongNamePublicKeyBlob_t3355146440 * ___PublicKey_0;
	// System.String System.Security.Permissions.StrongNameIdentityPermission/SNIP::Name
	String_t* ___Name_1;
	// System.Version System.Security.Permissions.StrongNameIdentityPermission/SNIP::AssemblyVersion
	Version_t3456873960 * ___AssemblyVersion_2;

public:
	inline static int32_t get_offset_of_PublicKey_0() { return static_cast<int32_t>(offsetof(SNIP_t4156255223, ___PublicKey_0)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get_PublicKey_0() const { return ___PublicKey_0; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of_PublicKey_0() { return &___PublicKey_0; }
	inline void set_PublicKey_0(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		___PublicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&___PublicKey_0), value);
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(SNIP_t4156255223, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___Name_1), value);
	}

	inline static int32_t get_offset_of_AssemblyVersion_2() { return static_cast<int32_t>(offsetof(SNIP_t4156255223, ___AssemblyVersion_2)); }
	inline Version_t3456873960 * get_AssemblyVersion_2() const { return ___AssemblyVersion_2; }
	inline Version_t3456873960 ** get_address_of_AssemblyVersion_2() { return &___AssemblyVersion_2; }
	inline void set_AssemblyVersion_2(Version_t3456873960 * value)
	{
		___AssemblyVersion_2 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyVersion_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct SNIP_t4156255223_marshaled_pinvoke
{
	StrongNamePublicKeyBlob_t3355146440 * ___PublicKey_0;
	char* ___Name_1;
	Version_t3456873960 * ___AssemblyVersion_2;
};
// Native definition for COM marshalling of System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct SNIP_t4156255223_marshaled_com
{
	StrongNamePublicKeyBlob_t3355146440 * ___PublicKey_0;
	Il2CppChar* ___Name_1;
	Version_t3456873960 * ___AssemblyVersion_2;
};
#endif // SNIP_T4156255223_H
#ifndef SECURITYZONE_T1272287263_H
#define SECURITYZONE_T1272287263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityZone
struct  SecurityZone_t1272287263 
{
public:
	// System.Int32 System.Security.SecurityZone::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityZone_t1272287263, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYZONE_T1272287263_H
#ifndef FILEIOPERMISSIONACCESS_T1559273540_H
#define FILEIOPERMISSIONACCESS_T1559273540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileIOPermissionAccess
struct  FileIOPermissionAccess_t1559273540 
{
public:
	// System.Int32 System.Security.Permissions.FileIOPermissionAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileIOPermissionAccess_t1559273540, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEIOPERMISSIONACCESS_T1559273540_H
#ifndef POLICYEXCEPTION_T1520028310_H
#define POLICYEXCEPTION_T1520028310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyException
struct  PolicyException_t1520028310  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYEXCEPTION_T1520028310_H
#ifndef EVENTRESETMODE_T3817241503_H
#define EVENTRESETMODE_T3817241503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventResetMode
struct  EventResetMode_t3817241503 
{
public:
	// System.Int32 System.Threading.EventResetMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventResetMode_t3817241503, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTRESETMODE_T3817241503_H
#ifndef REFLECTIONPERMISSIONFLAG_T4199904140_H
#define REFLECTIONPERMISSIONFLAG_T4199904140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ReflectionPermissionFlag
struct  ReflectionPermissionFlag_t4199904140 
{
public:
	// System.Int32 System.Security.Permissions.ReflectionPermissionFlag::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReflectionPermissionFlag_t4199904140, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONPERMISSIONFLAG_T4199904140_H
#ifndef UIPERMISSIONWINDOW_T985109583_H
#define UIPERMISSIONWINDOW_T985109583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermissionWindow
struct  UIPermissionWindow_t985109583 
{
public:
	// System.Int32 System.Security.Permissions.UIPermissionWindow::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UIPermissionWindow_t985109583, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIPERMISSIONWINDOW_T985109583_H
#ifndef POLICYLEVELTYPE_T244468749_H
#define POLICYLEVELTYPE_T244468749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PolicyLevelType
struct  PolicyLevelType_t244468749 
{
public:
	// System.Int32 System.Security.PolicyLevelType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PolicyLevelType_t244468749, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYLEVELTYPE_T244468749_H
#ifndef UIPERMISSIONCLIPBOARD_T4002838840_H
#define UIPERMISSIONCLIPBOARD_T4002838840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermissionClipboard
struct  UIPermissionClipboard_t4002838840 
{
public:
	// System.Int32 System.Security.Permissions.UIPermissionClipboard::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UIPermissionClipboard_t4002838840, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIPERMISSIONCLIPBOARD_T4002838840_H
#ifndef POLICYSTATEMENTATTRIBUTE_T1674167676_H
#define POLICYSTATEMENTATTRIBUTE_T1674167676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyStatementAttribute
struct  PolicyStatementAttribute_t1674167676 
{
public:
	// System.Int32 System.Security.Policy.PolicyStatementAttribute::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PolicyStatementAttribute_t1674167676, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYSTATEMENTATTRIBUTE_T1674167676_H
#ifndef PRINCIPALPOLICY_T1761212333_H
#define PRINCIPALPOLICY_T1761212333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.PrincipalPolicy
struct  PrincipalPolicy_t1761212333 
{
public:
	// System.Int32 System.Security.Principal.PrincipalPolicy::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PrincipalPolicy_t1761212333, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRINCIPALPOLICY_T1761212333_H
#ifndef CODEACCESSSECURITYATTRIBUTE_T3236455365_H
#define CODEACCESSSECURITYATTRIBUTE_T3236455365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.CodeAccessSecurityAttribute
struct  CodeAccessSecurityAttribute_t3236455365  : public SecurityAttribute_t4008260079
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSSECURITYATTRIBUTE_T3236455365_H
#ifndef WINDOWSACCOUNTTYPE_T2283000883_H
#define WINDOWSACCOUNTTYPE_T2283000883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsAccountType
struct  WindowsAccountType_t2283000883 
{
public:
	// System.Int32 System.Security.Principal.WindowsAccountType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WindowsAccountType_t2283000883, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSACCOUNTTYPE_T2283000883_H
#ifndef REGISTRYPERMISSIONACCESS_T307445458_H
#define REGISTRYPERMISSIONACCESS_T307445458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.RegistryPermissionAccess
struct  RegistryPermissionAccess_t307445458 
{
public:
	// System.Int32 System.Security.Permissions.RegistryPermissionAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegistryPermissionAccess_t307445458, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRYPERMISSIONACCESS_T307445458_H
#ifndef WAITHANDLE_T1743403487_H
#define WAITHANDLE_T1743403487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitHandle
struct  WaitHandle_t1743403487  : public MarshalByRefObject_t2760389100
{
public:
	// Microsoft.Win32.SafeHandles.SafeWaitHandle System.Threading.WaitHandle::safe_wait_handle
	SafeWaitHandle_t1972936122 * ___safe_wait_handle_2;
	// System.Boolean System.Threading.WaitHandle::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_safe_wait_handle_2() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___safe_wait_handle_2)); }
	inline SafeWaitHandle_t1972936122 * get_safe_wait_handle_2() const { return ___safe_wait_handle_2; }
	inline SafeWaitHandle_t1972936122 ** get_address_of_safe_wait_handle_2() { return &___safe_wait_handle_2; }
	inline void set_safe_wait_handle_2(SafeWaitHandle_t1972936122 * value)
	{
		___safe_wait_handle_2 = value;
		Il2CppCodeGenWriteBarrier((&___safe_wait_handle_2), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

struct WaitHandle_t1743403487_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_3;

public:
	inline static int32_t get_offset_of_InvalidHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487_StaticFields, ___InvalidHandle_3)); }
	inline intptr_t get_InvalidHandle_3() const { return ___InvalidHandle_3; }
	inline intptr_t* get_address_of_InvalidHandle_3() { return &___InvalidHandle_3; }
	inline void set_InvalidHandle_3(intptr_t value)
	{
		___InvalidHandle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITHANDLE_T1743403487_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef KEY_T3006169375_H
#define KEY_T3006169375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.DefaultPolicies/Key
struct  Key_t3006169375 
{
public:
	// System.Int32 System.Security.Policy.DefaultPolicies/Key::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Key_t3006169375, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEY_T3006169375_H
#ifndef SECURITYACTION_T569814076_H
#define SECURITYACTION_T569814076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAction
struct  SecurityAction_t569814076 
{
public:
	// System.Int32 System.Security.Permissions.SecurityAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityAction_t569814076, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYACTION_T569814076_H
#ifndef KEYCONTAINERPERMISSIONFLAGS_T3864969297_H
#define KEYCONTAINERPERMISSIONFLAGS_T3864969297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionFlags
struct  KeyContainerPermissionFlags_t3864969297 
{
public:
	// System.Int32 System.Security.Permissions.KeyContainerPermissionFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyContainerPermissionFlags_t3864969297, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSIONFLAGS_T3864969297_H
#ifndef PERMISSIONSTATE_T1178999876_H
#define PERMISSIONSTATE_T1178999876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.PermissionState
struct  PermissionState_t1178999876 
{
public:
	// System.Int32 System.Security.Permissions.PermissionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PermissionState_t1178999876, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONSTATE_T1178999876_H
#ifndef SECURITYPERMISSIONFLAG_T3459270124_H
#define SECURITYPERMISSIONFLAG_T3459270124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionFlag
struct  SecurityPermissionFlag_t3459270124 
{
public:
	// System.Int32 System.Security.Permissions.SecurityPermissionFlag::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityPermissionFlag_t3459270124, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSIONFLAG_T3459270124_H
#ifndef MUTEX_T3066672582_H
#define MUTEX_T3066672582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Mutex
struct  Mutex_t3066672582  : public WaitHandle_t1743403487
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MUTEX_T3066672582_H
#ifndef KEYCONTAINERPERMISSION_T1460699488_H
#define KEYCONTAINERPERMISSION_T1460699488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermission
struct  KeyContainerPermission_t1460699488  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection System.Security.Permissions.KeyContainerPermission::_accessEntries
	KeyContainerPermissionAccessEntryCollection_t4144114052 * ____accessEntries_0;
	// System.Security.Permissions.KeyContainerPermissionFlags System.Security.Permissions.KeyContainerPermission::_flags
	int32_t ____flags_1;

public:
	inline static int32_t get_offset_of__accessEntries_0() { return static_cast<int32_t>(offsetof(KeyContainerPermission_t1460699488, ____accessEntries_0)); }
	inline KeyContainerPermissionAccessEntryCollection_t4144114052 * get__accessEntries_0() const { return ____accessEntries_0; }
	inline KeyContainerPermissionAccessEntryCollection_t4144114052 ** get_address_of__accessEntries_0() { return &____accessEntries_0; }
	inline void set__accessEntries_0(KeyContainerPermissionAccessEntryCollection_t4144114052 * value)
	{
		____accessEntries_0 = value;
		Il2CppCodeGenWriteBarrier((&____accessEntries_0), value);
	}

	inline static int32_t get_offset_of__flags_1() { return static_cast<int32_t>(offsetof(KeyContainerPermission_t1460699488, ____flags_1)); }
	inline int32_t get__flags_1() const { return ____flags_1; }
	inline int32_t* get_address_of__flags_1() { return &____flags_1; }
	inline void set__flags_1(int32_t value)
	{
		____flags_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSION_T1460699488_H
#ifndef UIPERMISSION_T826475846_H
#define UIPERMISSION_T826475846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermission
struct  UIPermission_t826475846  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.UIPermissionWindow System.Security.Permissions.UIPermission::_window
	int32_t ____window_0;
	// System.Security.Permissions.UIPermissionClipboard System.Security.Permissions.UIPermission::_clipboard
	int32_t ____clipboard_1;

public:
	inline static int32_t get_offset_of__window_0() { return static_cast<int32_t>(offsetof(UIPermission_t826475846, ____window_0)); }
	inline int32_t get__window_0() const { return ____window_0; }
	inline int32_t* get_address_of__window_0() { return &____window_0; }
	inline void set__window_0(int32_t value)
	{
		____window_0 = value;
	}

	inline static int32_t get_offset_of__clipboard_1() { return static_cast<int32_t>(offsetof(UIPermission_t826475846, ____clipboard_1)); }
	inline int32_t get__clipboard_1() const { return ____clipboard_1; }
	inline int32_t* get_address_of__clipboard_1() { return &____clipboard_1; }
	inline void set__clipboard_1(int32_t value)
	{
		____clipboard_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIPERMISSION_T826475846_H
#ifndef STRONGNAMEIDENTITYPERMISSION_T2780499738_H
#define STRONGNAMEIDENTITYPERMISSION_T2780499738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNameIdentityPermission
struct  StrongNameIdentityPermission_t2780499738  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.PermissionState System.Security.Permissions.StrongNameIdentityPermission::_state
	int32_t ____state_1;
	// System.Collections.ArrayList System.Security.Permissions.StrongNameIdentityPermission::_list
	ArrayList_t2718874744 * ____list_2;

public:
	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t2780499738, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__list_2() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t2780499738, ____list_2)); }
	inline ArrayList_t2718874744 * get__list_2() const { return ____list_2; }
	inline ArrayList_t2718874744 ** get_address_of__list_2() { return &____list_2; }
	inline void set__list_2(ArrayList_t2718874744 * value)
	{
		____list_2 = value;
		Il2CppCodeGenWriteBarrier((&____list_2), value);
	}
};

struct StrongNameIdentityPermission_t2780499738_StaticFields
{
public:
	// System.Version System.Security.Permissions.StrongNameIdentityPermission::defaultVersion
	Version_t3456873960 * ___defaultVersion_0;

public:
	inline static int32_t get_offset_of_defaultVersion_0() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t2780499738_StaticFields, ___defaultVersion_0)); }
	inline Version_t3456873960 * get_defaultVersion_0() const { return ___defaultVersion_0; }
	inline Version_t3456873960 ** get_address_of_defaultVersion_0() { return &___defaultVersion_0; }
	inline void set_defaultVersion_0(Version_t3456873960 * value)
	{
		___defaultVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultVersion_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEIDENTITYPERMISSION_T2780499738_H
#ifndef FILECODEGROUP_T1720965944_H
#define FILECODEGROUP_T1720965944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.FileCodeGroup
struct  FileCodeGroup_t1720965944  : public CodeGroup_t3811807446
{
public:
	// System.Security.Permissions.FileIOPermissionAccess System.Security.Policy.FileCodeGroup::m_access
	int32_t ___m_access_6;

public:
	inline static int32_t get_offset_of_m_access_6() { return static_cast<int32_t>(offsetof(FileCodeGroup_t1720965944, ___m_access_6)); }
	inline int32_t get_m_access_6() const { return ___m_access_6; }
	inline int32_t* get_address_of_m_access_6() { return &___m_access_6; }
	inline void set_m_access_6(int32_t value)
	{
		___m_access_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILECODEGROUP_T1720965944_H
#ifndef ZONEIDENTITYPERMISSION_T2250593031_H
#define ZONEIDENTITYPERMISSION_T2250593031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ZoneIdentityPermission
struct  ZoneIdentityPermission_t2250593031  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.SecurityZone System.Security.Permissions.ZoneIdentityPermission::zone
	int32_t ___zone_0;

public:
	inline static int32_t get_offset_of_zone_0() { return static_cast<int32_t>(offsetof(ZoneIdentityPermission_t2250593031, ___zone_0)); }
	inline int32_t get_zone_0() const { return ___zone_0; }
	inline int32_t* get_address_of_zone_0() { return &___zone_0; }
	inline void set_zone_0(int32_t value)
	{
		___zone_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZONEIDENTITYPERMISSION_T2250593031_H
#ifndef SECURITYPERMISSIONATTRIBUTE_T2256310021_H
#define SECURITYPERMISSIONATTRIBUTE_T2256310021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionAttribute
struct  SecurityPermissionAttribute_t2256310021  : public CodeAccessSecurityAttribute_t3236455365
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermissionAttribute::m_Flags
	int32_t ___m_Flags_1;

public:
	inline static int32_t get_offset_of_m_Flags_1() { return static_cast<int32_t>(offsetof(SecurityPermissionAttribute_t2256310021, ___m_Flags_1)); }
	inline int32_t get_m_Flags_1() const { return ___m_Flags_1; }
	inline int32_t* get_address_of_m_Flags_1() { return &___m_Flags_1; }
	inline void set_m_Flags_1(int32_t value)
	{
		___m_Flags_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSIONATTRIBUTE_T2256310021_H
#ifndef REFLECTIONPERMISSION_T2208099681_H
#define REFLECTIONPERMISSION_T2208099681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ReflectionPermission
struct  ReflectionPermission_t2208099681  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.ReflectionPermissionFlag System.Security.Permissions.ReflectionPermission::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(ReflectionPermission_t2208099681, ___flags_0)); }
	inline int32_t get_flags_0() const { return ___flags_0; }
	inline int32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(int32_t value)
	{
		___flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONPERMISSION_T2208099681_H
#ifndef PERMISSIONSETATTRIBUTE_T2779865727_H
#define PERMISSIONSETATTRIBUTE_T2779865727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.PermissionSetAttribute
struct  PermissionSetAttribute_t2779865727  : public CodeAccessSecurityAttribute_t3236455365
{
public:
	// System.String System.Security.Permissions.PermissionSetAttribute::xml
	String_t* ___xml_1;

public:
	inline static int32_t get_offset_of_xml_1() { return static_cast<int32_t>(offsetof(PermissionSetAttribute_t2779865727, ___xml_1)); }
	inline String_t* get_xml_1() const { return ___xml_1; }
	inline String_t** get_address_of_xml_1() { return &___xml_1; }
	inline void set_xml_1(String_t* value)
	{
		___xml_1 = value;
		Il2CppCodeGenWriteBarrier((&___xml_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONSETATTRIBUTE_T2779865727_H
#ifndef SECURITYPERMISSION_T2954997752_H
#define SECURITYPERMISSION_T2954997752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermission
struct  SecurityPermission_t2954997752  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermission::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(SecurityPermission_t2954997752, ___flags_0)); }
	inline int32_t get_flags_0() const { return ___flags_0; }
	inline int32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(int32_t value)
	{
		___flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSION_T2954997752_H
#ifndef REGISTRYPERMISSION_T4244934776_H
#define REGISTRYPERMISSION_T4244934776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.RegistryPermission
struct  RegistryPermission_t4244934776  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.PermissionState System.Security.Permissions.RegistryPermission::_state
	int32_t ____state_0;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::createList
	ArrayList_t2718874744 * ___createList_1;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::readList
	ArrayList_t2718874744 * ___readList_2;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::writeList
	ArrayList_t2718874744 * ___writeList_3;

public:
	inline static int32_t get_offset_of__state_0() { return static_cast<int32_t>(offsetof(RegistryPermission_t4244934776, ____state_0)); }
	inline int32_t get__state_0() const { return ____state_0; }
	inline int32_t* get_address_of__state_0() { return &____state_0; }
	inline void set__state_0(int32_t value)
	{
		____state_0 = value;
	}

	inline static int32_t get_offset_of_createList_1() { return static_cast<int32_t>(offsetof(RegistryPermission_t4244934776, ___createList_1)); }
	inline ArrayList_t2718874744 * get_createList_1() const { return ___createList_1; }
	inline ArrayList_t2718874744 ** get_address_of_createList_1() { return &___createList_1; }
	inline void set_createList_1(ArrayList_t2718874744 * value)
	{
		___createList_1 = value;
		Il2CppCodeGenWriteBarrier((&___createList_1), value);
	}

	inline static int32_t get_offset_of_readList_2() { return static_cast<int32_t>(offsetof(RegistryPermission_t4244934776, ___readList_2)); }
	inline ArrayList_t2718874744 * get_readList_2() const { return ___readList_2; }
	inline ArrayList_t2718874744 ** get_address_of_readList_2() { return &___readList_2; }
	inline void set_readList_2(ArrayList_t2718874744 * value)
	{
		___readList_2 = value;
		Il2CppCodeGenWriteBarrier((&___readList_2), value);
	}

	inline static int32_t get_offset_of_writeList_3() { return static_cast<int32_t>(offsetof(RegistryPermission_t4244934776, ___writeList_3)); }
	inline ArrayList_t2718874744 * get_writeList_3() const { return ___writeList_3; }
	inline ArrayList_t2718874744 ** get_address_of_writeList_3() { return &___writeList_3; }
	inline void set_writeList_3(ArrayList_t2718874744 * value)
	{
		___writeList_3 = value;
		Il2CppCodeGenWriteBarrier((&___writeList_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRYPERMISSION_T4244934776_H
#ifndef KEYCONTAINERPERMISSIONACCESSENTRY_T3026022710_H
#define KEYCONTAINERPERMISSIONACCESSENTRY_T3026022710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionAccessEntry
struct  KeyContainerPermissionAccessEntry_t3026022710  : public RuntimeObject
{
public:
	// System.Security.Permissions.KeyContainerPermissionFlags System.Security.Permissions.KeyContainerPermissionAccessEntry::_flags
	int32_t ____flags_0;
	// System.String System.Security.Permissions.KeyContainerPermissionAccessEntry::_containerName
	String_t* ____containerName_1;
	// System.Int32 System.Security.Permissions.KeyContainerPermissionAccessEntry::_spec
	int32_t ____spec_2;
	// System.String System.Security.Permissions.KeyContainerPermissionAccessEntry::_store
	String_t* ____store_3;
	// System.String System.Security.Permissions.KeyContainerPermissionAccessEntry::_providerName
	String_t* ____providerName_4;
	// System.Int32 System.Security.Permissions.KeyContainerPermissionAccessEntry::_type
	int32_t ____type_5;

public:
	inline static int32_t get_offset_of__flags_0() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____flags_0)); }
	inline int32_t get__flags_0() const { return ____flags_0; }
	inline int32_t* get_address_of__flags_0() { return &____flags_0; }
	inline void set__flags_0(int32_t value)
	{
		____flags_0 = value;
	}

	inline static int32_t get_offset_of__containerName_1() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____containerName_1)); }
	inline String_t* get__containerName_1() const { return ____containerName_1; }
	inline String_t** get_address_of__containerName_1() { return &____containerName_1; }
	inline void set__containerName_1(String_t* value)
	{
		____containerName_1 = value;
		Il2CppCodeGenWriteBarrier((&____containerName_1), value);
	}

	inline static int32_t get_offset_of__spec_2() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____spec_2)); }
	inline int32_t get__spec_2() const { return ____spec_2; }
	inline int32_t* get_address_of__spec_2() { return &____spec_2; }
	inline void set__spec_2(int32_t value)
	{
		____spec_2 = value;
	}

	inline static int32_t get_offset_of__store_3() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____store_3)); }
	inline String_t* get__store_3() const { return ____store_3; }
	inline String_t** get_address_of__store_3() { return &____store_3; }
	inline void set__store_3(String_t* value)
	{
		____store_3 = value;
		Il2CppCodeGenWriteBarrier((&____store_3), value);
	}

	inline static int32_t get_offset_of__providerName_4() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____providerName_4)); }
	inline String_t* get__providerName_4() const { return ____providerName_4; }
	inline String_t** get_address_of__providerName_4() { return &____providerName_4; }
	inline void set__providerName_4(String_t* value)
	{
		____providerName_4 = value;
		Il2CppCodeGenWriteBarrier((&____providerName_4), value);
	}

	inline static int32_t get_offset_of__type_5() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____type_5)); }
	inline int32_t get__type_5() const { return ____type_5; }
	inline int32_t* get_address_of__type_5() { return &____type_5; }
	inline void set__type_5(int32_t value)
	{
		____type_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSIONACCESSENTRY_T3026022710_H
#ifndef ENCODERFALLBACKEXCEPTION_T2773771926_H
#define ENCODERFALLBACKEXCEPTION_T2773771926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackException
struct  EncoderFallbackException_t2773771926  : public ArgumentException_t132251570
{
public:
	// System.Char System.Text.EncoderFallbackException::char_unknown
	Il2CppChar ___char_unknown_13;
	// System.Char System.Text.EncoderFallbackException::char_unknown_high
	Il2CppChar ___char_unknown_high_14;
	// System.Char System.Text.EncoderFallbackException::char_unknown_low
	Il2CppChar ___char_unknown_low_15;
	// System.Int32 System.Text.EncoderFallbackException::index
	int32_t ___index_16;

public:
	inline static int32_t get_offset_of_char_unknown_13() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2773771926, ___char_unknown_13)); }
	inline Il2CppChar get_char_unknown_13() const { return ___char_unknown_13; }
	inline Il2CppChar* get_address_of_char_unknown_13() { return &___char_unknown_13; }
	inline void set_char_unknown_13(Il2CppChar value)
	{
		___char_unknown_13 = value;
	}

	inline static int32_t get_offset_of_char_unknown_high_14() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2773771926, ___char_unknown_high_14)); }
	inline Il2CppChar get_char_unknown_high_14() const { return ___char_unknown_high_14; }
	inline Il2CppChar* get_address_of_char_unknown_high_14() { return &___char_unknown_high_14; }
	inline void set_char_unknown_high_14(Il2CppChar value)
	{
		___char_unknown_high_14 = value;
	}

	inline static int32_t get_offset_of_char_unknown_low_15() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2773771926, ___char_unknown_low_15)); }
	inline Il2CppChar get_char_unknown_low_15() const { return ___char_unknown_low_15; }
	inline Il2CppChar* get_address_of_char_unknown_low_15() { return &___char_unknown_low_15; }
	inline void set_char_unknown_low_15(Il2CppChar value)
	{
		___char_unknown_low_15 = value;
	}

	inline static int32_t get_offset_of_index_16() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2773771926, ___index_16)); }
	inline int32_t get_index_16() const { return ___index_16; }
	inline int32_t* get_address_of_index_16() { return &___index_16; }
	inline void set_index_16(int32_t value)
	{
		___index_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKEXCEPTION_T2773771926_H
#ifndef DECODERFALLBACKEXCEPTION_T1661362184_H
#define DECODERFALLBACKEXCEPTION_T1661362184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackException
struct  DecoderFallbackException_t1661362184  : public ArgumentException_t132251570
{
public:
	// System.Byte[] System.Text.DecoderFallbackException::bytes_unknown
	ByteU5BU5D_t4116647657* ___bytes_unknown_13;
	// System.Int32 System.Text.DecoderFallbackException::index
	int32_t ___index_14;

public:
	inline static int32_t get_offset_of_bytes_unknown_13() { return static_cast<int32_t>(offsetof(DecoderFallbackException_t1661362184, ___bytes_unknown_13)); }
	inline ByteU5BU5D_t4116647657* get_bytes_unknown_13() const { return ___bytes_unknown_13; }
	inline ByteU5BU5D_t4116647657** get_address_of_bytes_unknown_13() { return &___bytes_unknown_13; }
	inline void set_bytes_unknown_13(ByteU5BU5D_t4116647657* value)
	{
		___bytes_unknown_13 = value;
		Il2CppCodeGenWriteBarrier((&___bytes_unknown_13), value);
	}

	inline static int32_t get_offset_of_index_14() { return static_cast<int32_t>(offsetof(DecoderFallbackException_t1661362184, ___index_14)); }
	inline int32_t get_index_14() const { return ___index_14; }
	inline int32_t* get_address_of_index_14() { return &___index_14; }
	inline void set_index_14(int32_t value)
	{
		___index_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKEXCEPTION_T1661362184_H
#ifndef POLICYLEVEL_T2891196107_H
#define POLICYLEVEL_T2891196107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyLevel
struct  PolicyLevel_t2891196107  : public RuntimeObject
{
public:
	// System.String System.Security.Policy.PolicyLevel::label
	String_t* ___label_0;
	// System.Security.Policy.CodeGroup System.Security.Policy.PolicyLevel::root_code_group
	CodeGroup_t3811807446 * ___root_code_group_1;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::full_trust_assemblies
	ArrayList_t2718874744 * ___full_trust_assemblies_2;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::named_permission_sets
	ArrayList_t2718874744 * ___named_permission_sets_3;
	// System.String System.Security.Policy.PolicyLevel::_location
	String_t* ____location_4;
	// System.Security.PolicyLevelType System.Security.Policy.PolicyLevel::_type
	int32_t ____type_5;
	// System.Collections.Hashtable System.Security.Policy.PolicyLevel::fullNames
	Hashtable_t1853889766 * ___fullNames_6;
	// System.Security.SecurityElement System.Security.Policy.PolicyLevel::xml
	SecurityElement_t1046076091 * ___xml_7;

public:
	inline static int32_t get_offset_of_label_0() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___label_0)); }
	inline String_t* get_label_0() const { return ___label_0; }
	inline String_t** get_address_of_label_0() { return &___label_0; }
	inline void set_label_0(String_t* value)
	{
		___label_0 = value;
		Il2CppCodeGenWriteBarrier((&___label_0), value);
	}

	inline static int32_t get_offset_of_root_code_group_1() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___root_code_group_1)); }
	inline CodeGroup_t3811807446 * get_root_code_group_1() const { return ___root_code_group_1; }
	inline CodeGroup_t3811807446 ** get_address_of_root_code_group_1() { return &___root_code_group_1; }
	inline void set_root_code_group_1(CodeGroup_t3811807446 * value)
	{
		___root_code_group_1 = value;
		Il2CppCodeGenWriteBarrier((&___root_code_group_1), value);
	}

	inline static int32_t get_offset_of_full_trust_assemblies_2() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___full_trust_assemblies_2)); }
	inline ArrayList_t2718874744 * get_full_trust_assemblies_2() const { return ___full_trust_assemblies_2; }
	inline ArrayList_t2718874744 ** get_address_of_full_trust_assemblies_2() { return &___full_trust_assemblies_2; }
	inline void set_full_trust_assemblies_2(ArrayList_t2718874744 * value)
	{
		___full_trust_assemblies_2 = value;
		Il2CppCodeGenWriteBarrier((&___full_trust_assemblies_2), value);
	}

	inline static int32_t get_offset_of_named_permission_sets_3() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___named_permission_sets_3)); }
	inline ArrayList_t2718874744 * get_named_permission_sets_3() const { return ___named_permission_sets_3; }
	inline ArrayList_t2718874744 ** get_address_of_named_permission_sets_3() { return &___named_permission_sets_3; }
	inline void set_named_permission_sets_3(ArrayList_t2718874744 * value)
	{
		___named_permission_sets_3 = value;
		Il2CppCodeGenWriteBarrier((&___named_permission_sets_3), value);
	}

	inline static int32_t get_offset_of__location_4() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ____location_4)); }
	inline String_t* get__location_4() const { return ____location_4; }
	inline String_t** get_address_of__location_4() { return &____location_4; }
	inline void set__location_4(String_t* value)
	{
		____location_4 = value;
		Il2CppCodeGenWriteBarrier((&____location_4), value);
	}

	inline static int32_t get_offset_of__type_5() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ____type_5)); }
	inline int32_t get__type_5() const { return ____type_5; }
	inline int32_t* get_address_of__type_5() { return &____type_5; }
	inline void set__type_5(int32_t value)
	{
		____type_5 = value;
	}

	inline static int32_t get_offset_of_fullNames_6() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___fullNames_6)); }
	inline Hashtable_t1853889766 * get_fullNames_6() const { return ___fullNames_6; }
	inline Hashtable_t1853889766 ** get_address_of_fullNames_6() { return &___fullNames_6; }
	inline void set_fullNames_6(Hashtable_t1853889766 * value)
	{
		___fullNames_6 = value;
		Il2CppCodeGenWriteBarrier((&___fullNames_6), value);
	}

	inline static int32_t get_offset_of_xml_7() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___xml_7)); }
	inline SecurityElement_t1046076091 * get_xml_7() const { return ___xml_7; }
	inline SecurityElement_t1046076091 ** get_address_of_xml_7() { return &___xml_7; }
	inline void set_xml_7(SecurityElement_t1046076091 * value)
	{
		___xml_7 = value;
		Il2CppCodeGenWriteBarrier((&___xml_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYLEVEL_T2891196107_H
#ifndef EVENTWAITHANDLE_T777845177_H
#define EVENTWAITHANDLE_T777845177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventWaitHandle
struct  EventWaitHandle_t777845177  : public WaitHandle_t1743403487
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTWAITHANDLE_T777845177_H
#ifndef POLICYSTATEMENT_T3052133691_H
#define POLICYSTATEMENT_T3052133691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyStatement
struct  PolicyStatement_t3052133691  : public RuntimeObject
{
public:
	// System.Security.PermissionSet System.Security.Policy.PolicyStatement::perms
	PermissionSet_t223948603 * ___perms_0;
	// System.Security.Policy.PolicyStatementAttribute System.Security.Policy.PolicyStatement::attrs
	int32_t ___attrs_1;

public:
	inline static int32_t get_offset_of_perms_0() { return static_cast<int32_t>(offsetof(PolicyStatement_t3052133691, ___perms_0)); }
	inline PermissionSet_t223948603 * get_perms_0() const { return ___perms_0; }
	inline PermissionSet_t223948603 ** get_address_of_perms_0() { return &___perms_0; }
	inline void set_perms_0(PermissionSet_t223948603 * value)
	{
		___perms_0 = value;
		Il2CppCodeGenWriteBarrier((&___perms_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(PolicyStatement_t3052133691, ___attrs_1)); }
	inline int32_t get_attrs_1() const { return ___attrs_1; }
	inline int32_t* get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(int32_t value)
	{
		___attrs_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYSTATEMENT_T3052133691_H
#ifndef ZONE_T2011285646_H
#define ZONE_T2011285646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Zone
struct  Zone_t2011285646  : public RuntimeObject
{
public:
	// System.Security.SecurityZone System.Security.Policy.Zone::zone
	int32_t ___zone_0;

public:
	inline static int32_t get_offset_of_zone_0() { return static_cast<int32_t>(offsetof(Zone_t2011285646, ___zone_0)); }
	inline int32_t get_zone_0() const { return ___zone_0; }
	inline int32_t* get_address_of_zone_0() { return &___zone_0; }
	inline void set_zone_0(int32_t value)
	{
		___zone_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZONE_T2011285646_H
#ifndef WINDOWSIDENTITY_T2948242406_H
#define WINDOWSIDENTITY_T2948242406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsIdentity
struct  WindowsIdentity_t2948242406  : public RuntimeObject
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::_token
	intptr_t ____token_0;
	// System.String System.Security.Principal.WindowsIdentity::_type
	String_t* ____type_1;
	// System.Security.Principal.WindowsAccountType System.Security.Principal.WindowsIdentity::_account
	int32_t ____account_2;
	// System.Boolean System.Security.Principal.WindowsIdentity::_authenticated
	bool ____authenticated_3;
	// System.String System.Security.Principal.WindowsIdentity::_name
	String_t* ____name_4;
	// System.Runtime.Serialization.SerializationInfo System.Security.Principal.WindowsIdentity::_info
	SerializationInfo_t950877179 * ____info_5;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2948242406, ____token_0)); }
	inline intptr_t get__token_0() const { return ____token_0; }
	inline intptr_t* get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(intptr_t value)
	{
		____token_0 = value;
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2948242406, ____type_1)); }
	inline String_t* get__type_1() const { return ____type_1; }
	inline String_t** get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(String_t* value)
	{
		____type_1 = value;
		Il2CppCodeGenWriteBarrier((&____type_1), value);
	}

	inline static int32_t get_offset_of__account_2() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2948242406, ____account_2)); }
	inline int32_t get__account_2() const { return ____account_2; }
	inline int32_t* get_address_of__account_2() { return &____account_2; }
	inline void set__account_2(int32_t value)
	{
		____account_2 = value;
	}

	inline static int32_t get_offset_of__authenticated_3() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2948242406, ____authenticated_3)); }
	inline bool get__authenticated_3() const { return ____authenticated_3; }
	inline bool* get_address_of__authenticated_3() { return &____authenticated_3; }
	inline void set__authenticated_3(bool value)
	{
		____authenticated_3 = value;
	}

	inline static int32_t get_offset_of__name_4() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2948242406, ____name_4)); }
	inline String_t* get__name_4() const { return ____name_4; }
	inline String_t** get_address_of__name_4() { return &____name_4; }
	inline void set__name_4(String_t* value)
	{
		____name_4 = value;
		Il2CppCodeGenWriteBarrier((&____name_4), value);
	}

	inline static int32_t get_offset_of__info_5() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2948242406, ____info_5)); }
	inline SerializationInfo_t950877179 * get__info_5() const { return ____info_5; }
	inline SerializationInfo_t950877179 ** get_address_of__info_5() { return &____info_5; }
	inline void set__info_5(SerializationInfo_t950877179 * value)
	{
		____info_5 = value;
		Il2CppCodeGenWriteBarrier((&____info_5), value);
	}
};

struct WindowsIdentity_t2948242406_StaticFields
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::invalidWindows
	intptr_t ___invalidWindows_6;

public:
	inline static int32_t get_offset_of_invalidWindows_6() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2948242406_StaticFields, ___invalidWindows_6)); }
	inline intptr_t get_invalidWindows_6() const { return ___invalidWindows_6; }
	inline intptr_t* get_address_of_invalidWindows_6() { return &___invalidWindows_6; }
	inline void set_invalidWindows_6(intptr_t value)
	{
		___invalidWindows_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSIDENTITY_T2948242406_H
#ifndef ZONEMEMBERSHIPCONDITION_T3195636716_H
#define ZONEMEMBERSHIPCONDITION_T3195636716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ZoneMembershipCondition
struct  ZoneMembershipCondition_t3195636716  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.ZoneMembershipCondition::version
	int32_t ___version_0;
	// System.Security.SecurityZone System.Security.Policy.ZoneMembershipCondition::zone
	int32_t ___zone_1;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(ZoneMembershipCondition_t3195636716, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_zone_1() { return static_cast<int32_t>(offsetof(ZoneMembershipCondition_t3195636716, ___zone_1)); }
	inline int32_t get_zone_1() const { return ___zone_1; }
	inline int32_t* get_address_of_zone_1() { return &___zone_1; }
	inline void set_zone_1(int32_t value)
	{
		___zone_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZONEMEMBERSHIPCONDITION_T3195636716_H
#ifndef MANUALRESETEVENT_T451242010_H
#define MANUALRESETEVENT_T451242010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ManualResetEvent
struct  ManualResetEvent_t451242010  : public EventWaitHandle_t777845177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANUALRESETEVENT_T451242010_H
#ifndef AUTORESETEVENT_T1333520283_H
#define AUTORESETEVENT_T1333520283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.AutoResetEvent
struct  AutoResetEvent_t1333520283  : public EventWaitHandle_t777845177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTORESETEVENT_T1333520283_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize900 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize901 = { sizeof (KeyContainerPermission_t1460699488), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable901[2] = 
{
	KeyContainerPermission_t1460699488::get_offset_of__accessEntries_0(),
	KeyContainerPermission_t1460699488::get_offset_of__flags_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize902 = { sizeof (KeyContainerPermissionAccessEntry_t3026022710), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable902[6] = 
{
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__flags_0(),
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__containerName_1(),
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__spec_2(),
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__store_3(),
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__providerName_4(),
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__type_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize903 = { sizeof (KeyContainerPermissionAccessEntryCollection_t4144114052), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable903[1] = 
{
	KeyContainerPermissionAccessEntryCollection_t4144114052::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize904 = { sizeof (KeyContainerPermissionAccessEntryEnumerator_t3641947072), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable904[1] = 
{
	KeyContainerPermissionAccessEntryEnumerator_t3641947072::get_offset_of_e_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize905 = { sizeof (KeyContainerPermissionFlags_t3864969297)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable905[12] = 
{
	KeyContainerPermissionFlags_t3864969297::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize906 = { sizeof (PermissionSetAttribute_t2779865727), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable906[1] = 
{
	PermissionSetAttribute_t2779865727::get_offset_of_xml_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize907 = { sizeof (PermissionState_t1178999876)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable907[3] = 
{
	PermissionState_t1178999876::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize908 = { sizeof (PublisherIdentityPermission_t594127488), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable908[1] = 
{
	PublisherIdentityPermission_t594127488::get_offset_of_x509_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize909 = { sizeof (ReflectionPermission_t2208099681), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable909[1] = 
{
	ReflectionPermission_t2208099681::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize910 = { sizeof (ReflectionPermissionFlag_t4199904140)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable910[7] = 
{
	ReflectionPermissionFlag_t4199904140::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize911 = { sizeof (RegistryPermission_t4244934776), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable911[4] = 
{
	RegistryPermission_t4244934776::get_offset_of__state_0(),
	RegistryPermission_t4244934776::get_offset_of_createList_1(),
	RegistryPermission_t4244934776::get_offset_of_readList_2(),
	RegistryPermission_t4244934776::get_offset_of_writeList_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize912 = { sizeof (RegistryPermissionAccess_t307445458)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable912[6] = 
{
	RegistryPermissionAccess_t307445458::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize913 = { sizeof (SecurityAction_t569814076)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable913[10] = 
{
	SecurityAction_t569814076::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize914 = { sizeof (SecurityPermission_t2954997752), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable914[1] = 
{
	SecurityPermission_t2954997752::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize915 = { sizeof (SecurityPermissionAttribute_t2256310021), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable915[1] = 
{
	SecurityPermissionAttribute_t2256310021::get_offset_of_m_Flags_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize916 = { sizeof (SecurityPermissionFlag_t3459270124)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable916[17] = 
{
	SecurityPermissionFlag_t3459270124::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize917 = { sizeof (SiteIdentityPermission_t4239769539), -1, sizeof(SiteIdentityPermission_t4239769539_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable917[2] = 
{
	SiteIdentityPermission_t4239769539::get_offset_of__site_0(),
	SiteIdentityPermission_t4239769539_StaticFields::get_offset_of_valid_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize918 = { sizeof (StrongNameIdentityPermission_t2780499738), -1, sizeof(StrongNameIdentityPermission_t2780499738_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable918[3] = 
{
	StrongNameIdentityPermission_t2780499738_StaticFields::get_offset_of_defaultVersion_0(),
	StrongNameIdentityPermission_t2780499738::get_offset_of__state_1(),
	StrongNameIdentityPermission_t2780499738::get_offset_of__list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize919 = { sizeof (SNIP_t4156255223)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable919[3] = 
{
	SNIP_t4156255223::get_offset_of_PublicKey_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SNIP_t4156255223::get_offset_of_Name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SNIP_t4156255223::get_offset_of_AssemblyVersion_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize920 = { sizeof (StrongNamePublicKeyBlob_t3355146440), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable920[1] = 
{
	StrongNamePublicKeyBlob_t3355146440::get_offset_of_pubkey_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize921 = { sizeof (UIPermission_t826475846), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable921[2] = 
{
	UIPermission_t826475846::get_offset_of__window_0(),
	UIPermission_t826475846::get_offset_of__clipboard_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize922 = { sizeof (UIPermissionClipboard_t4002838840)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable922[4] = 
{
	UIPermissionClipboard_t4002838840::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize923 = { sizeof (UIPermissionWindow_t985109583)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable923[5] = 
{
	UIPermissionWindow_t985109583::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize924 = { sizeof (UrlIdentityPermission_t48040392), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable924[1] = 
{
	UrlIdentityPermission_t48040392::get_offset_of_url_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize925 = { sizeof (ZoneIdentityPermission_t2250593031), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable925[1] = 
{
	ZoneIdentityPermission_t2250593031::get_offset_of_zone_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize926 = { sizeof (AllMembershipCondition_t198137363), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable926[1] = 
{
	AllMembershipCondition_t198137363::get_offset_of_version_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize927 = { sizeof (ApplicationTrust_t3270368423), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable927[6] = 
{
	ApplicationTrust_t3270368423::get_offset_of__appid_0(),
	ApplicationTrust_t3270368423::get_offset_of__defaultPolicy_1(),
	ApplicationTrust_t3270368423::get_offset_of__xtranfo_2(),
	ApplicationTrust_t3270368423::get_offset_of__trustrun_3(),
	ApplicationTrust_t3270368423::get_offset_of__persist_4(),
	ApplicationTrust_t3270368423::get_offset_of_fullTrustAssemblies_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize928 = { sizeof (CodeConnectAccess_t1103527196), -1, sizeof(CodeConnectAccess_t1103527196_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable928[6] = 
{
	CodeConnectAccess_t1103527196_StaticFields::get_offset_of_AnyScheme_0(),
	CodeConnectAccess_t1103527196_StaticFields::get_offset_of_DefaultPort_1(),
	CodeConnectAccess_t1103527196_StaticFields::get_offset_of_OriginPort_2(),
	CodeConnectAccess_t1103527196_StaticFields::get_offset_of_OriginScheme_3(),
	CodeConnectAccess_t1103527196::get_offset_of__scheme_4(),
	CodeConnectAccess_t1103527196::get_offset_of__port_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize929 = { sizeof (CodeGroup_t3811807446), -1, sizeof(CodeGroup_t3811807446_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable929[6] = 
{
	CodeGroup_t3811807446::get_offset_of_m_policy_0(),
	CodeGroup_t3811807446::get_offset_of_m_membershipCondition_1(),
	CodeGroup_t3811807446::get_offset_of_m_description_2(),
	CodeGroup_t3811807446::get_offset_of_m_name_3(),
	CodeGroup_t3811807446::get_offset_of_m_children_4(),
	CodeGroup_t3811807446_StaticFields::get_offset_of_U3CU3Ef__switchU24map2E_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize930 = { sizeof (DefaultPolicies_t2520506789), -1, sizeof(DefaultPolicies_t2520506789_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable930[12] = 
{
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__fxVersion_0(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__ecmaKey_1(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__ecma_2(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__msFinalKey_3(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__msFinal_4(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__fullTrust_5(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__localIntranet_6(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__internet_7(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__skipVerification_8(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__execution_9(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__nothing_10(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__everything_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize931 = { sizeof (Key_t3006169375)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable931[3] = 
{
	Key_t3006169375::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize932 = { sizeof (Evidence_t2008144148), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable932[4] = 
{
	Evidence_t2008144148::get_offset_of__locked_0(),
	Evidence_t2008144148::get_offset_of_hostEvidenceList_1(),
	Evidence_t2008144148::get_offset_of_assemblyEvidenceList_2(),
	Evidence_t2008144148::get_offset_of__hashCode_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize933 = { sizeof (EvidenceEnumerator_t1708166667), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable933[3] = 
{
	EvidenceEnumerator_t1708166667::get_offset_of_currentEnum_0(),
	EvidenceEnumerator_t1708166667::get_offset_of_hostEnum_1(),
	EvidenceEnumerator_t1708166667::get_offset_of_assemblyEnum_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize934 = { sizeof (FileCodeGroup_t1720965944), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable934[1] = 
{
	FileCodeGroup_t1720965944::get_offset_of_m_access_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize935 = { sizeof (FirstMatchCodeGroup_t885469689), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize936 = { sizeof (GacInstalled_t3565883570), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize937 = { sizeof (Hash_t5925575), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable937[2] = 
{
	Hash_t5925575::get_offset_of_assembly_0(),
	Hash_t5925575::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize938 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize939 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize940 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize941 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize942 = { sizeof (MembershipConditionHelper_t2246572704), -1, sizeof(MembershipConditionHelper_t2246572704_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable942[1] = 
{
	MembershipConditionHelper_t2246572704_StaticFields::get_offset_of_XmlTag_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize943 = { sizeof (NetCodeGroup_t2217812384), -1, sizeof(NetCodeGroup_t2217812384_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable943[4] = 
{
	NetCodeGroup_t2217812384_StaticFields::get_offset_of_AbsentOriginScheme_6(),
	NetCodeGroup_t2217812384_StaticFields::get_offset_of_AnyOtherOriginScheme_7(),
	NetCodeGroup_t2217812384::get_offset_of__rules_8(),
	NetCodeGroup_t2217812384::get_offset_of__hashcode_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize944 = { sizeof (PermissionRequestEvidence_t59447972), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable944[3] = 
{
	PermissionRequestEvidence_t59447972::get_offset_of_requested_0(),
	PermissionRequestEvidence_t59447972::get_offset_of_optional_1(),
	PermissionRequestEvidence_t59447972::get_offset_of_denied_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize945 = { sizeof (PolicyException_t1520028310), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize946 = { sizeof (PolicyLevel_t2891196107), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable946[8] = 
{
	PolicyLevel_t2891196107::get_offset_of_label_0(),
	PolicyLevel_t2891196107::get_offset_of_root_code_group_1(),
	PolicyLevel_t2891196107::get_offset_of_full_trust_assemblies_2(),
	PolicyLevel_t2891196107::get_offset_of_named_permission_sets_3(),
	PolicyLevel_t2891196107::get_offset_of__location_4(),
	PolicyLevel_t2891196107::get_offset_of__type_5(),
	PolicyLevel_t2891196107::get_offset_of_fullNames_6(),
	PolicyLevel_t2891196107::get_offset_of_xml_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize947 = { sizeof (PolicyStatement_t3052133691), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable947[2] = 
{
	PolicyStatement_t3052133691::get_offset_of_perms_0(),
	PolicyStatement_t3052133691::get_offset_of_attrs_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize948 = { sizeof (PolicyStatementAttribute_t1674167676)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable948[5] = 
{
	PolicyStatementAttribute_t1674167676::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize949 = { sizeof (Publisher_t2758056332), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable949[1] = 
{
	Publisher_t2758056332::get_offset_of_m_cert_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize950 = { sizeof (Site_t1075497104), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable950[1] = 
{
	Site_t1075497104::get_offset_of_origin_site_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize951 = { sizeof (StrongName_t3675724614), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable951[3] = 
{
	StrongName_t3675724614::get_offset_of_publickey_0(),
	StrongName_t3675724614::get_offset_of_name_1(),
	StrongName_t3675724614::get_offset_of_version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize952 = { sizeof (StrongNameMembershipCondition_t2614563360), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable952[4] = 
{
	StrongNameMembershipCondition_t2614563360::get_offset_of_version_0(),
	StrongNameMembershipCondition_t2614563360::get_offset_of_blob_1(),
	StrongNameMembershipCondition_t2614563360::get_offset_of_name_2(),
	StrongNameMembershipCondition_t2614563360::get_offset_of_assemblyVersion_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize953 = { sizeof (UnionCodeGroup_t3773268997), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize954 = { sizeof (Url_t207802215), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable954[1] = 
{
	Url_t207802215::get_offset_of_origin_url_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize955 = { sizeof (Zone_t2011285646), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable955[1] = 
{
	Zone_t2011285646::get_offset_of_zone_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize956 = { sizeof (ZoneMembershipCondition_t3195636716), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable956[2] = 
{
	ZoneMembershipCondition_t3195636716::get_offset_of_version_0(),
	ZoneMembershipCondition_t3195636716::get_offset_of_zone_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize957 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize958 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize959 = { sizeof (PrincipalPolicy_t1761212333)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable959[4] = 
{
	PrincipalPolicy_t1761212333::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize960 = { sizeof (WindowsAccountType_t2283000883)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable960[5] = 
{
	WindowsAccountType_t2283000883::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize961 = { sizeof (WindowsIdentity_t2948242406), -1, sizeof(WindowsIdentity_t2948242406_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable961[7] = 
{
	WindowsIdentity_t2948242406::get_offset_of__token_0(),
	WindowsIdentity_t2948242406::get_offset_of__type_1(),
	WindowsIdentity_t2948242406::get_offset_of__account_2(),
	WindowsIdentity_t2948242406::get_offset_of__authenticated_3(),
	WindowsIdentity_t2948242406::get_offset_of__name_4(),
	WindowsIdentity_t2948242406::get_offset_of__info_5(),
	WindowsIdentity_t2948242406_StaticFields::get_offset_of_invalidWindows_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize962 = { sizeof (ASCIIEncoding_t3446586211), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize963 = { sizeof (Decoder_t2204182725), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable963[2] = 
{
	Decoder_t2204182725::get_offset_of_fallback_0(),
	Decoder_t2204182725::get_offset_of_fallback_buffer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize964 = { sizeof (DecoderExceptionFallback_t3981484394), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize965 = { sizeof (DecoderExceptionFallbackBuffer_t90938522), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize966 = { sizeof (DecoderFallback_t3123823036), -1, sizeof(DecoderFallback_t3123823036_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable966[3] = 
{
	DecoderFallback_t3123823036_StaticFields::get_offset_of_exception_fallback_0(),
	DecoderFallback_t3123823036_StaticFields::get_offset_of_replacement_fallback_1(),
	DecoderFallback_t3123823036_StaticFields::get_offset_of_standard_safe_fallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize967 = { sizeof (DecoderFallbackBuffer_t2402303981), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize968 = { sizeof (DecoderFallbackException_t1661362184), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable968[2] = 
{
	DecoderFallbackException_t1661362184::get_offset_of_bytes_unknown_13(),
	DecoderFallbackException_t1661362184::get_offset_of_index_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize969 = { sizeof (DecoderReplacementFallback_t1462101135), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable969[1] = 
{
	DecoderReplacementFallback_t1462101135::get_offset_of_replacement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize970 = { sizeof (DecoderReplacementFallbackBuffer_t841144779), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable970[3] = 
{
	DecoderReplacementFallbackBuffer_t841144779::get_offset_of_fallback_assigned_0(),
	DecoderReplacementFallbackBuffer_t841144779::get_offset_of_current_1(),
	DecoderReplacementFallbackBuffer_t841144779::get_offset_of_replacement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize971 = { sizeof (EncoderExceptionFallback_t1243849599), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize972 = { sizeof (EncoderExceptionFallbackBuffer_t3597232471), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize973 = { sizeof (EncoderFallback_t1188251036), -1, sizeof(EncoderFallback_t1188251036_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable973[3] = 
{
	EncoderFallback_t1188251036_StaticFields::get_offset_of_exception_fallback_0(),
	EncoderFallback_t1188251036_StaticFields::get_offset_of_replacement_fallback_1(),
	EncoderFallback_t1188251036_StaticFields::get_offset_of_standard_safe_fallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize974 = { sizeof (EncoderFallbackBuffer_t3523102303), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize975 = { sizeof (EncoderFallbackException_t2773771926), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable975[4] = 
{
	EncoderFallbackException_t2773771926::get_offset_of_char_unknown_13(),
	EncoderFallbackException_t2773771926::get_offset_of_char_unknown_high_14(),
	EncoderFallbackException_t2773771926::get_offset_of_char_unknown_low_15(),
	EncoderFallbackException_t2773771926::get_offset_of_index_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize976 = { sizeof (EncoderReplacementFallback_t1623206753), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable976[1] = 
{
	EncoderReplacementFallback_t1623206753::get_offset_of_replacement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize977 = { sizeof (EncoderReplacementFallbackBuffer_t1863187162), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable977[3] = 
{
	EncoderReplacementFallbackBuffer_t1863187162::get_offset_of_replacement_0(),
	EncoderReplacementFallbackBuffer_t1863187162::get_offset_of_current_1(),
	EncoderReplacementFallbackBuffer_t1863187162::get_offset_of_fallback_assigned_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize978 = { sizeof (Encoding_t1523322056), -1, sizeof(Encoding_t1523322056_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable978[28] = 
{
	Encoding_t1523322056::get_offset_of_codePage_0(),
	Encoding_t1523322056::get_offset_of_windows_code_page_1(),
	Encoding_t1523322056::get_offset_of_is_readonly_2(),
	Encoding_t1523322056::get_offset_of_decoder_fallback_3(),
	Encoding_t1523322056::get_offset_of_encoder_fallback_4(),
	Encoding_t1523322056_StaticFields::get_offset_of_i18nAssembly_5(),
	Encoding_t1523322056_StaticFields::get_offset_of_i18nDisabled_6(),
	Encoding_t1523322056_StaticFields::get_offset_of_encodings_7(),
	Encoding_t1523322056::get_offset_of_body_name_8(),
	Encoding_t1523322056::get_offset_of_encoding_name_9(),
	Encoding_t1523322056::get_offset_of_header_name_10(),
	Encoding_t1523322056::get_offset_of_is_mail_news_display_11(),
	Encoding_t1523322056::get_offset_of_is_mail_news_save_12(),
	Encoding_t1523322056::get_offset_of_is_browser_save_13(),
	Encoding_t1523322056::get_offset_of_is_browser_display_14(),
	Encoding_t1523322056::get_offset_of_web_name_15(),
	Encoding_t1523322056_StaticFields::get_offset_of_asciiEncoding_16(),
	Encoding_t1523322056_StaticFields::get_offset_of_bigEndianEncoding_17(),
	Encoding_t1523322056_StaticFields::get_offset_of_defaultEncoding_18(),
	Encoding_t1523322056_StaticFields::get_offset_of_utf7Encoding_19(),
	Encoding_t1523322056_StaticFields::get_offset_of_utf8EncodingWithMarkers_20(),
	Encoding_t1523322056_StaticFields::get_offset_of_utf8EncodingWithoutMarkers_21(),
	Encoding_t1523322056_StaticFields::get_offset_of_unicodeEncoding_22(),
	Encoding_t1523322056_StaticFields::get_offset_of_isoLatin1Encoding_23(),
	Encoding_t1523322056_StaticFields::get_offset_of_utf8EncodingUnsafe_24(),
	Encoding_t1523322056_StaticFields::get_offset_of_utf32Encoding_25(),
	Encoding_t1523322056_StaticFields::get_offset_of_bigEndianUTF32Encoding_26(),
	Encoding_t1523322056_StaticFields::get_offset_of_lockobj_27(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize979 = { sizeof (ForwardingDecoder_t3503728819), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable979[1] = 
{
	ForwardingDecoder_t3503728819::get_offset_of_encoding_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize980 = { sizeof (Latin1Encoding_t950549005), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize981 = { sizeof (StringBuilder_t), sizeof(char*), 0, 0 };
extern const int32_t g_FieldOffsetTable981[5] = 
{
	0,
	StringBuilder_t::get_offset_of__length_1(),
	StringBuilder_t::get_offset_of__str_2(),
	StringBuilder_t::get_offset_of__cached_str_3(),
	StringBuilder_t::get_offset_of__maxCapacity_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize982 = { sizeof (UnicodeEncoding_t1959134050), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable982[2] = 
{
	UnicodeEncoding_t1959134050::get_offset_of_bigEndian_28(),
	UnicodeEncoding_t1959134050::get_offset_of_byteOrderMark_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize983 = { sizeof (UnicodeDecoder_t872550992), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable983[2] = 
{
	UnicodeDecoder_t872550992::get_offset_of_bigEndian_2(),
	UnicodeDecoder_t872550992::get_offset_of_leftOverByte_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize984 = { sizeof (UTF7Encoding_t2644108479), -1, sizeof(UTF7Encoding_t2644108479_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable984[3] = 
{
	UTF7Encoding_t2644108479::get_offset_of_allowOptionals_28(),
	UTF7Encoding_t2644108479_StaticFields::get_offset_of_encodingRules_29(),
	UTF7Encoding_t2644108479_StaticFields::get_offset_of_base64Values_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize985 = { sizeof (UTF7Decoder_t2247208115), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable985[1] = 
{
	UTF7Decoder_t2247208115::get_offset_of_leftOver_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize986 = { sizeof (UTF8Encoding_t3956466879), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable986[1] = 
{
	UTF8Encoding_t3956466879::get_offset_of_emitIdentifier_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize987 = { sizeof (UTF8Decoder_t2159214862), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable987[2] = 
{
	UTF8Decoder_t2159214862::get_offset_of_leftOverBits_2(),
	UTF8Decoder_t2159214862::get_offset_of_leftOverCount_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize988 = { sizeof (UTF32Encoding_t312252005), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable988[2] = 
{
	UTF32Encoding_t312252005::get_offset_of_bigEndian_28(),
	UTF32Encoding_t312252005::get_offset_of_byteOrderMark_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize989 = { sizeof (UTF32Decoder_t635925672), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable989[3] = 
{
	UTF32Decoder_t635925672::get_offset_of_bigEndian_2(),
	UTF32Decoder_t635925672::get_offset_of_leftOverByte_3(),
	UTF32Decoder_t635925672::get_offset_of_leftOverLength_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize990 = { sizeof (AutoResetEvent_t1333520283), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize991 = { sizeof (CompressedStack_t1202932761), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable991[1] = 
{
	CompressedStack_t1202932761::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize992 = { sizeof (EventResetMode_t3817241503)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable992[3] = 
{
	EventResetMode_t3817241503::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize993 = { sizeof (EventWaitHandle_t777845177), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize994 = { sizeof (ExecutionContext_t1748372627), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable994[3] = 
{
	ExecutionContext_t1748372627::get_offset_of__sc_0(),
	ExecutionContext_t1748372627::get_offset_of__suppressFlow_1(),
	ExecutionContext_t1748372627::get_offset_of__capture_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize995 = { sizeof (Interlocked_t2273387594), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize996 = { sizeof (ManualResetEvent_t451242010), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize997 = { sizeof (Monitor_t2197244473), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize998 = { sizeof (Mutex_t3066672582), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize999 = { sizeof (NativeEventCalls_t570794723), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
