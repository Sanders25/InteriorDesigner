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

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.Xml.XmlTextWriter/XmlNodeInfo
struct XmlNodeInfo_t4030693883;
// System.Xml.XmlUrlResolver
struct XmlUrlResolver_t817895037;
// System.Xml.XmlResolver
struct XmlResolver_t626023767;
// System.Uri
struct Uri_t100236324;
// System.Type
struct Type_t;
// System.Xml.XmlException
struct XmlException_t1761730631;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.IO.FileStream
struct FileStream_t4292183065;
// System.Net.WebRequest
struct WebRequest_t1939381076;
// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t1719295192;
// System.Xml.XmlReader
struct XmlReader_t3121518892;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Xml.XmlParserContext
struct XmlParserContext_t2544895291;
// Mono.Xml.DTDValidatingReader
struct DTDValidatingReader_t3946379043;
// System.Xml.XmlTextReader
struct XmlTextReader_t4233384356;
// System.Xml.XmlNameTable
struct XmlNameTable_t71772148;
// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t3610399789;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t2186285234;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t1578797820;
// Mono.Xml.Schema.XsdValidatingReader
struct XsdValidatingReader_t3961132625;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t791314227;
// System.Delegate
struct Delegate_t1188392813;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t266093086;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t2784773869;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t3511258692;
// System.Xml.XmlWhitespace
struct XmlWhitespace_t131741354;
// System.Xml.XmlDocument
struct XmlDocument_t2837193595;
// System.Xml.XmlCharacterData
struct XmlCharacterData_t1167807131;
// System.Xml.XmlNode
struct XmlNode_t3767805227;
// System.Xml.XmlWriter
struct XmlWriter_t127905479;
// System.Xml.XmlWriterSettings
struct XmlWriterSettings_t3314986516;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Xml.XmlReaderBinarySupport
struct XmlReaderBinarySupport_t1809665003;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Xml.XmlNode/EmptyNodeList
struct EmptyNodeList_t139615908;
// System.Xml.XmlNodeListChildren
struct XmlNodeListChildren_t1082692789;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Reflection.Assembly
struct Assembly_t;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t2082808316;
// System.UriParser
struct UriParser_t3890150400;
// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t2877834729;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Xml.XmlImplementation
struct XmlImplementation_t254178875;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t2890546907;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1437094927;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t934654762;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t1533444722;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t3455035481;
// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t2690840144;
// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t1267732406;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1729680289;
// Mono.Xml.DTDValidatingReader/AttributeSlot[]
struct AttributeSlotU5BU5D_t600906362;
// System.Collections.Stack
struct Stack_t2329662280;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t781538777;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t418790500;
// System.Net.ICredentials
struct ICredentials_t725721261;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1315720168;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t2546974348;
// System.Xml.Schema.XmlSchemaCompilationSettings
struct XmlSchemaCompilationSettings_t2218765537;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t4070033136;
// System.Net.IWebProxy
struct IWebProxy_t688979836;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Xml.Schema.XmlSchemaAttribute[]
struct XmlSchemaAttributeU5BU5D_t346244693;
// Mono.Xml.IHasXmlSchemaInfo
struct IHasXmlSchemaInfo_t74872415;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t2353988607;
// Mono.Xml.Schema.XsdIDManager
struct XsdIDManager_t1008806102;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t726654767;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;

extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern RuntimeClass* StringUtil_t564231417_il2cpp_TypeInfo_var;
extern const uint32_t StringUtil__cctor_m1463895374_MetadataUsageId;
extern const uint32_t StringUtil_IndexOf_m1748403443_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t StringUtil_Format_m4156193709_MetadataUsageId;
extern const RuntimeType* Stream_t1273022909_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlException_t1761730631_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* FileStream_t4292183065_il2cpp_TypeInfo_var;
extern RuntimeClass* WebRequest_t1939381076_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlUrlResolver_GetEntity_m2245402732_RuntimeMethod_var;
extern String_t* _stringLiteral109070372;
extern String_t* _stringLiteral3264822601;
extern String_t* _stringLiteral1705633010;
extern String_t* _stringLiteral1629333464;
extern const uint32_t XmlUrlResolver_GetEntity_m2245402732_MetadataUsageId;
extern String_t* _stringLiteral3403826294;
extern String_t* _stringLiteral3452614548;
extern String_t* _stringLiteral271658412;
extern String_t* _stringLiteral3452614546;
extern String_t* _stringLiteral2671228134;
extern String_t* _stringLiteral3452614525;
extern String_t* _stringLiteral4237312075;
extern String_t* _stringLiteral3452614526;
extern String_t* _stringLiteral3074512661;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral3834027548;
extern String_t* _stringLiteral3452614523;
extern const uint32_t XmlUrlResolver_UnescapeRelativeUriBody_m2976662118_MetadataUsageId;
extern RuntimeClass* XmlTextReader_t4233384356_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlUrlResolver_t817895037_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern const uint32_t XmlValidatingReader__ctor_m746074126_MetadataUsageId;
extern RuntimeClass* IHasXmlParserContext_t1330489402_il2cpp_TypeInfo_var;
extern const uint32_t XmlValidatingReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m2551608519_MetadataUsageId;
extern RuntimeClass* IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var;
extern const uint32_t XmlValidatingReader_get_LineNumber_m4160044902_MetadataUsageId;
extern const uint32_t XmlValidatingReader_get_LinePosition_m2821670432_MetadataUsageId;
extern const uint32_t XmlValidatingReader_get_LocalName_m3935686416_MetadataUsageId;
extern const uint32_t XmlValidatingReader_get_Name_m2521889568_MetadataUsageId;
extern const uint32_t XmlValidatingReader_get_NamespaceURI_m606176985_MetadataUsageId;
extern const uint32_t XmlValidatingReader_get_Prefix_m754810542_MetadataUsageId;
extern RuntimeClass* XmlSchemaCollection_t3610399789_il2cpp_TypeInfo_var;
extern const uint32_t XmlValidatingReader_get_Schemas_m1542506967_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlValidatingReader_set_ValidationType_m3850545770_RuntimeMethod_var;
extern String_t* _stringLiteral224365628;
extern const uint32_t XmlValidatingReader_set_ValidationType_m3850545770_MetadataUsageId;
extern const uint32_t XmlValidatingReader_get_Value_m2511111829_MetadataUsageId;
extern const uint32_t XmlValidatingReader_get_XmlLang_m869989634_MetadataUsageId;
extern RuntimeClass* IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlValidatingReader_GetAttribute_m580377592_RuntimeMethod_var;
extern String_t* _stringLiteral349273836;
extern const uint32_t XmlValidatingReader_GetAttribute_m580377592_MetadataUsageId;
extern const uint32_t XmlValidatingReader_HasLineInfo_m870518869_MetadataUsageId;
extern const RuntimeMethod* XmlValidatingReader_MoveToAttribute_m565086185_RuntimeMethod_var;
extern const uint32_t XmlValidatingReader_MoveToAttribute_m565086185_MetadataUsageId;
extern RuntimeClass* DTDValidatingReader_t3946379043_il2cpp_TypeInfo_var;
extern RuntimeClass* XsdValidatingReader_t3961132625_il2cpp_TypeInfo_var;
extern RuntimeClass* ValidationEventHandler_t791314227_il2cpp_TypeInfo_var;
extern RuntimeClass* IHasXmlSchemaInfo_t74872415_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlValidatingReader_OnValidationEvent_m367061793_RuntimeMethod_var;
extern const RuntimeMethod* XmlValidatingReader_Read_m3555356476_RuntimeMethod_var;
extern const uint32_t XmlValidatingReader_Read_m3555356476_MetadataUsageId;
extern const uint32_t XmlValidatingReader_OnValidationEvent_m367061793_MetadataUsageId;
extern String_t* _stringLiteral1653520728;
extern const uint32_t XmlWhitespace_get_LocalName_m4124641324_MetadataUsageId;
extern const uint32_t XmlWhitespace_get_Name_m3062444240_MetadataUsageId;
extern RuntimeClass* XmlChar_t3816087079_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlWhitespace_set_Value_m1380309567_RuntimeMethod_var;
extern String_t* _stringLiteral3922471879;
extern const uint32_t XmlWhitespace_set_Value_m1380309567_MetadataUsageId;
extern RuntimeClass* XmlWhitespace_t131741354_il2cpp_TypeInfo_var;
extern const uint32_t XmlWhitespace_CloneNode_m2585972626_MetadataUsageId;
extern RuntimeClass* XmlWriterSettings_t3314986516_il2cpp_TypeInfo_var;
extern const uint32_t XmlWriter_get_Settings_m164933578_MetadataUsageId;
extern const uint32_t XmlWriter_WriteAttributeString_m400667381_MetadataUsageId;
extern RuntimeClass* XmlConvert_t1981561327_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlWriter_WriteQualifiedNameInternal_m2017981185_RuntimeMethod_var;
extern String_t* _stringLiteral2384487702;
extern String_t* _stringLiteral3452614550;
extern const uint32_t XmlWriter_WriteQualifiedNameInternal_m2017981185_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlNodeType_t1672767151_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlWriter_WriteNode_m263666930_RuntimeMethod_var;
extern String_t* _stringLiteral3984887517;
extern String_t* _stringLiteral3261774195;
extern String_t* _stringLiteral1152083996;
extern String_t* _stringLiteral3442940761;
extern const uint32_t XmlWriter_WriteNode_m263666930_MetadataUsageId;
extern RuntimeClass* Encoding_t1523322056_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3450517376;
extern const uint32_t XmlWriterSettings_Reset_m4105849431_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;


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
#ifndef XMLSCHEMACOLLECTION_T3610399789_H
#define XMLSCHEMACOLLECTION_T3610399789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaCollection
struct  XmlSchemaCollection_t3610399789  : public RuntimeObject
{
public:
	// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchemaCollection::schemaSet
	XmlSchemaSet_t266093086 * ___schemaSet_0;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaCollection::ValidationEventHandler
	ValidationEventHandler_t791314227 * ___ValidationEventHandler_1;

public:
	inline static int32_t get_offset_of_schemaSet_0() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t3610399789, ___schemaSet_0)); }
	inline XmlSchemaSet_t266093086 * get_schemaSet_0() const { return ___schemaSet_0; }
	inline XmlSchemaSet_t266093086 ** get_address_of_schemaSet_0() { return &___schemaSet_0; }
	inline void set_schemaSet_0(XmlSchemaSet_t266093086 * value)
	{
		___schemaSet_0 = value;
		Il2CppCodeGenWriteBarrier((&___schemaSet_0), value);
	}

	inline static int32_t get_offset_of_ValidationEventHandler_1() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t3610399789, ___ValidationEventHandler_1)); }
	inline ValidationEventHandler_t791314227 * get_ValidationEventHandler_1() const { return ___ValidationEventHandler_1; }
	inline ValidationEventHandler_t791314227 ** get_address_of_ValidationEventHandler_1() { return &___ValidationEventHandler_1; }
	inline void set_ValidationEventHandler_1(ValidationEventHandler_t791314227 * value)
	{
		___ValidationEventHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___ValidationEventHandler_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMACOLLECTION_T3610399789_H
#ifndef XMLREADER_T3121518892_H
#define XMLREADER_T3121518892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReader
struct  XmlReader_t3121518892  : public RuntimeObject
{
public:
	// System.Text.StringBuilder System.Xml.XmlReader::readStringBuffer
	StringBuilder_t * ___readStringBuffer_0;
	// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::binary
	XmlReaderBinarySupport_t1809665003 * ___binary_1;
	// System.Xml.XmlReaderSettings System.Xml.XmlReader::settings
	XmlReaderSettings_t2186285234 * ___settings_2;

public:
	inline static int32_t get_offset_of_readStringBuffer_0() { return static_cast<int32_t>(offsetof(XmlReader_t3121518892, ___readStringBuffer_0)); }
	inline StringBuilder_t * get_readStringBuffer_0() const { return ___readStringBuffer_0; }
	inline StringBuilder_t ** get_address_of_readStringBuffer_0() { return &___readStringBuffer_0; }
	inline void set_readStringBuffer_0(StringBuilder_t * value)
	{
		___readStringBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___readStringBuffer_0), value);
	}

	inline static int32_t get_offset_of_binary_1() { return static_cast<int32_t>(offsetof(XmlReader_t3121518892, ___binary_1)); }
	inline XmlReaderBinarySupport_t1809665003 * get_binary_1() const { return ___binary_1; }
	inline XmlReaderBinarySupport_t1809665003 ** get_address_of_binary_1() { return &___binary_1; }
	inline void set_binary_1(XmlReaderBinarySupport_t1809665003 * value)
	{
		___binary_1 = value;
		Il2CppCodeGenWriteBarrier((&___binary_1), value);
	}

	inline static int32_t get_offset_of_settings_2() { return static_cast<int32_t>(offsetof(XmlReader_t3121518892, ___settings_2)); }
	inline XmlReaderSettings_t2186285234 * get_settings_2() const { return ___settings_2; }
	inline XmlReaderSettings_t2186285234 ** get_address_of_settings_2() { return &___settings_2; }
	inline void set_settings_2(XmlReaderSettings_t2186285234 * value)
	{
		___settings_2 = value;
		Il2CppCodeGenWriteBarrier((&___settings_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLREADER_T3121518892_H
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
#ifndef XMLNAMETABLE_T71772148_H
#define XMLNAMETABLE_T71772148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNameTable
struct  XmlNameTable_t71772148  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNAMETABLE_T71772148_H
#ifndef XMLNODE_T3767805227_H
#define XMLNODE_T3767805227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNode
struct  XmlNode_t3767805227  : public RuntimeObject
{
public:
	// System.Xml.XmlDocument System.Xml.XmlNode::ownerDocument
	XmlDocument_t2837193595 * ___ownerDocument_1;
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t3767805227 * ___parentNode_2;
	// System.Xml.XmlNodeListChildren System.Xml.XmlNode::childNodes
	XmlNodeListChildren_t1082692789 * ___childNodes_3;

public:
	inline static int32_t get_offset_of_ownerDocument_1() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227, ___ownerDocument_1)); }
	inline XmlDocument_t2837193595 * get_ownerDocument_1() const { return ___ownerDocument_1; }
	inline XmlDocument_t2837193595 ** get_address_of_ownerDocument_1() { return &___ownerDocument_1; }
	inline void set_ownerDocument_1(XmlDocument_t2837193595 * value)
	{
		___ownerDocument_1 = value;
		Il2CppCodeGenWriteBarrier((&___ownerDocument_1), value);
	}

	inline static int32_t get_offset_of_parentNode_2() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227, ___parentNode_2)); }
	inline XmlNode_t3767805227 * get_parentNode_2() const { return ___parentNode_2; }
	inline XmlNode_t3767805227 ** get_address_of_parentNode_2() { return &___parentNode_2; }
	inline void set_parentNode_2(XmlNode_t3767805227 * value)
	{
		___parentNode_2 = value;
		Il2CppCodeGenWriteBarrier((&___parentNode_2), value);
	}

	inline static int32_t get_offset_of_childNodes_3() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227, ___childNodes_3)); }
	inline XmlNodeListChildren_t1082692789 * get_childNodes_3() const { return ___childNodes_3; }
	inline XmlNodeListChildren_t1082692789 ** get_address_of_childNodes_3() { return &___childNodes_3; }
	inline void set_childNodes_3(XmlNodeListChildren_t1082692789 * value)
	{
		___childNodes_3 = value;
		Il2CppCodeGenWriteBarrier((&___childNodes_3), value);
	}
};

struct XmlNode_t3767805227_StaticFields
{
public:
	// System.Xml.XmlNode/EmptyNodeList System.Xml.XmlNode::emptyList
	EmptyNodeList_t139615908 * ___emptyList_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNode::<>f__switch$map2B
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map2B_4;

public:
	inline static int32_t get_offset_of_emptyList_0() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227_StaticFields, ___emptyList_0)); }
	inline EmptyNodeList_t139615908 * get_emptyList_0() const { return ___emptyList_0; }
	inline EmptyNodeList_t139615908 ** get_address_of_emptyList_0() { return &___emptyList_0; }
	inline void set_emptyList_0(EmptyNodeList_t139615908 * value)
	{
		___emptyList_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptyList_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2B_4() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227_StaticFields, ___U3CU3Ef__switchU24map2B_4)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map2B_4() const { return ___U3CU3Ef__switchU24map2B_4; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map2B_4() { return &___U3CU3Ef__switchU24map2B_4; }
	inline void set_U3CU3Ef__switchU24map2B_4(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map2B_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2B_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODE_T3767805227_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
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
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef XMLWRITER_T127905479_H
#define XMLWRITER_T127905479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWriter
struct  XmlWriter_t127905479  : public RuntimeObject
{
public:
	// System.Xml.XmlWriterSettings System.Xml.XmlWriter::settings
	XmlWriterSettings_t3314986516 * ___settings_0;

public:
	inline static int32_t get_offset_of_settings_0() { return static_cast<int32_t>(offsetof(XmlWriter_t127905479, ___settings_0)); }
	inline XmlWriterSettings_t3314986516 * get_settings_0() const { return ___settings_0; }
	inline XmlWriterSettings_t3314986516 ** get_address_of_settings_0() { return &___settings_0; }
	inline void set_settings_0(XmlWriterSettings_t3314986516 * value)
	{
		___settings_0 = value;
		Il2CppCodeGenWriteBarrier((&___settings_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWRITER_T127905479_H
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
#ifndef URI_T100236324_H
#define URI_T100236324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t100236324  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_0;
	// System.String System.Uri::source
	String_t* ___source_1;
	// System.String System.Uri::scheme
	String_t* ___scheme_2;
	// System.String System.Uri::host
	String_t* ___host_3;
	// System.Int32 System.Uri::port
	int32_t ___port_4;
	// System.String System.Uri::path
	String_t* ___path_5;
	// System.String System.Uri::query
	String_t* ___query_6;
	// System.String System.Uri::fragment
	String_t* ___fragment_7;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_8;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_9;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_10;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_11;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_12;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_13;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_14;
	// System.String System.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_15;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_16;
	// System.UriParser System.Uri::parser
	UriParser_t3890150400 * ___parser_30;

public:
	inline static int32_t get_offset_of_isUnixFilePath_0() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnixFilePath_0)); }
	inline bool get_isUnixFilePath_0() const { return ___isUnixFilePath_0; }
	inline bool* get_address_of_isUnixFilePath_0() { return &___isUnixFilePath_0; }
	inline void set_isUnixFilePath_0(bool value)
	{
		___isUnixFilePath_0 = value;
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_scheme_2() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___scheme_2)); }
	inline String_t* get_scheme_2() const { return ___scheme_2; }
	inline String_t** get_address_of_scheme_2() { return &___scheme_2; }
	inline void set_scheme_2(String_t* value)
	{
		___scheme_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_2), value);
	}

	inline static int32_t get_offset_of_host_3() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___host_3)); }
	inline String_t* get_host_3() const { return ___host_3; }
	inline String_t** get_address_of_host_3() { return &___host_3; }
	inline void set_host_3(String_t* value)
	{
		___host_3 = value;
		Il2CppCodeGenWriteBarrier((&___host_3), value);
	}

	inline static int32_t get_offset_of_port_4() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___port_4)); }
	inline int32_t get_port_4() const { return ___port_4; }
	inline int32_t* get_address_of_port_4() { return &___port_4; }
	inline void set_port_4(int32_t value)
	{
		___port_4 = value;
	}

	inline static int32_t get_offset_of_path_5() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___path_5)); }
	inline String_t* get_path_5() const { return ___path_5; }
	inline String_t** get_address_of_path_5() { return &___path_5; }
	inline void set_path_5(String_t* value)
	{
		___path_5 = value;
		Il2CppCodeGenWriteBarrier((&___path_5), value);
	}

	inline static int32_t get_offset_of_query_6() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___query_6)); }
	inline String_t* get_query_6() const { return ___query_6; }
	inline String_t** get_address_of_query_6() { return &___query_6; }
	inline void set_query_6(String_t* value)
	{
		___query_6 = value;
		Il2CppCodeGenWriteBarrier((&___query_6), value);
	}

	inline static int32_t get_offset_of_fragment_7() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___fragment_7)); }
	inline String_t* get_fragment_7() const { return ___fragment_7; }
	inline String_t** get_address_of_fragment_7() { return &___fragment_7; }
	inline void set_fragment_7(String_t* value)
	{
		___fragment_7 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_7), value);
	}

	inline static int32_t get_offset_of_userinfo_8() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userinfo_8)); }
	inline String_t* get_userinfo_8() const { return ___userinfo_8; }
	inline String_t** get_address_of_userinfo_8() { return &___userinfo_8; }
	inline void set_userinfo_8(String_t* value)
	{
		___userinfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_8), value);
	}

	inline static int32_t get_offset_of_isUnc_9() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnc_9)); }
	inline bool get_isUnc_9() const { return ___isUnc_9; }
	inline bool* get_address_of_isUnc_9() { return &___isUnc_9; }
	inline void set_isUnc_9(bool value)
	{
		___isUnc_9 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_10() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isOpaquePart_10)); }
	inline bool get_isOpaquePart_10() const { return ___isOpaquePart_10; }
	inline bool* get_address_of_isOpaquePart_10() { return &___isOpaquePart_10; }
	inline void set_isOpaquePart_10(bool value)
	{
		___isOpaquePart_10 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_11() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isAbsoluteUri_11)); }
	inline bool get_isAbsoluteUri_11() const { return ___isAbsoluteUri_11; }
	inline bool* get_address_of_isAbsoluteUri_11() { return &___isAbsoluteUri_11; }
	inline void set_isAbsoluteUri_11(bool value)
	{
		___isAbsoluteUri_11 = value;
	}

	inline static int32_t get_offset_of_userEscaped_12() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userEscaped_12)); }
	inline bool get_userEscaped_12() const { return ___userEscaped_12; }
	inline bool* get_address_of_userEscaped_12() { return &___userEscaped_12; }
	inline void set_userEscaped_12(bool value)
	{
		___userEscaped_12 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_13() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedAbsoluteUri_13)); }
	inline String_t* get_cachedAbsoluteUri_13() const { return ___cachedAbsoluteUri_13; }
	inline String_t** get_address_of_cachedAbsoluteUri_13() { return &___cachedAbsoluteUri_13; }
	inline void set_cachedAbsoluteUri_13(String_t* value)
	{
		___cachedAbsoluteUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_13), value);
	}

	inline static int32_t get_offset_of_cachedToString_14() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedToString_14)); }
	inline String_t* get_cachedToString_14() const { return ___cachedToString_14; }
	inline String_t** get_address_of_cachedToString_14() { return &___cachedToString_14; }
	inline void set_cachedToString_14(String_t* value)
	{
		___cachedToString_14 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_14), value);
	}

	inline static int32_t get_offset_of_cachedLocalPath_15() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedLocalPath_15)); }
	inline String_t* get_cachedLocalPath_15() const { return ___cachedLocalPath_15; }
	inline String_t** get_address_of_cachedLocalPath_15() { return &___cachedLocalPath_15; }
	inline void set_cachedLocalPath_15(String_t* value)
	{
		___cachedLocalPath_15 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLocalPath_15), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_16() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedHashCode_16)); }
	inline int32_t get_cachedHashCode_16() const { return ___cachedHashCode_16; }
	inline int32_t* get_address_of_cachedHashCode_16() { return &___cachedHashCode_16; }
	inline void set_cachedHashCode_16(int32_t value)
	{
		___cachedHashCode_16 = value;
	}

	inline static int32_t get_offset_of_parser_30() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___parser_30)); }
	inline UriParser_t3890150400 * get_parser_30() const { return ___parser_30; }
	inline UriParser_t3890150400 ** get_address_of_parser_30() { return &___parser_30; }
	inline void set_parser_30(UriParser_t3890150400 * value)
	{
		___parser_30 = value;
		Il2CppCodeGenWriteBarrier((&___parser_30), value);
	}
};

struct Uri_t100236324_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_17;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_18;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_19;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_20;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_21;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_22;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_23;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_24;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_25;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_26;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_27;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_28;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_t2082808316* ___schemes_29;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map1C
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1C_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map1D
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1D_32;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map1E
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1E_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map1F
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1F_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map20
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map20_35;

public:
	inline static int32_t get_offset_of_hexUpperChars_17() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___hexUpperChars_17)); }
	inline String_t* get_hexUpperChars_17() const { return ___hexUpperChars_17; }
	inline String_t** get_address_of_hexUpperChars_17() { return &___hexUpperChars_17; }
	inline void set_hexUpperChars_17(String_t* value)
	{
		___hexUpperChars_17 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_17), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_18() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___SchemeDelimiter_18)); }
	inline String_t* get_SchemeDelimiter_18() const { return ___SchemeDelimiter_18; }
	inline String_t** get_address_of_SchemeDelimiter_18() { return &___SchemeDelimiter_18; }
	inline void set_SchemeDelimiter_18(String_t* value)
	{
		___SchemeDelimiter_18 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_18), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_19() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFile_19)); }
	inline String_t* get_UriSchemeFile_19() const { return ___UriSchemeFile_19; }
	inline String_t** get_address_of_UriSchemeFile_19() { return &___UriSchemeFile_19; }
	inline void set_UriSchemeFile_19(String_t* value)
	{
		___UriSchemeFile_19 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_19), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_20() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFtp_20)); }
	inline String_t* get_UriSchemeFtp_20() const { return ___UriSchemeFtp_20; }
	inline String_t** get_address_of_UriSchemeFtp_20() { return &___UriSchemeFtp_20; }
	inline void set_UriSchemeFtp_20(String_t* value)
	{
		___UriSchemeFtp_20 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_21() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeGopher_21)); }
	inline String_t* get_UriSchemeGopher_21() const { return ___UriSchemeGopher_21; }
	inline String_t** get_address_of_UriSchemeGopher_21() { return &___UriSchemeGopher_21; }
	inline void set_UriSchemeGopher_21(String_t* value)
	{
		___UriSchemeGopher_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_22() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttp_22)); }
	inline String_t* get_UriSchemeHttp_22() const { return ___UriSchemeHttp_22; }
	inline String_t** get_address_of_UriSchemeHttp_22() { return &___UriSchemeHttp_22; }
	inline void set_UriSchemeHttp_22(String_t* value)
	{
		___UriSchemeHttp_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_23() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttps_23)); }
	inline String_t* get_UriSchemeHttps_23() const { return ___UriSchemeHttps_23; }
	inline String_t** get_address_of_UriSchemeHttps_23() { return &___UriSchemeHttps_23; }
	inline void set_UriSchemeHttps_23(String_t* value)
	{
		___UriSchemeHttps_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_24() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeMailto_24)); }
	inline String_t* get_UriSchemeMailto_24() const { return ___UriSchemeMailto_24; }
	inline String_t** get_address_of_UriSchemeMailto_24() { return &___UriSchemeMailto_24; }
	inline void set_UriSchemeMailto_24(String_t* value)
	{
		___UriSchemeMailto_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_25() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNews_25)); }
	inline String_t* get_UriSchemeNews_25() const { return ___UriSchemeNews_25; }
	inline String_t** get_address_of_UriSchemeNews_25() { return &___UriSchemeNews_25; }
	inline void set_UriSchemeNews_25(String_t* value)
	{
		___UriSchemeNews_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_26() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNntp_26)); }
	inline String_t* get_UriSchemeNntp_26() const { return ___UriSchemeNntp_26; }
	inline String_t** get_address_of_UriSchemeNntp_26() { return &___UriSchemeNntp_26; }
	inline void set_UriSchemeNntp_26(String_t* value)
	{
		___UriSchemeNntp_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_27() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetPipe_27)); }
	inline String_t* get_UriSchemeNetPipe_27() const { return ___UriSchemeNetPipe_27; }
	inline String_t** get_address_of_UriSchemeNetPipe_27() { return &___UriSchemeNetPipe_27; }
	inline void set_UriSchemeNetPipe_27(String_t* value)
	{
		___UriSchemeNetPipe_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_27), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_28() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetTcp_28)); }
	inline String_t* get_UriSchemeNetTcp_28() const { return ___UriSchemeNetTcp_28; }
	inline String_t** get_address_of_UriSchemeNetTcp_28() { return &___UriSchemeNetTcp_28; }
	inline void set_UriSchemeNetTcp_28(String_t* value)
	{
		___UriSchemeNetTcp_28 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_28), value);
	}

	inline static int32_t get_offset_of_schemes_29() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___schemes_29)); }
	inline UriSchemeU5BU5D_t2082808316* get_schemes_29() const { return ___schemes_29; }
	inline UriSchemeU5BU5D_t2082808316** get_address_of_schemes_29() { return &___schemes_29; }
	inline void set_schemes_29(UriSchemeU5BU5D_t2082808316* value)
	{
		___schemes_29 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1C_31() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map1C_31)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1C_31() const { return ___U3CU3Ef__switchU24map1C_31; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1C_31() { return &___U3CU3Ef__switchU24map1C_31; }
	inline void set_U3CU3Ef__switchU24map1C_31(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1C_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1C_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1D_32() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map1D_32)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1D_32() const { return ___U3CU3Ef__switchU24map1D_32; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1D_32() { return &___U3CU3Ef__switchU24map1D_32; }
	inline void set_U3CU3Ef__switchU24map1D_32(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1D_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1D_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1E_33() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map1E_33)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1E_33() const { return ___U3CU3Ef__switchU24map1E_33; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1E_33() { return &___U3CU3Ef__switchU24map1E_33; }
	inline void set_U3CU3Ef__switchU24map1E_33(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1E_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1E_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1F_34() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map1F_34)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1F_34() const { return ___U3CU3Ef__switchU24map1F_34; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1F_34() { return &___U3CU3Ef__switchU24map1F_34; }
	inline void set_U3CU3Ef__switchU24map1F_34(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1F_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1F_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map20_35() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map20_35)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map20_35() const { return ___U3CU3Ef__switchU24map20_35; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map20_35() { return &___U3CU3Ef__switchU24map20_35; }
	inline void set_U3CU3Ef__switchU24map20_35(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map20_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map20_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T100236324_H
#ifndef COMPAREINFO_T1092934962_H
#define COMPAREINFO_T1092934962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareInfo
struct  CompareInfo_t1092934962  : public RuntimeObject
{
public:
	// System.Int32 System.Globalization.CompareInfo::culture
	int32_t ___culture_1;
	// System.String System.Globalization.CompareInfo::icu_name
	String_t* ___icu_name_2;
	// System.Int32 System.Globalization.CompareInfo::win32LCID
	int32_t ___win32LCID_3;
	// System.String System.Globalization.CompareInfo::m_name
	String_t* ___m_name_4;
	// Mono.Globalization.Unicode.SimpleCollator System.Globalization.CompareInfo::collator
	SimpleCollator_t2877834729 * ___collator_5;

public:
	inline static int32_t get_offset_of_culture_1() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___culture_1)); }
	inline int32_t get_culture_1() const { return ___culture_1; }
	inline int32_t* get_address_of_culture_1() { return &___culture_1; }
	inline void set_culture_1(int32_t value)
	{
		___culture_1 = value;
	}

	inline static int32_t get_offset_of_icu_name_2() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___icu_name_2)); }
	inline String_t* get_icu_name_2() const { return ___icu_name_2; }
	inline String_t** get_address_of_icu_name_2() { return &___icu_name_2; }
	inline void set_icu_name_2(String_t* value)
	{
		___icu_name_2 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_2), value);
	}

	inline static int32_t get_offset_of_win32LCID_3() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___win32LCID_3)); }
	inline int32_t get_win32LCID_3() const { return ___win32LCID_3; }
	inline int32_t* get_address_of_win32LCID_3() { return &___win32LCID_3; }
	inline void set_win32LCID_3(int32_t value)
	{
		___win32LCID_3 = value;
	}

	inline static int32_t get_offset_of_m_name_4() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___m_name_4)); }
	inline String_t* get_m_name_4() const { return ___m_name_4; }
	inline String_t** get_address_of_m_name_4() { return &___m_name_4; }
	inline void set_m_name_4(String_t* value)
	{
		___m_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_4), value);
	}

	inline static int32_t get_offset_of_collator_5() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___collator_5)); }
	inline SimpleCollator_t2877834729 * get_collator_5() const { return ___collator_5; }
	inline SimpleCollator_t2877834729 ** get_address_of_collator_5() { return &___collator_5; }
	inline void set_collator_5(SimpleCollator_t2877834729 * value)
	{
		___collator_5 = value;
		Il2CppCodeGenWriteBarrier((&___collator_5), value);
	}
};

struct CompareInfo_t1092934962_StaticFields
{
public:
	// System.Boolean System.Globalization.CompareInfo::useManagedCollation
	bool ___useManagedCollation_0;
	// System.Collections.Hashtable System.Globalization.CompareInfo::collators
	Hashtable_t1853889766 * ___collators_6;
	// System.Object System.Globalization.CompareInfo::monitor
	RuntimeObject * ___monitor_7;

public:
	inline static int32_t get_offset_of_useManagedCollation_0() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962_StaticFields, ___useManagedCollation_0)); }
	inline bool get_useManagedCollation_0() const { return ___useManagedCollation_0; }
	inline bool* get_address_of_useManagedCollation_0() { return &___useManagedCollation_0; }
	inline void set_useManagedCollation_0(bool value)
	{
		___useManagedCollation_0 = value;
	}

	inline static int32_t get_offset_of_collators_6() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962_StaticFields, ___collators_6)); }
	inline Hashtable_t1853889766 * get_collators_6() const { return ___collators_6; }
	inline Hashtable_t1853889766 ** get_address_of_collators_6() { return &___collators_6; }
	inline void set_collators_6(Hashtable_t1853889766 * value)
	{
		___collators_6 = value;
		Il2CppCodeGenWriteBarrier((&___collators_6), value);
	}

	inline static int32_t get_offset_of_monitor_7() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962_StaticFields, ___monitor_7)); }
	inline RuntimeObject * get_monitor_7() const { return ___monitor_7; }
	inline RuntimeObject ** get_address_of_monitor_7() { return &___monitor_7; }
	inline void set_monitor_7(RuntimeObject * value)
	{
		___monitor_7 = value;
		Il2CppCodeGenWriteBarrier((&___monitor_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPAREINFO_T1092934962_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3985046076* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_14)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_16)); }
	inline TextInfo_t3810425522 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3810425522 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_26)); }
	inline CompareInfo_t1092934962 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t1092934962 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3985046076* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3985046076** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3985046076* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_30)); }
	inline CultureInfo_t4157843068 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t4157843068 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_32)); }
	inline Calendar_t1661121569 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t1661121569 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t1661121569 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t1853889766 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t1853889766 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_39;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1B
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1B_40;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1C
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1C_41;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t1853889766 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t1853889766 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t1853889766 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t1853889766 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1B_40() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1B_40)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1B_40() const { return ___U3CU3Ef__switchU24map1B_40; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1B_40() { return &___U3CU3Ef__switchU24map1B_40; }
	inline void set_U3CU3Ef__switchU24map1B_40(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1B_40 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1B_40), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1C_41() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1C_41)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1C_41() const { return ___U3CU3Ef__switchU24map1C_41; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1C_41() { return &___U3CU3Ef__switchU24map1C_41; }
	inline void set_U3CU3Ef__switchU24map1C_41(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1C_41 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1C_41), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T4157843068_H
#ifndef STRINGUTIL_T564231417_H
#define STRINGUTIL_T564231417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/StringUtil
struct  StringUtil_t564231417  : public RuntimeObject
{
public:

public:
};

struct StringUtil_t564231417_StaticFields
{
public:
	// System.Globalization.CultureInfo System.Xml.XmlTextWriter/StringUtil::cul
	CultureInfo_t4157843068 * ___cul_0;
	// System.Globalization.CompareInfo System.Xml.XmlTextWriter/StringUtil::cmp
	CompareInfo_t1092934962 * ___cmp_1;

public:
	inline static int32_t get_offset_of_cul_0() { return static_cast<int32_t>(offsetof(StringUtil_t564231417_StaticFields, ___cul_0)); }
	inline CultureInfo_t4157843068 * get_cul_0() const { return ___cul_0; }
	inline CultureInfo_t4157843068 ** get_address_of_cul_0() { return &___cul_0; }
	inline void set_cul_0(CultureInfo_t4157843068 * value)
	{
		___cul_0 = value;
		Il2CppCodeGenWriteBarrier((&___cul_0), value);
	}

	inline static int32_t get_offset_of_cmp_1() { return static_cast<int32_t>(offsetof(StringUtil_t564231417_StaticFields, ___cmp_1)); }
	inline CompareInfo_t1092934962 * get_cmp_1() const { return ___cmp_1; }
	inline CompareInfo_t1092934962 ** get_address_of_cmp_1() { return &___cmp_1; }
	inline void set_cmp_1(CompareInfo_t1092934962 * value)
	{
		___cmp_1 = value;
		Il2CppCodeGenWriteBarrier((&___cmp_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGUTIL_T564231417_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef XMLRESOLVER_T626023767_H
#define XMLRESOLVER_T626023767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlResolver
struct  XmlResolver_t626023767  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLRESOLVER_T626023767_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
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
#ifndef XMLDOCUMENT_T2837193595_H
#define XMLDOCUMENT_T2837193595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlDocument
struct  XmlDocument_t2837193595  : public XmlNode_t3767805227
{
public:
	// System.Boolean System.Xml.XmlDocument::optimal_create_element
	bool ___optimal_create_element_6;
	// System.Boolean System.Xml.XmlDocument::optimal_create_attribute
	bool ___optimal_create_attribute_7;
	// System.Xml.XmlNameTable System.Xml.XmlDocument::nameTable
	XmlNameTable_t71772148 * ___nameTable_8;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_9;
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_t254178875 * ___implementation_10;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_11;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_t626023767 * ___resolver_12;
	// System.Collections.Hashtable System.Xml.XmlDocument::idTable
	Hashtable_t1853889766 * ___idTable_13;
	// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::nameCache
	XmlNameEntryCache_t2890546907 * ___nameCache_14;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastLinkedChild
	XmlLinkedNode_t1437094927 * ___lastLinkedChild_15;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlDocument::schemas
	XmlSchemaSet_t266093086 * ___schemas_16;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::schemaInfo
	RuntimeObject* ___schemaInfo_17;
	// System.Boolean System.Xml.XmlDocument::loadMode
	bool ___loadMode_18;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanged
	XmlNodeChangedEventHandler_t1533444722 * ___NodeChanged_19;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanging
	XmlNodeChangedEventHandler_t1533444722 * ___NodeChanging_20;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserted
	XmlNodeChangedEventHandler_t1533444722 * ___NodeInserted_21;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserting
	XmlNodeChangedEventHandler_t1533444722 * ___NodeInserting_22;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoved
	XmlNodeChangedEventHandler_t1533444722 * ___NodeRemoved_23;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoving
	XmlNodeChangedEventHandler_t1533444722 * ___NodeRemoving_24;

public:
	inline static int32_t get_offset_of_optimal_create_element_6() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___optimal_create_element_6)); }
	inline bool get_optimal_create_element_6() const { return ___optimal_create_element_6; }
	inline bool* get_address_of_optimal_create_element_6() { return &___optimal_create_element_6; }
	inline void set_optimal_create_element_6(bool value)
	{
		___optimal_create_element_6 = value;
	}

	inline static int32_t get_offset_of_optimal_create_attribute_7() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___optimal_create_attribute_7)); }
	inline bool get_optimal_create_attribute_7() const { return ___optimal_create_attribute_7; }
	inline bool* get_address_of_optimal_create_attribute_7() { return &___optimal_create_attribute_7; }
	inline void set_optimal_create_attribute_7(bool value)
	{
		___optimal_create_attribute_7 = value;
	}

	inline static int32_t get_offset_of_nameTable_8() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___nameTable_8)); }
	inline XmlNameTable_t71772148 * get_nameTable_8() const { return ___nameTable_8; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_8() { return &___nameTable_8; }
	inline void set_nameTable_8(XmlNameTable_t71772148 * value)
	{
		___nameTable_8 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_8), value);
	}

	inline static int32_t get_offset_of_baseURI_9() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___baseURI_9)); }
	inline String_t* get_baseURI_9() const { return ___baseURI_9; }
	inline String_t** get_address_of_baseURI_9() { return &___baseURI_9; }
	inline void set_baseURI_9(String_t* value)
	{
		___baseURI_9 = value;
		Il2CppCodeGenWriteBarrier((&___baseURI_9), value);
	}

	inline static int32_t get_offset_of_implementation_10() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___implementation_10)); }
	inline XmlImplementation_t254178875 * get_implementation_10() const { return ___implementation_10; }
	inline XmlImplementation_t254178875 ** get_address_of_implementation_10() { return &___implementation_10; }
	inline void set_implementation_10(XmlImplementation_t254178875 * value)
	{
		___implementation_10 = value;
		Il2CppCodeGenWriteBarrier((&___implementation_10), value);
	}

	inline static int32_t get_offset_of_preserveWhitespace_11() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___preserveWhitespace_11)); }
	inline bool get_preserveWhitespace_11() const { return ___preserveWhitespace_11; }
	inline bool* get_address_of_preserveWhitespace_11() { return &___preserveWhitespace_11; }
	inline void set_preserveWhitespace_11(bool value)
	{
		___preserveWhitespace_11 = value;
	}

	inline static int32_t get_offset_of_resolver_12() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___resolver_12)); }
	inline XmlResolver_t626023767 * get_resolver_12() const { return ___resolver_12; }
	inline XmlResolver_t626023767 ** get_address_of_resolver_12() { return &___resolver_12; }
	inline void set_resolver_12(XmlResolver_t626023767 * value)
	{
		___resolver_12 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_12), value);
	}

	inline static int32_t get_offset_of_idTable_13() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___idTable_13)); }
	inline Hashtable_t1853889766 * get_idTable_13() const { return ___idTable_13; }
	inline Hashtable_t1853889766 ** get_address_of_idTable_13() { return &___idTable_13; }
	inline void set_idTable_13(Hashtable_t1853889766 * value)
	{
		___idTable_13 = value;
		Il2CppCodeGenWriteBarrier((&___idTable_13), value);
	}

	inline static int32_t get_offset_of_nameCache_14() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___nameCache_14)); }
	inline XmlNameEntryCache_t2890546907 * get_nameCache_14() const { return ___nameCache_14; }
	inline XmlNameEntryCache_t2890546907 ** get_address_of_nameCache_14() { return &___nameCache_14; }
	inline void set_nameCache_14(XmlNameEntryCache_t2890546907 * value)
	{
		___nameCache_14 = value;
		Il2CppCodeGenWriteBarrier((&___nameCache_14), value);
	}

	inline static int32_t get_offset_of_lastLinkedChild_15() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___lastLinkedChild_15)); }
	inline XmlLinkedNode_t1437094927 * get_lastLinkedChild_15() const { return ___lastLinkedChild_15; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_lastLinkedChild_15() { return &___lastLinkedChild_15; }
	inline void set_lastLinkedChild_15(XmlLinkedNode_t1437094927 * value)
	{
		___lastLinkedChild_15 = value;
		Il2CppCodeGenWriteBarrier((&___lastLinkedChild_15), value);
	}

	inline static int32_t get_offset_of_schemas_16() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___schemas_16)); }
	inline XmlSchemaSet_t266093086 * get_schemas_16() const { return ___schemas_16; }
	inline XmlSchemaSet_t266093086 ** get_address_of_schemas_16() { return &___schemas_16; }
	inline void set_schemas_16(XmlSchemaSet_t266093086 * value)
	{
		___schemas_16 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_16), value);
	}

	inline static int32_t get_offset_of_schemaInfo_17() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___schemaInfo_17)); }
	inline RuntimeObject* get_schemaInfo_17() const { return ___schemaInfo_17; }
	inline RuntimeObject** get_address_of_schemaInfo_17() { return &___schemaInfo_17; }
	inline void set_schemaInfo_17(RuntimeObject* value)
	{
		___schemaInfo_17 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_17), value);
	}

	inline static int32_t get_offset_of_loadMode_18() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___loadMode_18)); }
	inline bool get_loadMode_18() const { return ___loadMode_18; }
	inline bool* get_address_of_loadMode_18() { return &___loadMode_18; }
	inline void set_loadMode_18(bool value)
	{
		___loadMode_18 = value;
	}

	inline static int32_t get_offset_of_NodeChanged_19() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeChanged_19)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeChanged_19() const { return ___NodeChanged_19; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeChanged_19() { return &___NodeChanged_19; }
	inline void set_NodeChanged_19(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeChanged_19 = value;
		Il2CppCodeGenWriteBarrier((&___NodeChanged_19), value);
	}

	inline static int32_t get_offset_of_NodeChanging_20() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeChanging_20)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeChanging_20() const { return ___NodeChanging_20; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeChanging_20() { return &___NodeChanging_20; }
	inline void set_NodeChanging_20(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeChanging_20 = value;
		Il2CppCodeGenWriteBarrier((&___NodeChanging_20), value);
	}

	inline static int32_t get_offset_of_NodeInserted_21() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeInserted_21)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeInserted_21() const { return ___NodeInserted_21; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeInserted_21() { return &___NodeInserted_21; }
	inline void set_NodeInserted_21(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeInserted_21 = value;
		Il2CppCodeGenWriteBarrier((&___NodeInserted_21), value);
	}

	inline static int32_t get_offset_of_NodeInserting_22() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeInserting_22)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeInserting_22() const { return ___NodeInserting_22; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeInserting_22() { return &___NodeInserting_22; }
	inline void set_NodeInserting_22(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeInserting_22 = value;
		Il2CppCodeGenWriteBarrier((&___NodeInserting_22), value);
	}

	inline static int32_t get_offset_of_NodeRemoved_23() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeRemoved_23)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeRemoved_23() const { return ___NodeRemoved_23; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeRemoved_23() { return &___NodeRemoved_23; }
	inline void set_NodeRemoved_23(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeRemoved_23 = value;
		Il2CppCodeGenWriteBarrier((&___NodeRemoved_23), value);
	}

	inline static int32_t get_offset_of_NodeRemoving_24() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeRemoving_24)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeRemoving_24() const { return ___NodeRemoving_24; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeRemoving_24() { return &___NodeRemoving_24; }
	inline void set_NodeRemoving_24(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeRemoving_24 = value;
		Il2CppCodeGenWriteBarrier((&___NodeRemoving_24), value);
	}
};

struct XmlDocument_t2837193595_StaticFields
{
public:
	// System.Type[] System.Xml.XmlDocument::optimal_create_types
	TypeU5BU5D_t3940880105* ___optimal_create_types_5;

public:
	inline static int32_t get_offset_of_optimal_create_types_5() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595_StaticFields, ___optimal_create_types_5)); }
	inline TypeU5BU5D_t3940880105* get_optimal_create_types_5() const { return ___optimal_create_types_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_optimal_create_types_5() { return &___optimal_create_types_5; }
	inline void set_optimal_create_types_5(TypeU5BU5D_t3940880105* value)
	{
		___optimal_create_types_5 = value;
		Il2CppCodeGenWriteBarrier((&___optimal_create_types_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDOCUMENT_T2837193595_H
#ifndef XMLTEXTREADER_T4233384356_H
#define XMLTEXTREADER_T4233384356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReader
struct  XmlTextReader_t4233384356  : public XmlReader_t3121518892
{
public:
	// System.Xml.XmlTextReader System.Xml.XmlTextReader::entity
	XmlTextReader_t4233384356 * ___entity_3;
	// Mono.Xml2.XmlTextReader System.Xml.XmlTextReader::source
	XmlTextReader_t3455035481 * ___source_4;
	// System.Boolean System.Xml.XmlTextReader::entityInsideAttribute
	bool ___entityInsideAttribute_5;
	// System.Boolean System.Xml.XmlTextReader::insideAttribute
	bool ___insideAttribute_6;
	// System.Collections.Generic.Stack`1<System.String> System.Xml.XmlTextReader::entityNameStack
	Stack_1_t2690840144 * ___entityNameStack_7;

public:
	inline static int32_t get_offset_of_entity_3() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___entity_3)); }
	inline XmlTextReader_t4233384356 * get_entity_3() const { return ___entity_3; }
	inline XmlTextReader_t4233384356 ** get_address_of_entity_3() { return &___entity_3; }
	inline void set_entity_3(XmlTextReader_t4233384356 * value)
	{
		___entity_3 = value;
		Il2CppCodeGenWriteBarrier((&___entity_3), value);
	}

	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___source_4)); }
	inline XmlTextReader_t3455035481 * get_source_4() const { return ___source_4; }
	inline XmlTextReader_t3455035481 ** get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(XmlTextReader_t3455035481 * value)
	{
		___source_4 = value;
		Il2CppCodeGenWriteBarrier((&___source_4), value);
	}

	inline static int32_t get_offset_of_entityInsideAttribute_5() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___entityInsideAttribute_5)); }
	inline bool get_entityInsideAttribute_5() const { return ___entityInsideAttribute_5; }
	inline bool* get_address_of_entityInsideAttribute_5() { return &___entityInsideAttribute_5; }
	inline void set_entityInsideAttribute_5(bool value)
	{
		___entityInsideAttribute_5 = value;
	}

	inline static int32_t get_offset_of_insideAttribute_6() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___insideAttribute_6)); }
	inline bool get_insideAttribute_6() const { return ___insideAttribute_6; }
	inline bool* get_address_of_insideAttribute_6() { return &___insideAttribute_6; }
	inline void set_insideAttribute_6(bool value)
	{
		___insideAttribute_6 = value;
	}

	inline static int32_t get_offset_of_entityNameStack_7() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___entityNameStack_7)); }
	inline Stack_1_t2690840144 * get_entityNameStack_7() const { return ___entityNameStack_7; }
	inline Stack_1_t2690840144 ** get_address_of_entityNameStack_7() { return &___entityNameStack_7; }
	inline void set_entityNameStack_7(Stack_1_t2690840144 * value)
	{
		___entityNameStack_7 = value;
		Il2CppCodeGenWriteBarrier((&___entityNameStack_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLTEXTREADER_T4233384356_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef DTDVALIDATINGREADER_T3946379043_H
#define DTDVALIDATINGREADER_T3946379043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDValidatingReader
struct  DTDValidatingReader_t3946379043  : public XmlReader_t3121518892
{
public:
	// Mono.Xml.EntityResolvingXmlReader Mono.Xml.DTDValidatingReader::reader
	EntityResolvingXmlReader_t1267732406 * ___reader_3;
	// System.Xml.XmlTextReader Mono.Xml.DTDValidatingReader::sourceTextReader
	XmlTextReader_t4233384356 * ___sourceTextReader_4;
	// System.Xml.XmlValidatingReader Mono.Xml.DTDValidatingReader::validatingReader
	XmlValidatingReader_t1719295192 * ___validatingReader_5;
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDValidatingReader::dtd
	DTDObjectModel_t1729680289 * ___dtd_6;
	// System.Xml.XmlResolver Mono.Xml.DTDValidatingReader::resolver
	XmlResolver_t626023767 * ___resolver_7;
	// System.String Mono.Xml.DTDValidatingReader::currentElement
	String_t* ___currentElement_8;
	// Mono.Xml.DTDValidatingReader/AttributeSlot[] Mono.Xml.DTDValidatingReader::attributes
	AttributeSlotU5BU5D_t600906362* ___attributes_9;
	// System.Int32 Mono.Xml.DTDValidatingReader::attributeCount
	int32_t ___attributeCount_10;
	// System.Int32 Mono.Xml.DTDValidatingReader::currentAttribute
	int32_t ___currentAttribute_11;
	// System.Boolean Mono.Xml.DTDValidatingReader::consumedAttribute
	bool ___consumedAttribute_12;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::elementStack
	Stack_t2329662280 * ___elementStack_13;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::automataStack
	Stack_t2329662280 * ___automataStack_14;
	// System.Boolean Mono.Xml.DTDValidatingReader::popScope
	bool ___popScope_15;
	// System.Boolean Mono.Xml.DTDValidatingReader::isStandalone
	bool ___isStandalone_16;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDValidatingReader::currentAutomata
	DTDAutomata_t781538777 * ___currentAutomata_17;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDValidatingReader::previousAutomata
	DTDAutomata_t781538777 * ___previousAutomata_18;
	// System.Collections.ArrayList Mono.Xml.DTDValidatingReader::idList
	ArrayList_t2718874744 * ___idList_19;
	// System.Collections.ArrayList Mono.Xml.DTDValidatingReader::missingIDReferences
	ArrayList_t2718874744 * ___missingIDReferences_20;
	// System.Xml.XmlNamespaceManager Mono.Xml.DTDValidatingReader::nsmgr
	XmlNamespaceManager_t418790500 * ___nsmgr_21;
	// System.String Mono.Xml.DTDValidatingReader::currentTextValue
	String_t* ___currentTextValue_22;
	// System.String Mono.Xml.DTDValidatingReader::constructingTextValue
	String_t* ___constructingTextValue_23;
	// System.Boolean Mono.Xml.DTDValidatingReader::shouldResetCurrentTextValue
	bool ___shouldResetCurrentTextValue_24;
	// System.Boolean Mono.Xml.DTDValidatingReader::isSignificantWhitespace
	bool ___isSignificantWhitespace_25;
	// System.Boolean Mono.Xml.DTDValidatingReader::isWhitespace
	bool ___isWhitespace_26;
	// System.Boolean Mono.Xml.DTDValidatingReader::isText
	bool ___isText_27;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::attributeValueEntityStack
	Stack_t2329662280 * ___attributeValueEntityStack_28;
	// System.Text.StringBuilder Mono.Xml.DTDValidatingReader::valueBuilder
	StringBuilder_t * ___valueBuilder_29;
	// System.Char[] Mono.Xml.DTDValidatingReader::whitespaceChars
	CharU5BU5D_t3528271667* ___whitespaceChars_30;

public:
	inline static int32_t get_offset_of_reader_3() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___reader_3)); }
	inline EntityResolvingXmlReader_t1267732406 * get_reader_3() const { return ___reader_3; }
	inline EntityResolvingXmlReader_t1267732406 ** get_address_of_reader_3() { return &___reader_3; }
	inline void set_reader_3(EntityResolvingXmlReader_t1267732406 * value)
	{
		___reader_3 = value;
		Il2CppCodeGenWriteBarrier((&___reader_3), value);
	}

	inline static int32_t get_offset_of_sourceTextReader_4() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___sourceTextReader_4)); }
	inline XmlTextReader_t4233384356 * get_sourceTextReader_4() const { return ___sourceTextReader_4; }
	inline XmlTextReader_t4233384356 ** get_address_of_sourceTextReader_4() { return &___sourceTextReader_4; }
	inline void set_sourceTextReader_4(XmlTextReader_t4233384356 * value)
	{
		___sourceTextReader_4 = value;
		Il2CppCodeGenWriteBarrier((&___sourceTextReader_4), value);
	}

	inline static int32_t get_offset_of_validatingReader_5() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___validatingReader_5)); }
	inline XmlValidatingReader_t1719295192 * get_validatingReader_5() const { return ___validatingReader_5; }
	inline XmlValidatingReader_t1719295192 ** get_address_of_validatingReader_5() { return &___validatingReader_5; }
	inline void set_validatingReader_5(XmlValidatingReader_t1719295192 * value)
	{
		___validatingReader_5 = value;
		Il2CppCodeGenWriteBarrier((&___validatingReader_5), value);
	}

	inline static int32_t get_offset_of_dtd_6() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___dtd_6)); }
	inline DTDObjectModel_t1729680289 * get_dtd_6() const { return ___dtd_6; }
	inline DTDObjectModel_t1729680289 ** get_address_of_dtd_6() { return &___dtd_6; }
	inline void set_dtd_6(DTDObjectModel_t1729680289 * value)
	{
		___dtd_6 = value;
		Il2CppCodeGenWriteBarrier((&___dtd_6), value);
	}

	inline static int32_t get_offset_of_resolver_7() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___resolver_7)); }
	inline XmlResolver_t626023767 * get_resolver_7() const { return ___resolver_7; }
	inline XmlResolver_t626023767 ** get_address_of_resolver_7() { return &___resolver_7; }
	inline void set_resolver_7(XmlResolver_t626023767 * value)
	{
		___resolver_7 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_7), value);
	}

	inline static int32_t get_offset_of_currentElement_8() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___currentElement_8)); }
	inline String_t* get_currentElement_8() const { return ___currentElement_8; }
	inline String_t** get_address_of_currentElement_8() { return &___currentElement_8; }
	inline void set_currentElement_8(String_t* value)
	{
		___currentElement_8 = value;
		Il2CppCodeGenWriteBarrier((&___currentElement_8), value);
	}

	inline static int32_t get_offset_of_attributes_9() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___attributes_9)); }
	inline AttributeSlotU5BU5D_t600906362* get_attributes_9() const { return ___attributes_9; }
	inline AttributeSlotU5BU5D_t600906362** get_address_of_attributes_9() { return &___attributes_9; }
	inline void set_attributes_9(AttributeSlotU5BU5D_t600906362* value)
	{
		___attributes_9 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_9), value);
	}

	inline static int32_t get_offset_of_attributeCount_10() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___attributeCount_10)); }
	inline int32_t get_attributeCount_10() const { return ___attributeCount_10; }
	inline int32_t* get_address_of_attributeCount_10() { return &___attributeCount_10; }
	inline void set_attributeCount_10(int32_t value)
	{
		___attributeCount_10 = value;
	}

	inline static int32_t get_offset_of_currentAttribute_11() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___currentAttribute_11)); }
	inline int32_t get_currentAttribute_11() const { return ___currentAttribute_11; }
	inline int32_t* get_address_of_currentAttribute_11() { return &___currentAttribute_11; }
	inline void set_currentAttribute_11(int32_t value)
	{
		___currentAttribute_11 = value;
	}

	inline static int32_t get_offset_of_consumedAttribute_12() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___consumedAttribute_12)); }
	inline bool get_consumedAttribute_12() const { return ___consumedAttribute_12; }
	inline bool* get_address_of_consumedAttribute_12() { return &___consumedAttribute_12; }
	inline void set_consumedAttribute_12(bool value)
	{
		___consumedAttribute_12 = value;
	}

	inline static int32_t get_offset_of_elementStack_13() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___elementStack_13)); }
	inline Stack_t2329662280 * get_elementStack_13() const { return ___elementStack_13; }
	inline Stack_t2329662280 ** get_address_of_elementStack_13() { return &___elementStack_13; }
	inline void set_elementStack_13(Stack_t2329662280 * value)
	{
		___elementStack_13 = value;
		Il2CppCodeGenWriteBarrier((&___elementStack_13), value);
	}

	inline static int32_t get_offset_of_automataStack_14() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___automataStack_14)); }
	inline Stack_t2329662280 * get_automataStack_14() const { return ___automataStack_14; }
	inline Stack_t2329662280 ** get_address_of_automataStack_14() { return &___automataStack_14; }
	inline void set_automataStack_14(Stack_t2329662280 * value)
	{
		___automataStack_14 = value;
		Il2CppCodeGenWriteBarrier((&___automataStack_14), value);
	}

	inline static int32_t get_offset_of_popScope_15() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___popScope_15)); }
	inline bool get_popScope_15() const { return ___popScope_15; }
	inline bool* get_address_of_popScope_15() { return &___popScope_15; }
	inline void set_popScope_15(bool value)
	{
		___popScope_15 = value;
	}

	inline static int32_t get_offset_of_isStandalone_16() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___isStandalone_16)); }
	inline bool get_isStandalone_16() const { return ___isStandalone_16; }
	inline bool* get_address_of_isStandalone_16() { return &___isStandalone_16; }
	inline void set_isStandalone_16(bool value)
	{
		___isStandalone_16 = value;
	}

	inline static int32_t get_offset_of_currentAutomata_17() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___currentAutomata_17)); }
	inline DTDAutomata_t781538777 * get_currentAutomata_17() const { return ___currentAutomata_17; }
	inline DTDAutomata_t781538777 ** get_address_of_currentAutomata_17() { return &___currentAutomata_17; }
	inline void set_currentAutomata_17(DTDAutomata_t781538777 * value)
	{
		___currentAutomata_17 = value;
		Il2CppCodeGenWriteBarrier((&___currentAutomata_17), value);
	}

	inline static int32_t get_offset_of_previousAutomata_18() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___previousAutomata_18)); }
	inline DTDAutomata_t781538777 * get_previousAutomata_18() const { return ___previousAutomata_18; }
	inline DTDAutomata_t781538777 ** get_address_of_previousAutomata_18() { return &___previousAutomata_18; }
	inline void set_previousAutomata_18(DTDAutomata_t781538777 * value)
	{
		___previousAutomata_18 = value;
		Il2CppCodeGenWriteBarrier((&___previousAutomata_18), value);
	}

	inline static int32_t get_offset_of_idList_19() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___idList_19)); }
	inline ArrayList_t2718874744 * get_idList_19() const { return ___idList_19; }
	inline ArrayList_t2718874744 ** get_address_of_idList_19() { return &___idList_19; }
	inline void set_idList_19(ArrayList_t2718874744 * value)
	{
		___idList_19 = value;
		Il2CppCodeGenWriteBarrier((&___idList_19), value);
	}

	inline static int32_t get_offset_of_missingIDReferences_20() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___missingIDReferences_20)); }
	inline ArrayList_t2718874744 * get_missingIDReferences_20() const { return ___missingIDReferences_20; }
	inline ArrayList_t2718874744 ** get_address_of_missingIDReferences_20() { return &___missingIDReferences_20; }
	inline void set_missingIDReferences_20(ArrayList_t2718874744 * value)
	{
		___missingIDReferences_20 = value;
		Il2CppCodeGenWriteBarrier((&___missingIDReferences_20), value);
	}

	inline static int32_t get_offset_of_nsmgr_21() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___nsmgr_21)); }
	inline XmlNamespaceManager_t418790500 * get_nsmgr_21() const { return ___nsmgr_21; }
	inline XmlNamespaceManager_t418790500 ** get_address_of_nsmgr_21() { return &___nsmgr_21; }
	inline void set_nsmgr_21(XmlNamespaceManager_t418790500 * value)
	{
		___nsmgr_21 = value;
		Il2CppCodeGenWriteBarrier((&___nsmgr_21), value);
	}

	inline static int32_t get_offset_of_currentTextValue_22() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___currentTextValue_22)); }
	inline String_t* get_currentTextValue_22() const { return ___currentTextValue_22; }
	inline String_t** get_address_of_currentTextValue_22() { return &___currentTextValue_22; }
	inline void set_currentTextValue_22(String_t* value)
	{
		___currentTextValue_22 = value;
		Il2CppCodeGenWriteBarrier((&___currentTextValue_22), value);
	}

	inline static int32_t get_offset_of_constructingTextValue_23() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___constructingTextValue_23)); }
	inline String_t* get_constructingTextValue_23() const { return ___constructingTextValue_23; }
	inline String_t** get_address_of_constructingTextValue_23() { return &___constructingTextValue_23; }
	inline void set_constructingTextValue_23(String_t* value)
	{
		___constructingTextValue_23 = value;
		Il2CppCodeGenWriteBarrier((&___constructingTextValue_23), value);
	}

	inline static int32_t get_offset_of_shouldResetCurrentTextValue_24() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___shouldResetCurrentTextValue_24)); }
	inline bool get_shouldResetCurrentTextValue_24() const { return ___shouldResetCurrentTextValue_24; }
	inline bool* get_address_of_shouldResetCurrentTextValue_24() { return &___shouldResetCurrentTextValue_24; }
	inline void set_shouldResetCurrentTextValue_24(bool value)
	{
		___shouldResetCurrentTextValue_24 = value;
	}

	inline static int32_t get_offset_of_isSignificantWhitespace_25() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___isSignificantWhitespace_25)); }
	inline bool get_isSignificantWhitespace_25() const { return ___isSignificantWhitespace_25; }
	inline bool* get_address_of_isSignificantWhitespace_25() { return &___isSignificantWhitespace_25; }
	inline void set_isSignificantWhitespace_25(bool value)
	{
		___isSignificantWhitespace_25 = value;
	}

	inline static int32_t get_offset_of_isWhitespace_26() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___isWhitespace_26)); }
	inline bool get_isWhitespace_26() const { return ___isWhitespace_26; }
	inline bool* get_address_of_isWhitespace_26() { return &___isWhitespace_26; }
	inline void set_isWhitespace_26(bool value)
	{
		___isWhitespace_26 = value;
	}

	inline static int32_t get_offset_of_isText_27() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___isText_27)); }
	inline bool get_isText_27() const { return ___isText_27; }
	inline bool* get_address_of_isText_27() { return &___isText_27; }
	inline void set_isText_27(bool value)
	{
		___isText_27 = value;
	}

	inline static int32_t get_offset_of_attributeValueEntityStack_28() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___attributeValueEntityStack_28)); }
	inline Stack_t2329662280 * get_attributeValueEntityStack_28() const { return ___attributeValueEntityStack_28; }
	inline Stack_t2329662280 ** get_address_of_attributeValueEntityStack_28() { return &___attributeValueEntityStack_28; }
	inline void set_attributeValueEntityStack_28(Stack_t2329662280 * value)
	{
		___attributeValueEntityStack_28 = value;
		Il2CppCodeGenWriteBarrier((&___attributeValueEntityStack_28), value);
	}

	inline static int32_t get_offset_of_valueBuilder_29() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___valueBuilder_29)); }
	inline StringBuilder_t * get_valueBuilder_29() const { return ___valueBuilder_29; }
	inline StringBuilder_t ** get_address_of_valueBuilder_29() { return &___valueBuilder_29; }
	inline void set_valueBuilder_29(StringBuilder_t * value)
	{
		___valueBuilder_29 = value;
		Il2CppCodeGenWriteBarrier((&___valueBuilder_29), value);
	}

	inline static int32_t get_offset_of_whitespaceChars_30() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043, ___whitespaceChars_30)); }
	inline CharU5BU5D_t3528271667* get_whitespaceChars_30() const { return ___whitespaceChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_whitespaceChars_30() { return &___whitespaceChars_30; }
	inline void set_whitespaceChars_30(CharU5BU5D_t3528271667* value)
	{
		___whitespaceChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___whitespaceChars_30), value);
	}
};

struct DTDValidatingReader_t3946379043_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.DTDValidatingReader::<>f__switch$map2A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map2A_31;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2A_31() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t3946379043_StaticFields, ___U3CU3Ef__switchU24map2A_31)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map2A_31() const { return ___U3CU3Ef__switchU24map2A_31; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map2A_31() { return &___U3CU3Ef__switchU24map2A_31; }
	inline void set_U3CU3Ef__switchU24map2A_31(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map2A_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2A_31), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DTDVALIDATINGREADER_T3946379043_H
#ifndef XMLURLRESOLVER_T817895037_H
#define XMLURLRESOLVER_T817895037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlUrlResolver
struct  XmlUrlResolver_t817895037  : public XmlResolver_t626023767
{
public:
	// System.Net.ICredentials System.Xml.XmlUrlResolver::credential
	RuntimeObject* ___credential_0;

public:
	inline static int32_t get_offset_of_credential_0() { return static_cast<int32_t>(offsetof(XmlUrlResolver_t817895037, ___credential_0)); }
	inline RuntimeObject* get_credential_0() const { return ___credential_0; }
	inline RuntimeObject** get_address_of_credential_0() { return &___credential_0; }
	inline void set_credential_0(RuntimeObject* value)
	{
		___credential_0 = value;
		Il2CppCodeGenWriteBarrier((&___credential_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLURLRESOLVER_T817895037_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
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
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef XMLLINKEDNODE_T1437094927_H
#define XMLLINKEDNODE_T1437094927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlLinkedNode
struct  XmlLinkedNode_t1437094927  : public XmlNode_t3767805227
{
public:
	// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::nextSibling
	XmlLinkedNode_t1437094927 * ___nextSibling_5;

public:
	inline static int32_t get_offset_of_nextSibling_5() { return static_cast<int32_t>(offsetof(XmlLinkedNode_t1437094927, ___nextSibling_5)); }
	inline XmlLinkedNode_t1437094927 * get_nextSibling_5() const { return ___nextSibling_5; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_nextSibling_5() { return &___nextSibling_5; }
	inline void set_nextSibling_5(XmlLinkedNode_t1437094927 * value)
	{
		___nextSibling_5 = value;
		Il2CppCodeGenWriteBarrier((&___nextSibling_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLLINKEDNODE_T1437094927_H
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
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public MarshalByRefObject_t2760389100
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_1)); }
	inline Stream_t1273022909 * get_Null_1() const { return ___Null_1; }
	inline Stream_t1273022909 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t1273022909 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef WEBRESPONSE_T229922639_H
#define WEBRESPONSE_T229922639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebResponse
struct  WebResponse_t229922639  : public MarshalByRefObject_t2760389100
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBRESPONSE_T229922639_H
#ifndef XMLSCHEMAEXCEPTION_T3511258692_H
#define XMLSCHEMAEXCEPTION_T3511258692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaException
struct  XmlSchemaException_t3511258692  : public SystemException_t176217640
{
public:
	// System.Boolean System.Xml.Schema.XmlSchemaException::hasLineInfo
	bool ___hasLineInfo_11;
	// System.Int32 System.Xml.Schema.XmlSchemaException::lineNumber
	int32_t ___lineNumber_12;
	// System.Int32 System.Xml.Schema.XmlSchemaException::linePosition
	int32_t ___linePosition_13;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaException::sourceObj
	XmlSchemaObject_t1315720168 * ___sourceObj_14;
	// System.String System.Xml.Schema.XmlSchemaException::sourceUri
	String_t* ___sourceUri_15;

public:
	inline static int32_t get_offset_of_hasLineInfo_11() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___hasLineInfo_11)); }
	inline bool get_hasLineInfo_11() const { return ___hasLineInfo_11; }
	inline bool* get_address_of_hasLineInfo_11() { return &___hasLineInfo_11; }
	inline void set_hasLineInfo_11(bool value)
	{
		___hasLineInfo_11 = value;
	}

	inline static int32_t get_offset_of_lineNumber_12() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___lineNumber_12)); }
	inline int32_t get_lineNumber_12() const { return ___lineNumber_12; }
	inline int32_t* get_address_of_lineNumber_12() { return &___lineNumber_12; }
	inline void set_lineNumber_12(int32_t value)
	{
		___lineNumber_12 = value;
	}

	inline static int32_t get_offset_of_linePosition_13() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___linePosition_13)); }
	inline int32_t get_linePosition_13() const { return ___linePosition_13; }
	inline int32_t* get_address_of_linePosition_13() { return &___linePosition_13; }
	inline void set_linePosition_13(int32_t value)
	{
		___linePosition_13 = value;
	}

	inline static int32_t get_offset_of_sourceObj_14() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___sourceObj_14)); }
	inline XmlSchemaObject_t1315720168 * get_sourceObj_14() const { return ___sourceObj_14; }
	inline XmlSchemaObject_t1315720168 ** get_address_of_sourceObj_14() { return &___sourceObj_14; }
	inline void set_sourceObj_14(XmlSchemaObject_t1315720168 * value)
	{
		___sourceObj_14 = value;
		Il2CppCodeGenWriteBarrier((&___sourceObj_14), value);
	}

	inline static int32_t get_offset_of_sourceUri_15() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___sourceUri_15)); }
	inline String_t* get_sourceUri_15() const { return ___sourceUri_15; }
	inline String_t** get_address_of_sourceUri_15() { return &___sourceUri_15; }
	inline void set_sourceUri_15(String_t* value)
	{
		___sourceUri_15 = value;
		Il2CppCodeGenWriteBarrier((&___sourceUri_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAEXCEPTION_T3511258692_H
#ifndef XMLCHARACTERDATA_T1167807131_H
#define XMLCHARACTERDATA_T1167807131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlCharacterData
struct  XmlCharacterData_t1167807131  : public XmlLinkedNode_t1437094927
{
public:
	// System.String System.Xml.XmlCharacterData::data
	String_t* ___data_6;

public:
	inline static int32_t get_offset_of_data_6() { return static_cast<int32_t>(offsetof(XmlCharacterData_t1167807131, ___data_6)); }
	inline String_t* get_data_6() const { return ___data_6; }
	inline String_t** get_address_of_data_6() { return &___data_6; }
	inline void set_data_6(String_t* value)
	{
		___data_6 = value;
		Il2CppCodeGenWriteBarrier((&___data_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLCHARACTERDATA_T1167807131_H
#ifndef XMLSCHEMASET_T266093086_H
#define XMLSCHEMASET_T266093086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaSet
struct  XmlSchemaSet_t266093086  : public RuntimeObject
{
public:
	// System.Xml.XmlNameTable System.Xml.Schema.XmlSchemaSet::nameTable
	XmlNameTable_t71772148 * ___nameTable_0;
	// System.Xml.XmlResolver System.Xml.Schema.XmlSchemaSet::xmlResolver
	XmlResolver_t626023767 * ___xmlResolver_1;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaSet::schemas
	ArrayList_t2718874744 * ___schemas_2;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::attributes
	XmlSchemaObjectTable_t2546974348 * ___attributes_3;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::elements
	XmlSchemaObjectTable_t2546974348 * ___elements_4;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::types
	XmlSchemaObjectTable_t2546974348 * ___types_5;
	// System.Collections.Hashtable System.Xml.Schema.XmlSchemaSet::idCollection
	Hashtable_t1853889766 * ___idCollection_6;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::namedIdentities
	XmlSchemaObjectTable_t2546974348 * ___namedIdentities_7;
	// System.Xml.Schema.XmlSchemaCompilationSettings System.Xml.Schema.XmlSchemaSet::settings
	XmlSchemaCompilationSettings_t2218765537 * ___settings_8;
	// System.Boolean System.Xml.Schema.XmlSchemaSet::isCompiled
	bool ___isCompiled_9;
	// System.Guid System.Xml.Schema.XmlSchemaSet::CompilationId
	Guid_t  ___CompilationId_10;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaSet::ValidationEventHandler
	ValidationEventHandler_t791314227 * ___ValidationEventHandler_11;

public:
	inline static int32_t get_offset_of_nameTable_0() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___nameTable_0)); }
	inline XmlNameTable_t71772148 * get_nameTable_0() const { return ___nameTable_0; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_0() { return &___nameTable_0; }
	inline void set_nameTable_0(XmlNameTable_t71772148 * value)
	{
		___nameTable_0 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_0), value);
	}

	inline static int32_t get_offset_of_xmlResolver_1() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___xmlResolver_1)); }
	inline XmlResolver_t626023767 * get_xmlResolver_1() const { return ___xmlResolver_1; }
	inline XmlResolver_t626023767 ** get_address_of_xmlResolver_1() { return &___xmlResolver_1; }
	inline void set_xmlResolver_1(XmlResolver_t626023767 * value)
	{
		___xmlResolver_1 = value;
		Il2CppCodeGenWriteBarrier((&___xmlResolver_1), value);
	}

	inline static int32_t get_offset_of_schemas_2() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___schemas_2)); }
	inline ArrayList_t2718874744 * get_schemas_2() const { return ___schemas_2; }
	inline ArrayList_t2718874744 ** get_address_of_schemas_2() { return &___schemas_2; }
	inline void set_schemas_2(ArrayList_t2718874744 * value)
	{
		___schemas_2 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_2), value);
	}

	inline static int32_t get_offset_of_attributes_3() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___attributes_3)); }
	inline XmlSchemaObjectTable_t2546974348 * get_attributes_3() const { return ___attributes_3; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_attributes_3() { return &___attributes_3; }
	inline void set_attributes_3(XmlSchemaObjectTable_t2546974348 * value)
	{
		___attributes_3 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_3), value);
	}

	inline static int32_t get_offset_of_elements_4() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___elements_4)); }
	inline XmlSchemaObjectTable_t2546974348 * get_elements_4() const { return ___elements_4; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_elements_4() { return &___elements_4; }
	inline void set_elements_4(XmlSchemaObjectTable_t2546974348 * value)
	{
		___elements_4 = value;
		Il2CppCodeGenWriteBarrier((&___elements_4), value);
	}

	inline static int32_t get_offset_of_types_5() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___types_5)); }
	inline XmlSchemaObjectTable_t2546974348 * get_types_5() const { return ___types_5; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_types_5() { return &___types_5; }
	inline void set_types_5(XmlSchemaObjectTable_t2546974348 * value)
	{
		___types_5 = value;
		Il2CppCodeGenWriteBarrier((&___types_5), value);
	}

	inline static int32_t get_offset_of_idCollection_6() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___idCollection_6)); }
	inline Hashtable_t1853889766 * get_idCollection_6() const { return ___idCollection_6; }
	inline Hashtable_t1853889766 ** get_address_of_idCollection_6() { return &___idCollection_6; }
	inline void set_idCollection_6(Hashtable_t1853889766 * value)
	{
		___idCollection_6 = value;
		Il2CppCodeGenWriteBarrier((&___idCollection_6), value);
	}

	inline static int32_t get_offset_of_namedIdentities_7() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___namedIdentities_7)); }
	inline XmlSchemaObjectTable_t2546974348 * get_namedIdentities_7() const { return ___namedIdentities_7; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_namedIdentities_7() { return &___namedIdentities_7; }
	inline void set_namedIdentities_7(XmlSchemaObjectTable_t2546974348 * value)
	{
		___namedIdentities_7 = value;
		Il2CppCodeGenWriteBarrier((&___namedIdentities_7), value);
	}

	inline static int32_t get_offset_of_settings_8() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___settings_8)); }
	inline XmlSchemaCompilationSettings_t2218765537 * get_settings_8() const { return ___settings_8; }
	inline XmlSchemaCompilationSettings_t2218765537 ** get_address_of_settings_8() { return &___settings_8; }
	inline void set_settings_8(XmlSchemaCompilationSettings_t2218765537 * value)
	{
		___settings_8 = value;
		Il2CppCodeGenWriteBarrier((&___settings_8), value);
	}

	inline static int32_t get_offset_of_isCompiled_9() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___isCompiled_9)); }
	inline bool get_isCompiled_9() const { return ___isCompiled_9; }
	inline bool* get_address_of_isCompiled_9() { return &___isCompiled_9; }
	inline void set_isCompiled_9(bool value)
	{
		___isCompiled_9 = value;
	}

	inline static int32_t get_offset_of_CompilationId_10() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___CompilationId_10)); }
	inline Guid_t  get_CompilationId_10() const { return ___CompilationId_10; }
	inline Guid_t * get_address_of_CompilationId_10() { return &___CompilationId_10; }
	inline void set_CompilationId_10(Guid_t  value)
	{
		___CompilationId_10 = value;
	}

	inline static int32_t get_offset_of_ValidationEventHandler_11() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t266093086, ___ValidationEventHandler_11)); }
	inline ValidationEventHandler_t791314227 * get_ValidationEventHandler_11() const { return ___ValidationEventHandler_11; }
	inline ValidationEventHandler_t791314227 ** get_address_of_ValidationEventHandler_11() { return &___ValidationEventHandler_11; }
	inline void set_ValidationEventHandler_11(ValidationEventHandler_t791314227 * value)
	{
		___ValidationEventHandler_11 = value;
		Il2CppCodeGenWriteBarrier((&___ValidationEventHandler_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMASET_T266093086_H
#ifndef XMLSEVERITYTYPE_T1894651412_H
#define XMLSEVERITYTYPE_T1894651412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSeverityType
struct  XmlSeverityType_t1894651412 
{
public:
	// System.Int32 System.Xml.Schema.XmlSeverityType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlSeverityType_t1894651412, ___value___1)); }
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
#endif // XMLSEVERITYTYPE_T1894651412_H
#ifndef XMLOUTPUTMETHOD_T2185361861_H
#define XMLOUTPUTMETHOD_T2185361861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlOutputMethod
struct  XmlOutputMethod_t2185361861 
{
public:
	// System.Int32 System.Xml.XmlOutputMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlOutputMethod_t2185361861, ___value___1)); }
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
#endif // XMLOUTPUTMETHOD_T2185361861_H
#ifndef AUTHENTICATIONLEVEL_T1236753641_H
#define AUTHENTICATIONLEVEL_T1236753641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticationLevel
struct  AuthenticationLevel_t1236753641 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AuthenticationLevel_t1236753641, ___value___1)); }
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
#endif // AUTHENTICATIONLEVEL_T1236753641_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef CONFORMANCELEVEL_T3899847875_H
#define CONFORMANCELEVEL_T3899847875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ConformanceLevel
struct  ConformanceLevel_t3899847875 
{
public:
	// System.Int32 System.Xml.ConformanceLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConformanceLevel_t3899847875, ___value___1)); }
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
#endif // CONFORMANCELEVEL_T3899847875_H
#ifndef XMLSCHEMAVALIDATIONFLAGS_T877176585_H
#define XMLSCHEMAVALIDATIONFLAGS_T877176585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaValidationFlags
struct  XmlSchemaValidationFlags_t877176585 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaValidationFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlSchemaValidationFlags_t877176585, ___value___1)); }
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
#endif // XMLSCHEMAVALIDATIONFLAGS_T877176585_H
#ifndef NEWLINEHANDLING_T850339274_H
#define NEWLINEHANDLING_T850339274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.NewLineHandling
struct  NewLineHandling_t850339274 
{
public:
	// System.Int32 System.Xml.NewLineHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NewLineHandling_t850339274, ___value___1)); }
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
#endif // NEWLINEHANDLING_T850339274_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef ENTITYHANDLING_T1047276436_H
#define ENTITYHANDLING_T1047276436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.EntityHandling
struct  EntityHandling_t1047276436 
{
public:
	// System.Int32 System.Xml.EntityHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EntityHandling_t1047276436, ___value___1)); }
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
#endif // ENTITYHANDLING_T1047276436_H
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
#ifndef VALIDATIONTYPE_T4049928607_H
#define VALIDATIONTYPE_T4049928607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ValidationType
struct  ValidationType_t4049928607 
{
public:
	// System.Int32 System.Xml.ValidationType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ValidationType_t4049928607, ___value___1)); }
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
#endif // VALIDATIONTYPE_T4049928607_H
#ifndef XMLNODETYPE_T1672767151_H
#define XMLNODETYPE_T1672767151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeType
struct  XmlNodeType_t1672767151 
{
public:
	// System.Int32 System.Xml.XmlNodeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlNodeType_t1672767151, ___value___1)); }
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
#endif // XMLNODETYPE_T1672767151_H
#ifndef XMLTOKENIZEDTYPE_T3348692225_H
#define XMLTOKENIZEDTYPE_T3348692225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTokenizedType
struct  XmlTokenizedType_t3348692225 
{
public:
	// System.Int32 System.Xml.XmlTokenizedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlTokenizedType_t3348692225, ___value___1)); }
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
#endif // XMLTOKENIZEDTYPE_T3348692225_H
#ifndef FILEMODE_T1183438340_H
#define FILEMODE_T1183438340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileMode
struct  FileMode_t1183438340 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileMode_t1183438340, ___value___1)); }
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
#endif // FILEMODE_T1183438340_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef FILEACCESS_T1659085276_H
#define FILEACCESS_T1659085276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t1659085276 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t1659085276, ___value___1)); }
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
#endif // FILEACCESS_T1659085276_H
#ifndef XMLEXCEPTION_T1761730631_H
#define XMLEXCEPTION_T1761730631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlException
struct  XmlException_t1761730631  : public SystemException_t176217640
{
public:
	// System.Int32 System.Xml.XmlException::lineNumber
	int32_t ___lineNumber_11;
	// System.Int32 System.Xml.XmlException::linePosition
	int32_t ___linePosition_12;
	// System.String System.Xml.XmlException::sourceUri
	String_t* ___sourceUri_13;
	// System.String System.Xml.XmlException::res
	String_t* ___res_14;
	// System.String[] System.Xml.XmlException::messages
	StringU5BU5D_t1281789340* ___messages_15;

public:
	inline static int32_t get_offset_of_lineNumber_11() { return static_cast<int32_t>(offsetof(XmlException_t1761730631, ___lineNumber_11)); }
	inline int32_t get_lineNumber_11() const { return ___lineNumber_11; }
	inline int32_t* get_address_of_lineNumber_11() { return &___lineNumber_11; }
	inline void set_lineNumber_11(int32_t value)
	{
		___lineNumber_11 = value;
	}

	inline static int32_t get_offset_of_linePosition_12() { return static_cast<int32_t>(offsetof(XmlException_t1761730631, ___linePosition_12)); }
	inline int32_t get_linePosition_12() const { return ___linePosition_12; }
	inline int32_t* get_address_of_linePosition_12() { return &___linePosition_12; }
	inline void set_linePosition_12(int32_t value)
	{
		___linePosition_12 = value;
	}

	inline static int32_t get_offset_of_sourceUri_13() { return static_cast<int32_t>(offsetof(XmlException_t1761730631, ___sourceUri_13)); }
	inline String_t* get_sourceUri_13() const { return ___sourceUri_13; }
	inline String_t** get_address_of_sourceUri_13() { return &___sourceUri_13; }
	inline void set_sourceUri_13(String_t* value)
	{
		___sourceUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___sourceUri_13), value);
	}

	inline static int32_t get_offset_of_res_14() { return static_cast<int32_t>(offsetof(XmlException_t1761730631, ___res_14)); }
	inline String_t* get_res_14() const { return ___res_14; }
	inline String_t** get_address_of_res_14() { return &___res_14; }
	inline void set_res_14(String_t* value)
	{
		___res_14 = value;
		Il2CppCodeGenWriteBarrier((&___res_14), value);
	}

	inline static int32_t get_offset_of_messages_15() { return static_cast<int32_t>(offsetof(XmlException_t1761730631, ___messages_15)); }
	inline StringU5BU5D_t1281789340* get_messages_15() const { return ___messages_15; }
	inline StringU5BU5D_t1281789340** get_address_of_messages_15() { return &___messages_15; }
	inline void set_messages_15(StringU5BU5D_t1281789340* value)
	{
		___messages_15 = value;
		Il2CppCodeGenWriteBarrier((&___messages_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLEXCEPTION_T1761730631_H
#ifndef FILESHARE_T3553318550_H
#define FILESHARE_T3553318550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileShare
struct  FileShare_t3553318550 
{
public:
	// System.Int32 System.IO.FileShare::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileShare_t3553318550, ___value___1)); }
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
#endif // FILESHARE_T3553318550_H
#ifndef XMLDECLSTATE_T1683299469_H
#define XMLDECLSTATE_T1683299469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/XmlDeclState
struct  XmlDeclState_t1683299469 
{
public:
	// System.Int32 System.Xml.XmlTextWriter/XmlDeclState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlDeclState_t1683299469, ___value___1)); }
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
#endif // XMLDECLSTATE_T1683299469_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#define INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_t1578797820  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef XMLSPACE_T3324193251_H
#define XMLSPACE_T3324193251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlSpace
struct  XmlSpace_t3324193251 
{
public:
	// System.Int32 System.Xml.XmlSpace::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlSpace_t3324193251, ___value___1)); }
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
#endif // XMLSPACE_T3324193251_H
#ifndef READSTATE_T944984020_H
#define READSTATE_T944984020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ReadState
struct  ReadState_t944984020 
{
public:
	// System.Int32 System.Xml.ReadState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReadState_t944984020, ___value___1)); }
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
#endif // READSTATE_T944984020_H
#ifndef WEBREQUEST_T1939381076_H
#define WEBREQUEST_T1939381076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebRequest
struct  WebRequest_t1939381076  : public MarshalByRefObject_t2760389100
{
public:
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::authentication_level
	int32_t ___authentication_level_4;

public:
	inline static int32_t get_offset_of_authentication_level_4() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076, ___authentication_level_4)); }
	inline int32_t get_authentication_level_4() const { return ___authentication_level_4; }
	inline int32_t* get_address_of_authentication_level_4() { return &___authentication_level_4; }
	inline void set_authentication_level_4(int32_t value)
	{
		___authentication_level_4 = value;
	}
};

struct WebRequest_t1939381076_StaticFields
{
public:
	// System.Collections.Specialized.HybridDictionary System.Net.WebRequest::prefixes
	HybridDictionary_t4070033136 * ___prefixes_1;
	// System.Boolean System.Net.WebRequest::isDefaultWebProxySet
	bool ___isDefaultWebProxySet_2;
	// System.Net.IWebProxy System.Net.WebRequest::defaultWebProxy
	RuntimeObject* ___defaultWebProxy_3;
	// System.Object System.Net.WebRequest::lockobj
	RuntimeObject * ___lockobj_5;

public:
	inline static int32_t get_offset_of_prefixes_1() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___prefixes_1)); }
	inline HybridDictionary_t4070033136 * get_prefixes_1() const { return ___prefixes_1; }
	inline HybridDictionary_t4070033136 ** get_address_of_prefixes_1() { return &___prefixes_1; }
	inline void set_prefixes_1(HybridDictionary_t4070033136 * value)
	{
		___prefixes_1 = value;
		Il2CppCodeGenWriteBarrier((&___prefixes_1), value);
	}

	inline static int32_t get_offset_of_isDefaultWebProxySet_2() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___isDefaultWebProxySet_2)); }
	inline bool get_isDefaultWebProxySet_2() const { return ___isDefaultWebProxySet_2; }
	inline bool* get_address_of_isDefaultWebProxySet_2() { return &___isDefaultWebProxySet_2; }
	inline void set_isDefaultWebProxySet_2(bool value)
	{
		___isDefaultWebProxySet_2 = value;
	}

	inline static int32_t get_offset_of_defaultWebProxy_3() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___defaultWebProxy_3)); }
	inline RuntimeObject* get_defaultWebProxy_3() const { return ___defaultWebProxy_3; }
	inline RuntimeObject** get_address_of_defaultWebProxy_3() { return &___defaultWebProxy_3; }
	inline void set_defaultWebProxy_3(RuntimeObject* value)
	{
		___defaultWebProxy_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultWebProxy_3), value);
	}

	inline static int32_t get_offset_of_lockobj_5() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___lockobj_5)); }
	inline RuntimeObject * get_lockobj_5() const { return ___lockobj_5; }
	inline RuntimeObject ** get_address_of_lockobj_5() { return &___lockobj_5; }
	inline void set_lockobj_5(RuntimeObject * value)
	{
		___lockobj_5 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUEST_T1939381076_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef XSDVALIDATINGREADER_T3961132625_H
#define XSDVALIDATINGREADER_T3961132625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Schema.XsdValidatingReader
struct  XsdValidatingReader_t3961132625  : public XmlReader_t3121518892
{
public:
	// System.Xml.XmlReader Mono.Xml.Schema.XsdValidatingReader::reader
	XmlReader_t3121518892 * ___reader_4;
	// System.Xml.XmlResolver Mono.Xml.Schema.XsdValidatingReader::resolver
	XmlResolver_t626023767 * ___resolver_5;
	// Mono.Xml.IHasXmlSchemaInfo Mono.Xml.Schema.XsdValidatingReader::sourceReaderSchemaInfo
	RuntimeObject* ___sourceReaderSchemaInfo_6;
	// System.Xml.IXmlLineInfo Mono.Xml.Schema.XsdValidatingReader::readerLineInfo
	RuntimeObject* ___readerLineInfo_7;
	// System.Xml.ValidationType Mono.Xml.Schema.XsdValidatingReader::validationType
	int32_t ___validationType_8;
	// System.Xml.Schema.XmlSchemaSet Mono.Xml.Schema.XsdValidatingReader::schemas
	XmlSchemaSet_t266093086 * ___schemas_9;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::namespaces
	bool ___namespaces_10;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::validationStarted
	bool ___validationStarted_11;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::checkIdentity
	bool ___checkIdentity_12;
	// Mono.Xml.Schema.XsdIDManager Mono.Xml.Schema.XsdValidatingReader::idManager
	XsdIDManager_t1008806102 * ___idManager_13;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::checkKeyConstraints
	bool ___checkKeyConstraints_14;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::keyTables
	ArrayList_t2718874744 * ___keyTables_15;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::currentKeyFieldConsumers
	ArrayList_t2718874744 * ___currentKeyFieldConsumers_16;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::tmpKeyrefPool
	ArrayList_t2718874744 * ___tmpKeyrefPool_17;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::elementQNameStack
	ArrayList_t2718874744 * ___elementQNameStack_18;
	// Mono.Xml.Schema.XsdParticleStateManager Mono.Xml.Schema.XsdValidatingReader::state
	XsdParticleStateManager_t726654767 * ___state_19;
	// System.Int32 Mono.Xml.Schema.XsdValidatingReader::skipValidationDepth
	int32_t ___skipValidationDepth_20;
	// System.Int32 Mono.Xml.Schema.XsdValidatingReader::xsiNilDepth
	int32_t ___xsiNilDepth_21;
	// System.Text.StringBuilder Mono.Xml.Schema.XsdValidatingReader::storedCharacters
	StringBuilder_t * ___storedCharacters_22;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::shouldValidateCharacters
	bool ___shouldValidateCharacters_23;
	// System.Xml.Schema.XmlSchemaAttribute[] Mono.Xml.Schema.XsdValidatingReader::defaultAttributes
	XmlSchemaAttributeU5BU5D_t346244693* ___defaultAttributes_24;
	// System.Int32 Mono.Xml.Schema.XsdValidatingReader::currentDefaultAttribute
	int32_t ___currentDefaultAttribute_25;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::defaultAttributesCache
	ArrayList_t2718874744 * ___defaultAttributesCache_26;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::defaultAttributeConsumed
	bool ___defaultAttributeConsumed_27;
	// System.Object Mono.Xml.Schema.XsdValidatingReader::currentAttrType
	RuntimeObject * ___currentAttrType_28;
	// System.Xml.Schema.ValidationEventHandler Mono.Xml.Schema.XsdValidatingReader::ValidationEventHandler
	ValidationEventHandler_t791314227 * ___ValidationEventHandler_29;

public:
	inline static int32_t get_offset_of_reader_4() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___reader_4)); }
	inline XmlReader_t3121518892 * get_reader_4() const { return ___reader_4; }
	inline XmlReader_t3121518892 ** get_address_of_reader_4() { return &___reader_4; }
	inline void set_reader_4(XmlReader_t3121518892 * value)
	{
		___reader_4 = value;
		Il2CppCodeGenWriteBarrier((&___reader_4), value);
	}

	inline static int32_t get_offset_of_resolver_5() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___resolver_5)); }
	inline XmlResolver_t626023767 * get_resolver_5() const { return ___resolver_5; }
	inline XmlResolver_t626023767 ** get_address_of_resolver_5() { return &___resolver_5; }
	inline void set_resolver_5(XmlResolver_t626023767 * value)
	{
		___resolver_5 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_5), value);
	}

	inline static int32_t get_offset_of_sourceReaderSchemaInfo_6() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___sourceReaderSchemaInfo_6)); }
	inline RuntimeObject* get_sourceReaderSchemaInfo_6() const { return ___sourceReaderSchemaInfo_6; }
	inline RuntimeObject** get_address_of_sourceReaderSchemaInfo_6() { return &___sourceReaderSchemaInfo_6; }
	inline void set_sourceReaderSchemaInfo_6(RuntimeObject* value)
	{
		___sourceReaderSchemaInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___sourceReaderSchemaInfo_6), value);
	}

	inline static int32_t get_offset_of_readerLineInfo_7() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___readerLineInfo_7)); }
	inline RuntimeObject* get_readerLineInfo_7() const { return ___readerLineInfo_7; }
	inline RuntimeObject** get_address_of_readerLineInfo_7() { return &___readerLineInfo_7; }
	inline void set_readerLineInfo_7(RuntimeObject* value)
	{
		___readerLineInfo_7 = value;
		Il2CppCodeGenWriteBarrier((&___readerLineInfo_7), value);
	}

	inline static int32_t get_offset_of_validationType_8() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___validationType_8)); }
	inline int32_t get_validationType_8() const { return ___validationType_8; }
	inline int32_t* get_address_of_validationType_8() { return &___validationType_8; }
	inline void set_validationType_8(int32_t value)
	{
		___validationType_8 = value;
	}

	inline static int32_t get_offset_of_schemas_9() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___schemas_9)); }
	inline XmlSchemaSet_t266093086 * get_schemas_9() const { return ___schemas_9; }
	inline XmlSchemaSet_t266093086 ** get_address_of_schemas_9() { return &___schemas_9; }
	inline void set_schemas_9(XmlSchemaSet_t266093086 * value)
	{
		___schemas_9 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_9), value);
	}

	inline static int32_t get_offset_of_namespaces_10() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___namespaces_10)); }
	inline bool get_namespaces_10() const { return ___namespaces_10; }
	inline bool* get_address_of_namespaces_10() { return &___namespaces_10; }
	inline void set_namespaces_10(bool value)
	{
		___namespaces_10 = value;
	}

	inline static int32_t get_offset_of_validationStarted_11() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___validationStarted_11)); }
	inline bool get_validationStarted_11() const { return ___validationStarted_11; }
	inline bool* get_address_of_validationStarted_11() { return &___validationStarted_11; }
	inline void set_validationStarted_11(bool value)
	{
		___validationStarted_11 = value;
	}

	inline static int32_t get_offset_of_checkIdentity_12() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___checkIdentity_12)); }
	inline bool get_checkIdentity_12() const { return ___checkIdentity_12; }
	inline bool* get_address_of_checkIdentity_12() { return &___checkIdentity_12; }
	inline void set_checkIdentity_12(bool value)
	{
		___checkIdentity_12 = value;
	}

	inline static int32_t get_offset_of_idManager_13() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___idManager_13)); }
	inline XsdIDManager_t1008806102 * get_idManager_13() const { return ___idManager_13; }
	inline XsdIDManager_t1008806102 ** get_address_of_idManager_13() { return &___idManager_13; }
	inline void set_idManager_13(XsdIDManager_t1008806102 * value)
	{
		___idManager_13 = value;
		Il2CppCodeGenWriteBarrier((&___idManager_13), value);
	}

	inline static int32_t get_offset_of_checkKeyConstraints_14() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___checkKeyConstraints_14)); }
	inline bool get_checkKeyConstraints_14() const { return ___checkKeyConstraints_14; }
	inline bool* get_address_of_checkKeyConstraints_14() { return &___checkKeyConstraints_14; }
	inline void set_checkKeyConstraints_14(bool value)
	{
		___checkKeyConstraints_14 = value;
	}

	inline static int32_t get_offset_of_keyTables_15() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___keyTables_15)); }
	inline ArrayList_t2718874744 * get_keyTables_15() const { return ___keyTables_15; }
	inline ArrayList_t2718874744 ** get_address_of_keyTables_15() { return &___keyTables_15; }
	inline void set_keyTables_15(ArrayList_t2718874744 * value)
	{
		___keyTables_15 = value;
		Il2CppCodeGenWriteBarrier((&___keyTables_15), value);
	}

	inline static int32_t get_offset_of_currentKeyFieldConsumers_16() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___currentKeyFieldConsumers_16)); }
	inline ArrayList_t2718874744 * get_currentKeyFieldConsumers_16() const { return ___currentKeyFieldConsumers_16; }
	inline ArrayList_t2718874744 ** get_address_of_currentKeyFieldConsumers_16() { return &___currentKeyFieldConsumers_16; }
	inline void set_currentKeyFieldConsumers_16(ArrayList_t2718874744 * value)
	{
		___currentKeyFieldConsumers_16 = value;
		Il2CppCodeGenWriteBarrier((&___currentKeyFieldConsumers_16), value);
	}

	inline static int32_t get_offset_of_tmpKeyrefPool_17() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___tmpKeyrefPool_17)); }
	inline ArrayList_t2718874744 * get_tmpKeyrefPool_17() const { return ___tmpKeyrefPool_17; }
	inline ArrayList_t2718874744 ** get_address_of_tmpKeyrefPool_17() { return &___tmpKeyrefPool_17; }
	inline void set_tmpKeyrefPool_17(ArrayList_t2718874744 * value)
	{
		___tmpKeyrefPool_17 = value;
		Il2CppCodeGenWriteBarrier((&___tmpKeyrefPool_17), value);
	}

	inline static int32_t get_offset_of_elementQNameStack_18() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___elementQNameStack_18)); }
	inline ArrayList_t2718874744 * get_elementQNameStack_18() const { return ___elementQNameStack_18; }
	inline ArrayList_t2718874744 ** get_address_of_elementQNameStack_18() { return &___elementQNameStack_18; }
	inline void set_elementQNameStack_18(ArrayList_t2718874744 * value)
	{
		___elementQNameStack_18 = value;
		Il2CppCodeGenWriteBarrier((&___elementQNameStack_18), value);
	}

	inline static int32_t get_offset_of_state_19() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___state_19)); }
	inline XsdParticleStateManager_t726654767 * get_state_19() const { return ___state_19; }
	inline XsdParticleStateManager_t726654767 ** get_address_of_state_19() { return &___state_19; }
	inline void set_state_19(XsdParticleStateManager_t726654767 * value)
	{
		___state_19 = value;
		Il2CppCodeGenWriteBarrier((&___state_19), value);
	}

	inline static int32_t get_offset_of_skipValidationDepth_20() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___skipValidationDepth_20)); }
	inline int32_t get_skipValidationDepth_20() const { return ___skipValidationDepth_20; }
	inline int32_t* get_address_of_skipValidationDepth_20() { return &___skipValidationDepth_20; }
	inline void set_skipValidationDepth_20(int32_t value)
	{
		___skipValidationDepth_20 = value;
	}

	inline static int32_t get_offset_of_xsiNilDepth_21() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___xsiNilDepth_21)); }
	inline int32_t get_xsiNilDepth_21() const { return ___xsiNilDepth_21; }
	inline int32_t* get_address_of_xsiNilDepth_21() { return &___xsiNilDepth_21; }
	inline void set_xsiNilDepth_21(int32_t value)
	{
		___xsiNilDepth_21 = value;
	}

	inline static int32_t get_offset_of_storedCharacters_22() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___storedCharacters_22)); }
	inline StringBuilder_t * get_storedCharacters_22() const { return ___storedCharacters_22; }
	inline StringBuilder_t ** get_address_of_storedCharacters_22() { return &___storedCharacters_22; }
	inline void set_storedCharacters_22(StringBuilder_t * value)
	{
		___storedCharacters_22 = value;
		Il2CppCodeGenWriteBarrier((&___storedCharacters_22), value);
	}

	inline static int32_t get_offset_of_shouldValidateCharacters_23() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___shouldValidateCharacters_23)); }
	inline bool get_shouldValidateCharacters_23() const { return ___shouldValidateCharacters_23; }
	inline bool* get_address_of_shouldValidateCharacters_23() { return &___shouldValidateCharacters_23; }
	inline void set_shouldValidateCharacters_23(bool value)
	{
		___shouldValidateCharacters_23 = value;
	}

	inline static int32_t get_offset_of_defaultAttributes_24() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___defaultAttributes_24)); }
	inline XmlSchemaAttributeU5BU5D_t346244693* get_defaultAttributes_24() const { return ___defaultAttributes_24; }
	inline XmlSchemaAttributeU5BU5D_t346244693** get_address_of_defaultAttributes_24() { return &___defaultAttributes_24; }
	inline void set_defaultAttributes_24(XmlSchemaAttributeU5BU5D_t346244693* value)
	{
		___defaultAttributes_24 = value;
		Il2CppCodeGenWriteBarrier((&___defaultAttributes_24), value);
	}

	inline static int32_t get_offset_of_currentDefaultAttribute_25() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___currentDefaultAttribute_25)); }
	inline int32_t get_currentDefaultAttribute_25() const { return ___currentDefaultAttribute_25; }
	inline int32_t* get_address_of_currentDefaultAttribute_25() { return &___currentDefaultAttribute_25; }
	inline void set_currentDefaultAttribute_25(int32_t value)
	{
		___currentDefaultAttribute_25 = value;
	}

	inline static int32_t get_offset_of_defaultAttributesCache_26() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___defaultAttributesCache_26)); }
	inline ArrayList_t2718874744 * get_defaultAttributesCache_26() const { return ___defaultAttributesCache_26; }
	inline ArrayList_t2718874744 ** get_address_of_defaultAttributesCache_26() { return &___defaultAttributesCache_26; }
	inline void set_defaultAttributesCache_26(ArrayList_t2718874744 * value)
	{
		___defaultAttributesCache_26 = value;
		Il2CppCodeGenWriteBarrier((&___defaultAttributesCache_26), value);
	}

	inline static int32_t get_offset_of_defaultAttributeConsumed_27() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___defaultAttributeConsumed_27)); }
	inline bool get_defaultAttributeConsumed_27() const { return ___defaultAttributeConsumed_27; }
	inline bool* get_address_of_defaultAttributeConsumed_27() { return &___defaultAttributeConsumed_27; }
	inline void set_defaultAttributeConsumed_27(bool value)
	{
		___defaultAttributeConsumed_27 = value;
	}

	inline static int32_t get_offset_of_currentAttrType_28() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___currentAttrType_28)); }
	inline RuntimeObject * get_currentAttrType_28() const { return ___currentAttrType_28; }
	inline RuntimeObject ** get_address_of_currentAttrType_28() { return &___currentAttrType_28; }
	inline void set_currentAttrType_28(RuntimeObject * value)
	{
		___currentAttrType_28 = value;
		Il2CppCodeGenWriteBarrier((&___currentAttrType_28), value);
	}

	inline static int32_t get_offset_of_ValidationEventHandler_29() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625, ___ValidationEventHandler_29)); }
	inline ValidationEventHandler_t791314227 * get_ValidationEventHandler_29() const { return ___ValidationEventHandler_29; }
	inline ValidationEventHandler_t791314227 ** get_address_of_ValidationEventHandler_29() { return &___ValidationEventHandler_29; }
	inline void set_ValidationEventHandler_29(ValidationEventHandler_t791314227 * value)
	{
		___ValidationEventHandler_29 = value;
		Il2CppCodeGenWriteBarrier((&___ValidationEventHandler_29), value);
	}
};

struct XsdValidatingReader_t3961132625_StaticFields
{
public:
	// System.Xml.Schema.XmlSchemaAttribute[] Mono.Xml.Schema.XsdValidatingReader::emptyAttributeArray
	XmlSchemaAttributeU5BU5D_t346244693* ___emptyAttributeArray_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdValidatingReader::<>f__switch$map3
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map3_30;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdValidatingReader::<>f__switch$map4
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map4_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdValidatingReader::<>f__switch$map5
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map5_32;

public:
	inline static int32_t get_offset_of_emptyAttributeArray_3() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625_StaticFields, ___emptyAttributeArray_3)); }
	inline XmlSchemaAttributeU5BU5D_t346244693* get_emptyAttributeArray_3() const { return ___emptyAttributeArray_3; }
	inline XmlSchemaAttributeU5BU5D_t346244693** get_address_of_emptyAttributeArray_3() { return &___emptyAttributeArray_3; }
	inline void set_emptyAttributeArray_3(XmlSchemaAttributeU5BU5D_t346244693* value)
	{
		___emptyAttributeArray_3 = value;
		Il2CppCodeGenWriteBarrier((&___emptyAttributeArray_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3_30() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625_StaticFields, ___U3CU3Ef__switchU24map3_30)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map3_30() const { return ___U3CU3Ef__switchU24map3_30; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map3_30() { return &___U3CU3Ef__switchU24map3_30; }
	inline void set_U3CU3Ef__switchU24map3_30(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map3_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map3_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map4_31() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625_StaticFields, ___U3CU3Ef__switchU24map4_31)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map4_31() const { return ___U3CU3Ef__switchU24map4_31; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map4_31() { return &___U3CU3Ef__switchU24map4_31; }
	inline void set_U3CU3Ef__switchU24map4_31(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map4_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map4_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_32() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t3961132625_StaticFields, ___U3CU3Ef__switchU24map5_32)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map5_32() const { return ___U3CU3Ef__switchU24map5_32; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map5_32() { return &___U3CU3Ef__switchU24map5_32; }
	inline void set_U3CU3Ef__switchU24map5_32(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map5_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map5_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XSDVALIDATINGREADER_T3961132625_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef VALIDATIONEVENTARGS_T2784773869_H
#define VALIDATIONEVENTARGS_T2784773869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.ValidationEventArgs
struct  ValidationEventArgs_t2784773869  : public EventArgs_t3591816995
{
public:
	// System.Xml.Schema.XmlSchemaException System.Xml.Schema.ValidationEventArgs::exception
	XmlSchemaException_t3511258692 * ___exception_1;
	// System.String System.Xml.Schema.ValidationEventArgs::message
	String_t* ___message_2;
	// System.Xml.Schema.XmlSeverityType System.Xml.Schema.ValidationEventArgs::severity
	int32_t ___severity_3;

public:
	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(ValidationEventArgs_t2784773869, ___exception_1)); }
	inline XmlSchemaException_t3511258692 * get_exception_1() const { return ___exception_1; }
	inline XmlSchemaException_t3511258692 ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(XmlSchemaException_t3511258692 * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(ValidationEventArgs_t2784773869, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_severity_3() { return static_cast<int32_t>(offsetof(ValidationEventArgs_t2784773869, ___severity_3)); }
	inline int32_t get_severity_3() const { return ___severity_3; }
	inline int32_t* get_address_of_severity_3() { return &___severity_3; }
	inline void set_severity_3(int32_t value)
	{
		___severity_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATIONEVENTARGS_T2784773869_H
#ifndef XMLPARSERCONTEXT_T2544895291_H
#define XMLPARSERCONTEXT_T2544895291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlParserContext
struct  XmlParserContext_t2544895291  : public RuntimeObject
{
public:
	// System.String System.Xml.XmlParserContext::baseURI
	String_t* ___baseURI_0;
	// System.String System.Xml.XmlParserContext::docTypeName
	String_t* ___docTypeName_1;
	// System.Text.Encoding System.Xml.XmlParserContext::encoding
	Encoding_t1523322056 * ___encoding_2;
	// System.String System.Xml.XmlParserContext::internalSubset
	String_t* ___internalSubset_3;
	// System.Xml.XmlNamespaceManager System.Xml.XmlParserContext::namespaceManager
	XmlNamespaceManager_t418790500 * ___namespaceManager_4;
	// System.Xml.XmlNameTable System.Xml.XmlParserContext::nameTable
	XmlNameTable_t71772148 * ___nameTable_5;
	// System.String System.Xml.XmlParserContext::publicID
	String_t* ___publicID_6;
	// System.String System.Xml.XmlParserContext::systemID
	String_t* ___systemID_7;
	// System.String System.Xml.XmlParserContext::xmlLang
	String_t* ___xmlLang_8;
	// System.Xml.XmlSpace System.Xml.XmlParserContext::xmlSpace
	int32_t ___xmlSpace_9;
	// System.Collections.ArrayList System.Xml.XmlParserContext::contextItems
	ArrayList_t2718874744 * ___contextItems_10;
	// System.Int32 System.Xml.XmlParserContext::contextItemCount
	int32_t ___contextItemCount_11;
	// Mono.Xml.DTDObjectModel System.Xml.XmlParserContext::dtd
	DTDObjectModel_t1729680289 * ___dtd_12;

public:
	inline static int32_t get_offset_of_baseURI_0() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___baseURI_0)); }
	inline String_t* get_baseURI_0() const { return ___baseURI_0; }
	inline String_t** get_address_of_baseURI_0() { return &___baseURI_0; }
	inline void set_baseURI_0(String_t* value)
	{
		___baseURI_0 = value;
		Il2CppCodeGenWriteBarrier((&___baseURI_0), value);
	}

	inline static int32_t get_offset_of_docTypeName_1() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___docTypeName_1)); }
	inline String_t* get_docTypeName_1() const { return ___docTypeName_1; }
	inline String_t** get_address_of_docTypeName_1() { return &___docTypeName_1; }
	inline void set_docTypeName_1(String_t* value)
	{
		___docTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___docTypeName_1), value);
	}

	inline static int32_t get_offset_of_encoding_2() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___encoding_2)); }
	inline Encoding_t1523322056 * get_encoding_2() const { return ___encoding_2; }
	inline Encoding_t1523322056 ** get_address_of_encoding_2() { return &___encoding_2; }
	inline void set_encoding_2(Encoding_t1523322056 * value)
	{
		___encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_2), value);
	}

	inline static int32_t get_offset_of_internalSubset_3() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___internalSubset_3)); }
	inline String_t* get_internalSubset_3() const { return ___internalSubset_3; }
	inline String_t** get_address_of_internalSubset_3() { return &___internalSubset_3; }
	inline void set_internalSubset_3(String_t* value)
	{
		___internalSubset_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalSubset_3), value);
	}

	inline static int32_t get_offset_of_namespaceManager_4() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___namespaceManager_4)); }
	inline XmlNamespaceManager_t418790500 * get_namespaceManager_4() const { return ___namespaceManager_4; }
	inline XmlNamespaceManager_t418790500 ** get_address_of_namespaceManager_4() { return &___namespaceManager_4; }
	inline void set_namespaceManager_4(XmlNamespaceManager_t418790500 * value)
	{
		___namespaceManager_4 = value;
		Il2CppCodeGenWriteBarrier((&___namespaceManager_4), value);
	}

	inline static int32_t get_offset_of_nameTable_5() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___nameTable_5)); }
	inline XmlNameTable_t71772148 * get_nameTable_5() const { return ___nameTable_5; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_5() { return &___nameTable_5; }
	inline void set_nameTable_5(XmlNameTable_t71772148 * value)
	{
		___nameTable_5 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_5), value);
	}

	inline static int32_t get_offset_of_publicID_6() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___publicID_6)); }
	inline String_t* get_publicID_6() const { return ___publicID_6; }
	inline String_t** get_address_of_publicID_6() { return &___publicID_6; }
	inline void set_publicID_6(String_t* value)
	{
		___publicID_6 = value;
		Il2CppCodeGenWriteBarrier((&___publicID_6), value);
	}

	inline static int32_t get_offset_of_systemID_7() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___systemID_7)); }
	inline String_t* get_systemID_7() const { return ___systemID_7; }
	inline String_t** get_address_of_systemID_7() { return &___systemID_7; }
	inline void set_systemID_7(String_t* value)
	{
		___systemID_7 = value;
		Il2CppCodeGenWriteBarrier((&___systemID_7), value);
	}

	inline static int32_t get_offset_of_xmlLang_8() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___xmlLang_8)); }
	inline String_t* get_xmlLang_8() const { return ___xmlLang_8; }
	inline String_t** get_address_of_xmlLang_8() { return &___xmlLang_8; }
	inline void set_xmlLang_8(String_t* value)
	{
		___xmlLang_8 = value;
		Il2CppCodeGenWriteBarrier((&___xmlLang_8), value);
	}

	inline static int32_t get_offset_of_xmlSpace_9() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___xmlSpace_9)); }
	inline int32_t get_xmlSpace_9() const { return ___xmlSpace_9; }
	inline int32_t* get_address_of_xmlSpace_9() { return &___xmlSpace_9; }
	inline void set_xmlSpace_9(int32_t value)
	{
		___xmlSpace_9 = value;
	}

	inline static int32_t get_offset_of_contextItems_10() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___contextItems_10)); }
	inline ArrayList_t2718874744 * get_contextItems_10() const { return ___contextItems_10; }
	inline ArrayList_t2718874744 ** get_address_of_contextItems_10() { return &___contextItems_10; }
	inline void set_contextItems_10(ArrayList_t2718874744 * value)
	{
		___contextItems_10 = value;
		Il2CppCodeGenWriteBarrier((&___contextItems_10), value);
	}

	inline static int32_t get_offset_of_contextItemCount_11() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___contextItemCount_11)); }
	inline int32_t get_contextItemCount_11() const { return ___contextItemCount_11; }
	inline int32_t* get_address_of_contextItemCount_11() { return &___contextItemCount_11; }
	inline void set_contextItemCount_11(int32_t value)
	{
		___contextItemCount_11 = value;
	}

	inline static int32_t get_offset_of_dtd_12() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ___dtd_12)); }
	inline DTDObjectModel_t1729680289 * get_dtd_12() const { return ___dtd_12; }
	inline DTDObjectModel_t1729680289 ** get_address_of_dtd_12() { return &___dtd_12; }
	inline void set_dtd_12(DTDObjectModel_t1729680289 * value)
	{
		___dtd_12 = value;
		Il2CppCodeGenWriteBarrier((&___dtd_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLPARSERCONTEXT_T2544895291_H
#ifndef XMLREADERSETTINGS_T2186285234_H
#define XMLREADERSETTINGS_T2186285234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReaderSettings
struct  XmlReaderSettings_t2186285234  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.XmlReaderSettings::checkCharacters
	bool ___checkCharacters_0;
	// System.Xml.ConformanceLevel System.Xml.XmlReaderSettings::conformance
	int32_t ___conformance_1;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlReaderSettings::schemas
	XmlSchemaSet_t266093086 * ___schemas_2;
	// System.Boolean System.Xml.XmlReaderSettings::schemasNeedsInitialization
	bool ___schemasNeedsInitialization_3;
	// System.Xml.Schema.XmlSchemaValidationFlags System.Xml.XmlReaderSettings::validationFlags
	int32_t ___validationFlags_4;

public:
	inline static int32_t get_offset_of_checkCharacters_0() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___checkCharacters_0)); }
	inline bool get_checkCharacters_0() const { return ___checkCharacters_0; }
	inline bool* get_address_of_checkCharacters_0() { return &___checkCharacters_0; }
	inline void set_checkCharacters_0(bool value)
	{
		___checkCharacters_0 = value;
	}

	inline static int32_t get_offset_of_conformance_1() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___conformance_1)); }
	inline int32_t get_conformance_1() const { return ___conformance_1; }
	inline int32_t* get_address_of_conformance_1() { return &___conformance_1; }
	inline void set_conformance_1(int32_t value)
	{
		___conformance_1 = value;
	}

	inline static int32_t get_offset_of_schemas_2() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___schemas_2)); }
	inline XmlSchemaSet_t266093086 * get_schemas_2() const { return ___schemas_2; }
	inline XmlSchemaSet_t266093086 ** get_address_of_schemas_2() { return &___schemas_2; }
	inline void set_schemas_2(XmlSchemaSet_t266093086 * value)
	{
		___schemas_2 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_2), value);
	}

	inline static int32_t get_offset_of_schemasNeedsInitialization_3() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___schemasNeedsInitialization_3)); }
	inline bool get_schemasNeedsInitialization_3() const { return ___schemasNeedsInitialization_3; }
	inline bool* get_address_of_schemasNeedsInitialization_3() { return &___schemasNeedsInitialization_3; }
	inline void set_schemasNeedsInitialization_3(bool value)
	{
		___schemasNeedsInitialization_3 = value;
	}

	inline static int32_t get_offset_of_validationFlags_4() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___validationFlags_4)); }
	inline int32_t get_validationFlags_4() const { return ___validationFlags_4; }
	inline int32_t* get_address_of_validationFlags_4() { return &___validationFlags_4; }
	inline void set_validationFlags_4(int32_t value)
	{
		___validationFlags_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLREADERSETTINGS_T2186285234_H
#ifndef XMLNODEINFO_T4030693883_H
#define XMLNODEINFO_T4030693883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/XmlNodeInfo
struct  XmlNodeInfo_t4030693883  : public RuntimeObject
{
public:
	// System.String System.Xml.XmlTextWriter/XmlNodeInfo::Prefix
	String_t* ___Prefix_0;
	// System.String System.Xml.XmlTextWriter/XmlNodeInfo::LocalName
	String_t* ___LocalName_1;
	// System.String System.Xml.XmlTextWriter/XmlNodeInfo::NS
	String_t* ___NS_2;
	// System.Boolean System.Xml.XmlTextWriter/XmlNodeInfo::HasSimple
	bool ___HasSimple_3;
	// System.Boolean System.Xml.XmlTextWriter/XmlNodeInfo::HasElements
	bool ___HasElements_4;
	// System.String System.Xml.XmlTextWriter/XmlNodeInfo::XmlLang
	String_t* ___XmlLang_5;
	// System.Xml.XmlSpace System.Xml.XmlTextWriter/XmlNodeInfo::XmlSpace
	int32_t ___XmlSpace_6;

public:
	inline static int32_t get_offset_of_Prefix_0() { return static_cast<int32_t>(offsetof(XmlNodeInfo_t4030693883, ___Prefix_0)); }
	inline String_t* get_Prefix_0() const { return ___Prefix_0; }
	inline String_t** get_address_of_Prefix_0() { return &___Prefix_0; }
	inline void set_Prefix_0(String_t* value)
	{
		___Prefix_0 = value;
		Il2CppCodeGenWriteBarrier((&___Prefix_0), value);
	}

	inline static int32_t get_offset_of_LocalName_1() { return static_cast<int32_t>(offsetof(XmlNodeInfo_t4030693883, ___LocalName_1)); }
	inline String_t* get_LocalName_1() const { return ___LocalName_1; }
	inline String_t** get_address_of_LocalName_1() { return &___LocalName_1; }
	inline void set_LocalName_1(String_t* value)
	{
		___LocalName_1 = value;
		Il2CppCodeGenWriteBarrier((&___LocalName_1), value);
	}

	inline static int32_t get_offset_of_NS_2() { return static_cast<int32_t>(offsetof(XmlNodeInfo_t4030693883, ___NS_2)); }
	inline String_t* get_NS_2() const { return ___NS_2; }
	inline String_t** get_address_of_NS_2() { return &___NS_2; }
	inline void set_NS_2(String_t* value)
	{
		___NS_2 = value;
		Il2CppCodeGenWriteBarrier((&___NS_2), value);
	}

	inline static int32_t get_offset_of_HasSimple_3() { return static_cast<int32_t>(offsetof(XmlNodeInfo_t4030693883, ___HasSimple_3)); }
	inline bool get_HasSimple_3() const { return ___HasSimple_3; }
	inline bool* get_address_of_HasSimple_3() { return &___HasSimple_3; }
	inline void set_HasSimple_3(bool value)
	{
		___HasSimple_3 = value;
	}

	inline static int32_t get_offset_of_HasElements_4() { return static_cast<int32_t>(offsetof(XmlNodeInfo_t4030693883, ___HasElements_4)); }
	inline bool get_HasElements_4() const { return ___HasElements_4; }
	inline bool* get_address_of_HasElements_4() { return &___HasElements_4; }
	inline void set_HasElements_4(bool value)
	{
		___HasElements_4 = value;
	}

	inline static int32_t get_offset_of_XmlLang_5() { return static_cast<int32_t>(offsetof(XmlNodeInfo_t4030693883, ___XmlLang_5)); }
	inline String_t* get_XmlLang_5() const { return ___XmlLang_5; }
	inline String_t** get_address_of_XmlLang_5() { return &___XmlLang_5; }
	inline void set_XmlLang_5(String_t* value)
	{
		___XmlLang_5 = value;
		Il2CppCodeGenWriteBarrier((&___XmlLang_5), value);
	}

	inline static int32_t get_offset_of_XmlSpace_6() { return static_cast<int32_t>(offsetof(XmlNodeInfo_t4030693883, ___XmlSpace_6)); }
	inline int32_t get_XmlSpace_6() const { return ___XmlSpace_6; }
	inline int32_t* get_address_of_XmlSpace_6() { return &___XmlSpace_6; }
	inline void set_XmlSpace_6(int32_t value)
	{
		___XmlSpace_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODEINFO_T4030693883_H
#ifndef XMLWRITERSETTINGS_T3314986516_H
#define XMLWRITERSETTINGS_T3314986516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWriterSettings
struct  XmlWriterSettings_t3314986516  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.XmlWriterSettings::checkCharacters
	bool ___checkCharacters_0;
	// System.Boolean System.Xml.XmlWriterSettings::closeOutput
	bool ___closeOutput_1;
	// System.Xml.ConformanceLevel System.Xml.XmlWriterSettings::conformance
	int32_t ___conformance_2;
	// System.Text.Encoding System.Xml.XmlWriterSettings::encoding
	Encoding_t1523322056 * ___encoding_3;
	// System.Boolean System.Xml.XmlWriterSettings::indent
	bool ___indent_4;
	// System.String System.Xml.XmlWriterSettings::indentChars
	String_t* ___indentChars_5;
	// System.String System.Xml.XmlWriterSettings::newLineChars
	String_t* ___newLineChars_6;
	// System.Boolean System.Xml.XmlWriterSettings::newLineOnAttributes
	bool ___newLineOnAttributes_7;
	// System.Xml.NewLineHandling System.Xml.XmlWriterSettings::newLineHandling
	int32_t ___newLineHandling_8;
	// System.Boolean System.Xml.XmlWriterSettings::omitXmlDeclaration
	bool ___omitXmlDeclaration_9;
	// System.Xml.XmlOutputMethod System.Xml.XmlWriterSettings::outputMethod
	int32_t ___outputMethod_10;

public:
	inline static int32_t get_offset_of_checkCharacters_0() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___checkCharacters_0)); }
	inline bool get_checkCharacters_0() const { return ___checkCharacters_0; }
	inline bool* get_address_of_checkCharacters_0() { return &___checkCharacters_0; }
	inline void set_checkCharacters_0(bool value)
	{
		___checkCharacters_0 = value;
	}

	inline static int32_t get_offset_of_closeOutput_1() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___closeOutput_1)); }
	inline bool get_closeOutput_1() const { return ___closeOutput_1; }
	inline bool* get_address_of_closeOutput_1() { return &___closeOutput_1; }
	inline void set_closeOutput_1(bool value)
	{
		___closeOutput_1 = value;
	}

	inline static int32_t get_offset_of_conformance_2() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___conformance_2)); }
	inline int32_t get_conformance_2() const { return ___conformance_2; }
	inline int32_t* get_address_of_conformance_2() { return &___conformance_2; }
	inline void set_conformance_2(int32_t value)
	{
		___conformance_2 = value;
	}

	inline static int32_t get_offset_of_encoding_3() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___encoding_3)); }
	inline Encoding_t1523322056 * get_encoding_3() const { return ___encoding_3; }
	inline Encoding_t1523322056 ** get_address_of_encoding_3() { return &___encoding_3; }
	inline void set_encoding_3(Encoding_t1523322056 * value)
	{
		___encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_3), value);
	}

	inline static int32_t get_offset_of_indent_4() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___indent_4)); }
	inline bool get_indent_4() const { return ___indent_4; }
	inline bool* get_address_of_indent_4() { return &___indent_4; }
	inline void set_indent_4(bool value)
	{
		___indent_4 = value;
	}

	inline static int32_t get_offset_of_indentChars_5() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___indentChars_5)); }
	inline String_t* get_indentChars_5() const { return ___indentChars_5; }
	inline String_t** get_address_of_indentChars_5() { return &___indentChars_5; }
	inline void set_indentChars_5(String_t* value)
	{
		___indentChars_5 = value;
		Il2CppCodeGenWriteBarrier((&___indentChars_5), value);
	}

	inline static int32_t get_offset_of_newLineChars_6() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___newLineChars_6)); }
	inline String_t* get_newLineChars_6() const { return ___newLineChars_6; }
	inline String_t** get_address_of_newLineChars_6() { return &___newLineChars_6; }
	inline void set_newLineChars_6(String_t* value)
	{
		___newLineChars_6 = value;
		Il2CppCodeGenWriteBarrier((&___newLineChars_6), value);
	}

	inline static int32_t get_offset_of_newLineOnAttributes_7() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___newLineOnAttributes_7)); }
	inline bool get_newLineOnAttributes_7() const { return ___newLineOnAttributes_7; }
	inline bool* get_address_of_newLineOnAttributes_7() { return &___newLineOnAttributes_7; }
	inline void set_newLineOnAttributes_7(bool value)
	{
		___newLineOnAttributes_7 = value;
	}

	inline static int32_t get_offset_of_newLineHandling_8() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___newLineHandling_8)); }
	inline int32_t get_newLineHandling_8() const { return ___newLineHandling_8; }
	inline int32_t* get_address_of_newLineHandling_8() { return &___newLineHandling_8; }
	inline void set_newLineHandling_8(int32_t value)
	{
		___newLineHandling_8 = value;
	}

	inline static int32_t get_offset_of_omitXmlDeclaration_9() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___omitXmlDeclaration_9)); }
	inline bool get_omitXmlDeclaration_9() const { return ___omitXmlDeclaration_9; }
	inline bool* get_address_of_omitXmlDeclaration_9() { return &___omitXmlDeclaration_9; }
	inline void set_omitXmlDeclaration_9(bool value)
	{
		___omitXmlDeclaration_9 = value;
	}

	inline static int32_t get_offset_of_outputMethod_10() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___outputMethod_10)); }
	inline int32_t get_outputMethod_10() const { return ___outputMethod_10; }
	inline int32_t* get_address_of_outputMethod_10() { return &___outputMethod_10; }
	inline void set_outputMethod_10(int32_t value)
	{
		___outputMethod_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWRITERSETTINGS_T3314986516_H
#ifndef FILESTREAM_T4292183065_H
#define FILESTREAM_T4292183065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t4292183065  : public Stream_t1273022909
{
public:
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_2;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_3;
	// System.Boolean System.IO.FileStream::async
	bool ___async_4;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_5;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_6;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_7;
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t4116647657* ___buf_8;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_9;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_10;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_11;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_12;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_13;
	// System.String System.IO.FileStream::name
	String_t* ___name_14;
	// System.IntPtr System.IO.FileStream::handle
	intptr_t ___handle_15;

public:
	inline static int32_t get_offset_of_access_2() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___access_2)); }
	inline int32_t get_access_2() const { return ___access_2; }
	inline int32_t* get_address_of_access_2() { return &___access_2; }
	inline void set_access_2(int32_t value)
	{
		___access_2 = value;
	}

	inline static int32_t get_offset_of_owner_3() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___owner_3)); }
	inline bool get_owner_3() const { return ___owner_3; }
	inline bool* get_address_of_owner_3() { return &___owner_3; }
	inline void set_owner_3(bool value)
	{
		___owner_3 = value;
	}

	inline static int32_t get_offset_of_async_4() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___async_4)); }
	inline bool get_async_4() const { return ___async_4; }
	inline bool* get_address_of_async_4() { return &___async_4; }
	inline void set_async_4(bool value)
	{
		___async_4 = value;
	}

	inline static int32_t get_offset_of_canseek_5() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___canseek_5)); }
	inline bool get_canseek_5() const { return ___canseek_5; }
	inline bool* get_address_of_canseek_5() { return &___canseek_5; }
	inline void set_canseek_5(bool value)
	{
		___canseek_5 = value;
	}

	inline static int32_t get_offset_of_append_startpos_6() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___append_startpos_6)); }
	inline int64_t get_append_startpos_6() const { return ___append_startpos_6; }
	inline int64_t* get_address_of_append_startpos_6() { return &___append_startpos_6; }
	inline void set_append_startpos_6(int64_t value)
	{
		___append_startpos_6 = value;
	}

	inline static int32_t get_offset_of_anonymous_7() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___anonymous_7)); }
	inline bool get_anonymous_7() const { return ___anonymous_7; }
	inline bool* get_address_of_anonymous_7() { return &___anonymous_7; }
	inline void set_anonymous_7(bool value)
	{
		___anonymous_7 = value;
	}

	inline static int32_t get_offset_of_buf_8() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_8)); }
	inline ByteU5BU5D_t4116647657* get_buf_8() const { return ___buf_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_buf_8() { return &___buf_8; }
	inline void set_buf_8(ByteU5BU5D_t4116647657* value)
	{
		___buf_8 = value;
		Il2CppCodeGenWriteBarrier((&___buf_8), value);
	}

	inline static int32_t get_offset_of_buf_size_9() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_size_9)); }
	inline int32_t get_buf_size_9() const { return ___buf_size_9; }
	inline int32_t* get_address_of_buf_size_9() { return &___buf_size_9; }
	inline void set_buf_size_9(int32_t value)
	{
		___buf_size_9 = value;
	}

	inline static int32_t get_offset_of_buf_length_10() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_length_10)); }
	inline int32_t get_buf_length_10() const { return ___buf_length_10; }
	inline int32_t* get_address_of_buf_length_10() { return &___buf_length_10; }
	inline void set_buf_length_10(int32_t value)
	{
		___buf_length_10 = value;
	}

	inline static int32_t get_offset_of_buf_offset_11() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_offset_11)); }
	inline int32_t get_buf_offset_11() const { return ___buf_offset_11; }
	inline int32_t* get_address_of_buf_offset_11() { return &___buf_offset_11; }
	inline void set_buf_offset_11(int32_t value)
	{
		___buf_offset_11 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_12() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_dirty_12)); }
	inline bool get_buf_dirty_12() const { return ___buf_dirty_12; }
	inline bool* get_address_of_buf_dirty_12() { return &___buf_dirty_12; }
	inline void set_buf_dirty_12(bool value)
	{
		___buf_dirty_12 = value;
	}

	inline static int32_t get_offset_of_buf_start_13() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_start_13)); }
	inline int64_t get_buf_start_13() const { return ___buf_start_13; }
	inline int64_t* get_address_of_buf_start_13() { return &___buf_start_13; }
	inline void set_buf_start_13(int64_t value)
	{
		___buf_start_13 = value;
	}

	inline static int32_t get_offset_of_name_14() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___name_14)); }
	inline String_t* get_name_14() const { return ___name_14; }
	inline String_t** get_address_of_name_14() { return &___name_14; }
	inline void set_name_14(String_t* value)
	{
		___name_14 = value;
		Il2CppCodeGenWriteBarrier((&___name_14), value);
	}

	inline static int32_t get_offset_of_handle_15() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___handle_15)); }
	inline intptr_t get_handle_15() const { return ___handle_15; }
	inline intptr_t* get_address_of_handle_15() { return &___handle_15; }
	inline void set_handle_15(intptr_t value)
	{
		___handle_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T4292183065_H
#ifndef XMLVALIDATINGREADER_T1719295192_H
#define XMLVALIDATINGREADER_T1719295192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlValidatingReader
struct  XmlValidatingReader_t1719295192  : public XmlReader_t3121518892
{
public:
	// System.Xml.EntityHandling System.Xml.XmlValidatingReader::entityHandling
	int32_t ___entityHandling_3;
	// System.Xml.XmlReader System.Xml.XmlValidatingReader::sourceReader
	XmlReader_t3121518892 * ___sourceReader_4;
	// System.Xml.XmlTextReader System.Xml.XmlValidatingReader::xmlTextReader
	XmlTextReader_t4233384356 * ___xmlTextReader_5;
	// System.Xml.XmlReader System.Xml.XmlValidatingReader::validatingReader
	XmlReader_t3121518892 * ___validatingReader_6;
	// System.Xml.XmlResolver System.Xml.XmlValidatingReader::resolver
	XmlResolver_t626023767 * ___resolver_7;
	// System.Boolean System.Xml.XmlValidatingReader::resolverSpecified
	bool ___resolverSpecified_8;
	// System.Xml.ValidationType System.Xml.XmlValidatingReader::validationType
	int32_t ___validationType_9;
	// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReader::schemas
	XmlSchemaCollection_t3610399789 * ___schemas_10;
	// Mono.Xml.DTDValidatingReader System.Xml.XmlValidatingReader::dtdReader
	DTDValidatingReader_t3946379043 * ___dtdReader_11;
	// Mono.Xml.IHasXmlSchemaInfo System.Xml.XmlValidatingReader::schemaInfo
	RuntimeObject* ___schemaInfo_12;
	// System.Text.StringBuilder System.Xml.XmlValidatingReader::storedCharacters
	StringBuilder_t * ___storedCharacters_13;
	// System.Xml.Schema.ValidationEventHandler System.Xml.XmlValidatingReader::ValidationEventHandler
	ValidationEventHandler_t791314227 * ___ValidationEventHandler_14;

public:
	inline static int32_t get_offset_of_entityHandling_3() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___entityHandling_3)); }
	inline int32_t get_entityHandling_3() const { return ___entityHandling_3; }
	inline int32_t* get_address_of_entityHandling_3() { return &___entityHandling_3; }
	inline void set_entityHandling_3(int32_t value)
	{
		___entityHandling_3 = value;
	}

	inline static int32_t get_offset_of_sourceReader_4() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___sourceReader_4)); }
	inline XmlReader_t3121518892 * get_sourceReader_4() const { return ___sourceReader_4; }
	inline XmlReader_t3121518892 ** get_address_of_sourceReader_4() { return &___sourceReader_4; }
	inline void set_sourceReader_4(XmlReader_t3121518892 * value)
	{
		___sourceReader_4 = value;
		Il2CppCodeGenWriteBarrier((&___sourceReader_4), value);
	}

	inline static int32_t get_offset_of_xmlTextReader_5() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___xmlTextReader_5)); }
	inline XmlTextReader_t4233384356 * get_xmlTextReader_5() const { return ___xmlTextReader_5; }
	inline XmlTextReader_t4233384356 ** get_address_of_xmlTextReader_5() { return &___xmlTextReader_5; }
	inline void set_xmlTextReader_5(XmlTextReader_t4233384356 * value)
	{
		___xmlTextReader_5 = value;
		Il2CppCodeGenWriteBarrier((&___xmlTextReader_5), value);
	}

	inline static int32_t get_offset_of_validatingReader_6() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___validatingReader_6)); }
	inline XmlReader_t3121518892 * get_validatingReader_6() const { return ___validatingReader_6; }
	inline XmlReader_t3121518892 ** get_address_of_validatingReader_6() { return &___validatingReader_6; }
	inline void set_validatingReader_6(XmlReader_t3121518892 * value)
	{
		___validatingReader_6 = value;
		Il2CppCodeGenWriteBarrier((&___validatingReader_6), value);
	}

	inline static int32_t get_offset_of_resolver_7() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___resolver_7)); }
	inline XmlResolver_t626023767 * get_resolver_7() const { return ___resolver_7; }
	inline XmlResolver_t626023767 ** get_address_of_resolver_7() { return &___resolver_7; }
	inline void set_resolver_7(XmlResolver_t626023767 * value)
	{
		___resolver_7 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_7), value);
	}

	inline static int32_t get_offset_of_resolverSpecified_8() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___resolverSpecified_8)); }
	inline bool get_resolverSpecified_8() const { return ___resolverSpecified_8; }
	inline bool* get_address_of_resolverSpecified_8() { return &___resolverSpecified_8; }
	inline void set_resolverSpecified_8(bool value)
	{
		___resolverSpecified_8 = value;
	}

	inline static int32_t get_offset_of_validationType_9() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___validationType_9)); }
	inline int32_t get_validationType_9() const { return ___validationType_9; }
	inline int32_t* get_address_of_validationType_9() { return &___validationType_9; }
	inline void set_validationType_9(int32_t value)
	{
		___validationType_9 = value;
	}

	inline static int32_t get_offset_of_schemas_10() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___schemas_10)); }
	inline XmlSchemaCollection_t3610399789 * get_schemas_10() const { return ___schemas_10; }
	inline XmlSchemaCollection_t3610399789 ** get_address_of_schemas_10() { return &___schemas_10; }
	inline void set_schemas_10(XmlSchemaCollection_t3610399789 * value)
	{
		___schemas_10 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_10), value);
	}

	inline static int32_t get_offset_of_dtdReader_11() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___dtdReader_11)); }
	inline DTDValidatingReader_t3946379043 * get_dtdReader_11() const { return ___dtdReader_11; }
	inline DTDValidatingReader_t3946379043 ** get_address_of_dtdReader_11() { return &___dtdReader_11; }
	inline void set_dtdReader_11(DTDValidatingReader_t3946379043 * value)
	{
		___dtdReader_11 = value;
		Il2CppCodeGenWriteBarrier((&___dtdReader_11), value);
	}

	inline static int32_t get_offset_of_schemaInfo_12() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___schemaInfo_12)); }
	inline RuntimeObject* get_schemaInfo_12() const { return ___schemaInfo_12; }
	inline RuntimeObject** get_address_of_schemaInfo_12() { return &___schemaInfo_12; }
	inline void set_schemaInfo_12(RuntimeObject* value)
	{
		___schemaInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_12), value);
	}

	inline static int32_t get_offset_of_storedCharacters_13() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___storedCharacters_13)); }
	inline StringBuilder_t * get_storedCharacters_13() const { return ___storedCharacters_13; }
	inline StringBuilder_t ** get_address_of_storedCharacters_13() { return &___storedCharacters_13; }
	inline void set_storedCharacters_13(StringBuilder_t * value)
	{
		___storedCharacters_13 = value;
		Il2CppCodeGenWriteBarrier((&___storedCharacters_13), value);
	}

	inline static int32_t get_offset_of_ValidationEventHandler_14() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___ValidationEventHandler_14)); }
	inline ValidationEventHandler_t791314227 * get_ValidationEventHandler_14() const { return ___ValidationEventHandler_14; }
	inline ValidationEventHandler_t791314227 ** get_address_of_ValidationEventHandler_14() { return &___ValidationEventHandler_14; }
	inline void set_ValidationEventHandler_14(ValidationEventHandler_t791314227 * value)
	{
		___ValidationEventHandler_14 = value;
		Il2CppCodeGenWriteBarrier((&___ValidationEventHandler_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLVALIDATINGREADER_T1719295192_H
#ifndef XMLWHITESPACE_T131741354_H
#define XMLWHITESPACE_T131741354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWhitespace
struct  XmlWhitespace_t131741354  : public XmlCharacterData_t1167807131
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWHITESPACE_T131741354_H
#ifndef VALIDATIONEVENTHANDLER_T791314227_H
#define VALIDATIONEVENTHANDLER_T791314227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.ValidationEventHandler
struct  ValidationEventHandler_t791314227  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATIONEVENTHANDLER_T791314227_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C"  String_t* String_Format_m1881875187 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, String_t* p1, ObjectU5BU5D_t2843939325* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlResolver::.ctor()
extern "C"  void XmlResolver__ctor_m2276492248 (XmlResolver_t626023767 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String)
extern "C"  void XmlException__ctor_m3751204500 (XmlException_t1761730631 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C"  bool Uri_get_IsAbsoluteUri_m3666899587 (Uri_t100236324 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C"  void ArgumentException__ctor_m1216717135 (ArgumentException_t132251570 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Scheme()
extern "C"  String_t* Uri_get_Scheme_m2109479391 (Uri_t100236324 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_AbsolutePath()
extern "C"  String_t* Uri_get_AbsolutePath_m590948575 (Uri_t100236324 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_LocalPath()
extern "C"  String_t* Uri_get_LocalPath_m2837234216 (Uri_t100236324 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlUrlResolver::UnescapeRelativeUriBody(System.String)
extern "C"  String_t* XmlUrlResolver_UnescapeRelativeUriBody_m2976662118 (XmlUrlResolver_t817895037 * __this, String_t* ___src0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C"  void FileStream__ctor_m2889718780 (FileStream_t4292183065 * __this, String_t* p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebRequest::Create(System.Uri)
extern "C"  WebRequest_t1939381076 * WebRequest_Create_m2603246108 (RuntimeObject * __this /* static, unused */, Uri_t100236324 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String)
extern "C"  Uri_t100236324 * XmlResolver_ResolveUri_m3051172150 (XmlResolver_t626023767 * __this, Uri_t100236324 * ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.String,System.String)
extern "C"  String_t* String_Replace_m1273907647 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::.ctor()
extern "C"  void XmlReader__ctor_m2242864879 (XmlReader_t3121518892 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlUrlResolver::.ctor()
extern "C"  void XmlUrlResolver__ctor_m1338399436 (XmlUrlResolver_t817895037 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.DTDValidatingReader::get_ParserContext()
extern "C"  XmlParserContext_t2544895291 * DTDValidatingReader_get_ParserContext_m883207457 (DTDValidatingReader_t3946379043 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::set_EntityHandling(System.Xml.EntityHandling)
extern "C"  void DTDValidatingReader_set_EntityHandling_m3201559656 (DTDValidatingReader_t3946379043 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_Namespaces()
extern "C"  bool XmlValidatingReader_get_Namespaces_m3935643757 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_Namespaces()
extern "C"  bool XmlTextReader_get_Namespaces_m3871412690 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlTextReader::get_Resolver()
extern "C"  XmlResolver_t626023767 * XmlTextReader_get_Resolver_m258955197 (XmlTextReader_t4233384356 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::.ctor(System.Xml.XmlNameTable)
extern "C"  void XmlSchemaCollection__ctor_m3228921192 (XmlSchemaCollection_t3610399789 * __this, XmlNameTable_t71772148 * ___nameTable0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C"  void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
extern "C"  void IndexOutOfRangeException__ctor_m3408750441 (IndexOutOfRangeException_t1578797820 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.ValidationType System.Xml.XmlValidatingReader::get_ValidationType()
extern "C"  int32_t XmlValidatingReader_get_ValidationType_m768883523 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::.ctor(System.Xml.XmlReader,System.Xml.XmlValidatingReader)
extern "C"  void DTDValidatingReader__ctor_m3400285377 (DTDValidatingReader_t3946379043 * __this, XmlReader_t3121518892 * ___reader0, XmlValidatingReader_t1719295192 * ___validatingReader1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlValidatingReader::get_Resolver()
extern "C"  XmlResolver_t626023767 * XmlValidatingReader_get_Resolver_m1269208747 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C"  void DTDValidatingReader_set_XmlResolver_m3887196702 (DTDValidatingReader_t3946379043 * __this, XmlResolver_t626023767 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::.ctor(System.Xml.XmlReader)
extern "C"  void XsdValidatingReader__ctor_m1875465247 (XsdValidatingReader_t3961132625 * __this, XmlReader_t3121518892 * ___reader0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.ValidationEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ValidationEventHandler__ctor_m2945978529 (ValidationEventHandler_t791314227 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_ValidationType(System.Xml.ValidationType)
extern "C"  void XsdValidatingReader_set_ValidationType_m2062431012 (XsdValidatingReader_t3961132625 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReader::get_Schemas()
extern "C"  XmlSchemaCollection_t3610399789 * XmlValidatingReader_get_Schemas_m1542506967 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchemaCollection::get_SchemaSet()
extern "C"  XmlSchemaSet_t266093086 * XmlSchemaCollection_get_SchemaSet_m2053221801 (XmlSchemaCollection_t3610399789 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_Schemas(System.Xml.Schema.XmlSchemaSet)
extern "C"  void XsdValidatingReader_set_Schemas_m1687221862 (XsdValidatingReader_t3961132625 * __this, XmlSchemaSet_t266093086 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C"  void XsdValidatingReader_set_XmlResolver_m2067506225 (XsdValidatingReader_t3961132625 * __this, XmlResolver_t626023767 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadString()
extern "C"  String_t* XmlReader_ReadString_m4051384055 (XmlReader_t3121518892 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.ValidationEventHandler::Invoke(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C"  void ValidationEventHandler_Invoke_m3984227947 (ValidationEventHandler_t791314227 * __this, RuntimeObject * ___sender0, ValidationEventArgs_t2784773869 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSeverityType System.Xml.Schema.ValidationEventArgs::get_Severity()
extern "C"  int32_t ValidationEventArgs_get_Severity_m1798521934 (ValidationEventArgs_t2784773869 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaException System.Xml.Schema.ValidationEventArgs::get_Exception()
extern "C"  XmlSchemaException_t3511258692 * ValidationEventArgs_get_Exception_m2119547120 (ValidationEventArgs_t2784773869 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlCharacterData::.ctor(System.String,System.Xml.XmlDocument)
extern "C"  void XmlCharacterData__ctor_m3935345337 (XmlCharacterData_t1167807131 * __this, String_t* ___data0, XmlDocument_t2837193595 * ___doc1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsWhitespace(System.String)
extern "C"  bool XmlChar_IsWhitespace_m2421104119 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode()
extern "C"  XmlNode_t3767805227 * XmlNode_get_ParentNode_m3304904414 (XmlNode_t3767805227 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWhitespace::.ctor(System.String,System.Xml.XmlDocument)
extern "C"  void XmlWhitespace__ctor_m949230574 (XmlWhitespace_t131741354 * __this, String_t* ___strData0, XmlDocument_t2837193595 * ___doc1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriterSettings::.ctor()
extern "C"  void XmlWriterSettings__ctor_m2465852079 (XmlWriterSettings_t3314986516 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String,System.String)
extern "C"  void XmlWriter_WriteAttributeString_m2341773285 (XmlWriter_t127905479 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___ns2, String_t* ___value3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String)
extern "C"  void XmlWriter_WriteStartElement_m1499083124 (XmlWriter_t127905479 * __this, String_t* ___localName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteQualifiedNameInternal(System.String,System.String)
extern "C"  void XmlWriter_WriteQualifiedNameInternal_m2017981185 (XmlWriter_t127905479 * __this, String_t* ___localName0, String_t* ___ns1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor()
extern "C"  void ArgumentException__ctor_m3698743796 (ArgumentException_t132251570 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.ConformanceLevel System.Xml.XmlWriterSettings::get_ConformanceLevel()
extern "C"  int32_t XmlWriterSettings_get_ConformanceLevel_m2619815559 (XmlWriterSettings_t3314986516 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::VerifyNCName(System.String)
extern "C"  String_t* XmlConvert_VerifyNCName_m3085528481 (RuntimeObject * __this /* static, unused */, String_t* ___ncname0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttribute(System.Xml.XmlReader,System.Boolean)
extern "C"  void XmlWriter_WriteAttribute_m3614493714 (XmlWriter_t127905479 * __this, XmlReader_t3121518892 * ___reader0, bool ___defattr1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriterSettings::Reset()
extern "C"  void XmlWriterSettings_Reset_m4105849431 (XmlWriterSettings_t3314986516 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C"  Encoding_t1523322056 * Encoding_get_UTF8_m1008486739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::get_NewLine()
extern "C"  String_t* Environment_get_NewLine_m3211016485 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlTextWriter/StringUtil::.cctor()
extern "C"  void StringUtil__cctor_m1463895374 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtil__cctor_m1463895374_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		((StringUtil_t564231417_StaticFields*)il2cpp_codegen_static_fields_for(StringUtil_t564231417_il2cpp_TypeInfo_var))->set_cul_0(L_0);
		CultureInfo_t4157843068 * L_1 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		CompareInfo_t1092934962 * L_2 = VirtFuncInvoker0< CompareInfo_t1092934962 * >::Invoke(11 /* System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo() */, L_1);
		((StringUtil_t564231417_StaticFields*)il2cpp_codegen_static_fields_for(StringUtil_t564231417_il2cpp_TypeInfo_var))->set_cmp_1(L_2);
		return;
	}
}
// System.Int32 System.Xml.XmlTextWriter/StringUtil::IndexOf(System.String,System.String)
extern "C"  int32_t StringUtil_IndexOf_m1748403443 (RuntimeObject * __this /* static, unused */, String_t* ___src0, String_t* ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtil_IndexOf_m1748403443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t564231417_il2cpp_TypeInfo_var);
		CompareInfo_t1092934962 * L_0 = ((StringUtil_t564231417_StaticFields*)il2cpp_codegen_static_fields_for(StringUtil_t564231417_il2cpp_TypeInfo_var))->get_cmp_1();
		String_t* L_1 = ___src0;
		String_t* L_2 = ___target1;
		NullCheck(L_0);
		int32_t L_3 = VirtFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(9 /* System.Int32 System.Globalization.CompareInfo::IndexOf(System.String,System.String) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.String System.Xml.XmlTextWriter/StringUtil::Format(System.String,System.Object[])
extern "C"  String_t* StringUtil_Format_m4156193709 (RuntimeObject * __this /* static, unused */, String_t* ___format0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtil_Format_m4156193709_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t564231417_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = ((StringUtil_t564231417_StaticFields*)il2cpp_codegen_static_fields_for(StringUtil_t564231417_il2cpp_TypeInfo_var))->get_cul_0();
		String_t* L_1 = ___format0;
		ObjectU5BU5D_t2843939325* L_2 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Format_m1881875187(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlTextWriter/XmlNodeInfo::.ctor()
extern "C"  void XmlNodeInfo__ctor_m1232608472 (XmlNodeInfo_t4030693883 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlUrlResolver::.ctor()
extern "C"  void XmlUrlResolver__ctor_m1338399436 (XmlUrlResolver_t817895037 * __this, const RuntimeMethod* method)
{
	{
		XmlResolver__ctor_m2276492248(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Xml.XmlUrlResolver::GetEntity(System.Uri,System.String,System.Type)
extern "C"  RuntimeObject * XmlUrlResolver_GetEntity_m2245402732 (XmlUrlResolver_t817895037 * __this, Uri_t100236324 * ___absoluteUri0, String_t* ___role1, Type_t * ___ofObjectToReturn2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUrlResolver_GetEntity_m2245402732_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebRequest_t1939381076 * V_0 = NULL;
	{
		Type_t * L_0 = ___ofObjectToReturn2;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (Stream_t1273022909_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		___ofObjectToReturn2 = L_2;
	}

IL_0012:
	{
		Type_t * L_3 = ___ofObjectToReturn2;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (Stream_t1273022909_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_5)))
		{
			goto IL_002d;
		}
	}
	{
		XmlException_t1761730631 * L_6 = (XmlException_t1761730631 *)il2cpp_codegen_object_new(XmlException_t1761730631_il2cpp_TypeInfo_var);
		XmlException__ctor_m3751204500(L_6, _stringLiteral109070372, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6,XmlUrlResolver_GetEntity_m2245402732_RuntimeMethod_var);
	}

IL_002d:
	{
		Uri_t100236324 * L_7 = ___absoluteUri0;
		NullCheck(L_7);
		bool L_8 = Uri_get_IsAbsoluteUri_m3666899587(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0048;
		}
	}
	{
		ArgumentException_t132251570 * L_9 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_9, _stringLiteral3264822601, _stringLiteral1705633010, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9,XmlUrlResolver_GetEntity_m2245402732_RuntimeMethod_var);
	}

IL_0048:
	{
		Uri_t100236324 * L_10 = ___absoluteUri0;
		NullCheck(L_10);
		String_t* L_11 = Uri_get_Scheme_m2109479391(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m920492651(NULL /*static, unused*/, L_11, _stringLiteral1629333464, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0097;
		}
	}
	{
		Uri_t100236324 * L_13 = ___absoluteUri0;
		NullCheck(L_13);
		String_t* L_14 = Uri_get_AbsolutePath_m590948575(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_16 = String_op_Equality_m920492651(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0082;
		}
	}
	{
		ArgumentException_t132251570 * L_17 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_17, _stringLiteral3264822601, _stringLiteral1705633010, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17,XmlUrlResolver_GetEntity_m2245402732_RuntimeMethod_var);
	}

IL_0082:
	{
		Uri_t100236324 * L_18 = ___absoluteUri0;
		NullCheck(L_18);
		String_t* L_19 = Uri_get_LocalPath_m2837234216(L_18, /*hidden argument*/NULL);
		String_t* L_20 = XmlUrlResolver_UnescapeRelativeUriBody_m2976662118(__this, L_19, /*hidden argument*/NULL);
		FileStream_t4292183065 * L_21 = (FileStream_t4292183065 *)il2cpp_codegen_object_new(FileStream_t4292183065_il2cpp_TypeInfo_var);
		FileStream__ctor_m2889718780(L_21, L_20, 3, 1, 1, /*hidden argument*/NULL);
		return L_21;
	}

IL_0097:
	{
		Uri_t100236324 * L_22 = ___absoluteUri0;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequest_t1939381076_il2cpp_TypeInfo_var);
		WebRequest_t1939381076 * L_23 = WebRequest_Create_m2603246108(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		RuntimeObject* L_24 = __this->get_credential_0();
		if (!L_24)
		{
			goto IL_00b5;
		}
	}
	{
		WebRequest_t1939381076 * L_25 = V_0;
		RuntimeObject* L_26 = __this->get_credential_0();
		NullCheck(L_25);
		VirtActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void System.Net.WebRequest::set_Credentials(System.Net.ICredentials) */, L_25, L_26);
	}

IL_00b5:
	{
		WebRequest_t1939381076 * L_27 = V_0;
		NullCheck(L_27);
		WebResponse_t229922639 * L_28 = VirtFuncInvoker0< WebResponse_t229922639 * >::Invoke(17 /* System.Net.WebResponse System.Net.WebRequest::GetResponse() */, L_27);
		NullCheck(L_28);
		Stream_t1273022909 * L_29 = VirtFuncInvoker0< Stream_t1273022909 * >::Invoke(10 /* System.IO.Stream System.Net.WebResponse::GetResponseStream() */, L_28);
		return L_29;
	}
}
// System.Uri System.Xml.XmlUrlResolver::ResolveUri(System.Uri,System.String)
extern "C"  Uri_t100236324 * XmlUrlResolver_ResolveUri_m3714454862 (XmlUrlResolver_t817895037 * __this, Uri_t100236324 * ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method)
{
	{
		Uri_t100236324 * L_0 = ___baseUri0;
		String_t* L_1 = ___relativeUri1;
		Uri_t100236324 * L_2 = XmlResolver_ResolveUri_m3051172150(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String System.Xml.XmlUrlResolver::UnescapeRelativeUriBody(System.String)
extern "C"  String_t* XmlUrlResolver_UnescapeRelativeUriBody_m2976662118 (XmlUrlResolver_t817895037 * __this, String_t* ___src0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUrlResolver_UnescapeRelativeUriBody_m2976662118_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___src0;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m1273907647(L_0, _stringLiteral3403826294, _stringLiteral3452614548, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = String_Replace_m1273907647(L_1, _stringLiteral271658412, _stringLiteral3452614546, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = String_Replace_m1273907647(L_2, _stringLiteral2671228134, _stringLiteral3452614525, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = String_Replace_m1273907647(L_3, _stringLiteral4237312075, _stringLiteral3452614526, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = String_Replace_m1273907647(L_4, _stringLiteral3074512661, _stringLiteral3452614528, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = String_Replace_m1273907647(L_5, _stringLiteral3834027548, _stringLiteral3452614523, /*hidden argument*/NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlValidatingReader::.ctor(System.Xml.XmlReader)
extern "C"  void XmlValidatingReader__ctor_m746074126 (XmlValidatingReader_t1719295192 * __this, XmlReader_t3121518892 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader__ctor_m746074126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader__ctor_m2242864879(__this, /*hidden argument*/NULL);
		XmlReader_t3121518892 * L_0 = ___reader0;
		__this->set_sourceReader_4(L_0);
		XmlReader_t3121518892 * L_1 = ___reader0;
		__this->set_xmlTextReader_5(((XmlTextReader_t4233384356 *)IsInstClass((RuntimeObject*)L_1, XmlTextReader_t4233384356_il2cpp_TypeInfo_var)));
		XmlTextReader_t4233384356 * L_2 = __this->get_xmlTextReader_5();
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		XmlUrlResolver_t817895037 * L_3 = (XmlUrlResolver_t817895037 *)il2cpp_codegen_object_new(XmlUrlResolver_t817895037_il2cpp_TypeInfo_var);
		XmlUrlResolver__ctor_m1338399436(L_3, /*hidden argument*/NULL);
		__this->set_resolver_7(L_3);
	}

IL_002f:
	{
		__this->set_entityHandling_3(1);
		__this->set_validationType_9(1);
		StringBuilder_t * L_4 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_4, /*hidden argument*/NULL);
		__this->set_storedCharacters_13(L_4);
		return;
	}
}
// System.Xml.XmlParserContext System.Xml.XmlValidatingReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C"  XmlParserContext_t2544895291 * XmlValidatingReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m2551608519 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m2551608519_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	XmlParserContext_t2544895291 * G_B5_0 = NULL;
	{
		DTDValidatingReader_t3946379043 * L_0 = __this->get_dtdReader_11();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		DTDValidatingReader_t3946379043 * L_1 = __this->get_dtdReader_11();
		NullCheck(L_1);
		XmlParserContext_t2544895291 * L_2 = DTDValidatingReader_get_ParserContext_m883207457(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		XmlReader_t3121518892 * L_3 = __this->get_sourceReader_4();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IHasXmlParserContext_t1330489402_il2cpp_TypeInfo_var));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		XmlParserContext_t2544895291 * L_6 = InterfaceFuncInvoker0< XmlParserContext_t2544895291 * >::Invoke(0 /* System.Xml.XmlParserContext Mono.Xml.IHasXmlParserContext::get_ParserContext() */, IHasXmlParserContext_t1330489402_il2cpp_TypeInfo_var, L_5);
		G_B5_0 = L_6;
		goto IL_0035;
	}

IL_0034:
	{
		G_B5_0 = ((XmlParserContext_t2544895291 *)(NULL));
	}

IL_0035:
	{
		return G_B5_0;
	}
}
// System.Int32 System.Xml.XmlValidatingReader::get_AttributeCount()
extern "C"  int32_t XmlValidatingReader_get_AttributeCount_m3036345306 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_6();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, L_1);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.String System.Xml.XmlValidatingReader::get_BaseURI()
extern "C"  String_t* XmlValidatingReader_get_BaseURI_m1476328842 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	String_t* G_B3_0 = NULL;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		XmlReader_t3121518892 * L_1 = __this->get_sourceReader_4();
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_1);
		G_B3_0 = L_2;
		goto IL_0026;
	}

IL_001b:
	{
		XmlReader_t3121518892 * L_3 = __this->get_validatingReader_6();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_3);
		G_B3_0 = L_4;
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::get_CanResolveEntity()
extern "C"  bool XmlValidatingReader_get_CanResolveEntity_m282081771 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Int32 System.Xml.XmlValidatingReader::get_Depth()
extern "C"  int32_t XmlValidatingReader_get_Depth_m2789143630 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_6();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_1);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Xml.EntityHandling System.Xml.XmlValidatingReader::get_EntityHandling()
extern "C"  int32_t XmlValidatingReader_get_EntityHandling_m3276362566 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_entityHandling_3();
		return L_0;
	}
}
// System.Void System.Xml.XmlValidatingReader::set_EntityHandling(System.Xml.EntityHandling)
extern "C"  void XmlValidatingReader_set_EntityHandling_m2734813455 (XmlValidatingReader_t1719295192 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_entityHandling_3(L_0);
		DTDValidatingReader_t3946379043 * L_1 = __this->get_dtdReader_11();
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		DTDValidatingReader_t3946379043 * L_2 = __this->get_dtdReader_11();
		int32_t L_3 = ___value0;
		NullCheck(L_2);
		DTDValidatingReader_set_EntityHandling_m3201559656(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::get_EOF()
extern "C"  bool XmlValidatingReader_get_EOF_m3706696912 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_6();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.XmlReader::get_EOF() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_001c:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::get_HasValue()
extern "C"  bool XmlValidatingReader_get_HasValue_m1628917442 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_6();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XmlReader::get_HasValue() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_001c:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::get_IsDefault()
extern "C"  bool XmlValidatingReader_get_IsDefault_m1076375084 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_6();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean System.Xml.XmlReader::get_IsDefault() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_001c:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::get_IsEmptyElement()
extern "C"  bool XmlValidatingReader_get_IsEmptyElement_m3829672649 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_6();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_001c:
	{
		return (bool)G_B3_0;
	}
}
// System.Int32 System.Xml.XmlValidatingReader::get_LineNumber()
extern "C"  int32_t XmlValidatingReader_get_LineNumber_m4160044902 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_LineNumber_m4160044902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean System.Xml.XmlValidatingReader::get_IsDefault() */, __this);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_6();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_3);
		G_B5_0 = L_4;
		goto IL_002b;
	}

IL_002a:
	{
		G_B5_0 = 0;
	}

IL_002b:
	{
		return G_B5_0;
	}
}
// System.Int32 System.Xml.XmlValidatingReader::get_LinePosition()
extern "C"  int32_t XmlValidatingReader_get_LinePosition_m2821670432 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_LinePosition_m2821670432_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean System.Xml.XmlValidatingReader::get_IsDefault() */, __this);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_6();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Xml.IXmlLineInfo::get_LinePosition() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_3);
		G_B5_0 = L_4;
		goto IL_002b;
	}

IL_002a:
	{
		G_B5_0 = 0;
	}

IL_002b:
	{
		return G_B5_0;
	}
}
// System.String System.Xml.XmlValidatingReader::get_LocalName()
extern "C"  String_t* XmlValidatingReader_get_LocalName_m3935686416 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_LocalName_m3935686416_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_1;
	}

IL_0011:
	{
		bool L_2 = XmlValidatingReader_get_Namespaces_m3935643757(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		XmlReader_t3121518892 * L_3 = __this->get_validatingReader_6();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_3);
		return L_4;
	}

IL_0028:
	{
		XmlReader_t3121518892 * L_5 = __this->get_validatingReader_6();
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_Name() */, L_5);
		return L_6;
	}
}
// System.String System.Xml.XmlValidatingReader::get_Name()
extern "C"  String_t* XmlValidatingReader_get_Name_m2521889568 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_Name_m2521889568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_1;
		goto IL_0020;
	}

IL_0015:
	{
		XmlReader_t3121518892 * L_2 = __this->get_validatingReader_6();
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_Name() */, L_2);
		G_B3_0 = L_3;
	}

IL_0020:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::get_Namespaces()
extern "C"  bool XmlValidatingReader_get_Namespaces_m3935643757 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_xmlTextReader_5();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t4233384356 * L_1 = __this->get_xmlTextReader_5();
		NullCheck(L_1);
		bool L_2 = XmlTextReader_get_Namespaces_m3871412690(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		return (bool)1;
	}
}
// System.String System.Xml.XmlValidatingReader::get_NamespaceURI()
extern "C"  String_t* XmlValidatingReader_get_NamespaceURI_m606176985 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_NamespaceURI_m606176985_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_1;
	}

IL_0011:
	{
		bool L_2 = XmlValidatingReader_get_Namespaces_m3935643757(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		XmlReader_t3121518892 * L_3 = __this->get_validatingReader_6();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_3);
		return L_4;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_5;
	}
}
// System.Xml.XmlNameTable System.Xml.XmlValidatingReader::get_NameTable()
extern "C"  XmlNameTable_t71772148 * XmlValidatingReader_get_NameTable_m386478333 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	XmlNameTable_t71772148 * G_B3_0 = NULL;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		XmlReader_t3121518892 * L_1 = __this->get_sourceReader_4();
		NullCheck(L_1);
		XmlNameTable_t71772148 * L_2 = VirtFuncInvoker0< XmlNameTable_t71772148 * >::Invoke(20 /* System.Xml.XmlNameTable System.Xml.XmlReader::get_NameTable() */, L_1);
		G_B3_0 = L_2;
		goto IL_0026;
	}

IL_001b:
	{
		XmlReader_t3121518892 * L_3 = __this->get_validatingReader_6();
		NullCheck(L_3);
		XmlNameTable_t71772148 * L_4 = VirtFuncInvoker0< XmlNameTable_t71772148 * >::Invoke(20 /* System.Xml.XmlNameTable System.Xml.XmlReader::get_NameTable() */, L_3);
		G_B3_0 = L_4;
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlValidatingReader::get_NodeType()
extern "C"  int32_t XmlValidatingReader_get_NodeType_m2271835609 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_6();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_001c:
	{
		return (int32_t)(G_B3_0);
	}
}
// System.String System.Xml.XmlValidatingReader::get_Prefix()
extern "C"  String_t* XmlValidatingReader_get_Prefix_m754810542 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_Prefix_m754810542_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_1;
		goto IL_0020;
	}

IL_0015:
	{
		XmlReader_t3121518892 * L_2 = __this->get_validatingReader_6();
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(22 /* System.String System.Xml.XmlReader::get_Prefix() */, L_2);
		G_B3_0 = L_3;
	}

IL_0020:
	{
		return G_B3_0;
	}
}
// System.Xml.ReadState System.Xml.XmlValidatingReader::get_ReadState()
extern "C"  int32_t XmlValidatingReader_get_ReadState_m483710833 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000d:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_6();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, L_1);
		return L_2;
	}
}
// System.Xml.XmlResolver System.Xml.XmlValidatingReader::get_Resolver()
extern "C"  XmlResolver_t626023767 * XmlValidatingReader_get_Resolver_m1269208747 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t4233384356 * L_0 = __this->get_xmlTextReader_5();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t4233384356 * L_1 = __this->get_xmlTextReader_5();
		NullCheck(L_1);
		XmlResolver_t626023767 * L_2 = XmlTextReader_get_Resolver_m258955197(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		bool L_3 = __this->get_resolverSpecified_8();
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		XmlResolver_t626023767 * L_4 = __this->get_resolver_7();
		return L_4;
	}

IL_0029:
	{
		return (XmlResolver_t626023767 *)NULL;
	}
}
// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReader::get_Schemas()
extern "C"  XmlSchemaCollection_t3610399789 * XmlValidatingReader_get_Schemas_m1542506967 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_Schemas_m1542506967_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlSchemaCollection_t3610399789 * L_0 = __this->get_schemas_10();
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		XmlNameTable_t71772148 * L_1 = VirtFuncInvoker0< XmlNameTable_t71772148 * >::Invoke(20 /* System.Xml.XmlNameTable System.Xml.XmlValidatingReader::get_NameTable() */, __this);
		XmlSchemaCollection_t3610399789 * L_2 = (XmlSchemaCollection_t3610399789 *)il2cpp_codegen_object_new(XmlSchemaCollection_t3610399789_il2cpp_TypeInfo_var);
		XmlSchemaCollection__ctor_m3228921192(L_2, L_1, /*hidden argument*/NULL);
		__this->set_schemas_10(L_2);
	}

IL_001c:
	{
		XmlSchemaCollection_t3610399789 * L_3 = __this->get_schemas_10();
		return L_3;
	}
}
// System.Xml.XmlReaderSettings System.Xml.XmlValidatingReader::get_Settings()
extern "C"  XmlReaderSettings_t2186285234 * XmlValidatingReader_get_Settings_m4192388192 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	XmlReaderSettings_t2186285234 * G_B3_0 = NULL;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		XmlReader_t3121518892 * L_1 = __this->get_sourceReader_4();
		NullCheck(L_1);
		XmlReaderSettings_t2186285234 * L_2 = VirtFuncInvoker0< XmlReaderSettings_t2186285234 * >::Invoke(25 /* System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings() */, L_1);
		G_B3_0 = L_2;
		goto IL_0026;
	}

IL_001b:
	{
		XmlReader_t3121518892 * L_3 = __this->get_validatingReader_6();
		NullCheck(L_3);
		XmlReaderSettings_t2186285234 * L_4 = VirtFuncInvoker0< XmlReaderSettings_t2186285234 * >::Invoke(25 /* System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings() */, L_3);
		G_B3_0 = L_4;
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.Xml.ValidationType System.Xml.XmlValidatingReader::get_ValidationType()
extern "C"  int32_t XmlValidatingReader_get_ValidationType_m768883523 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_validationType_9();
		return L_0;
	}
}
// System.Void System.Xml.XmlValidatingReader::set_ValidationType(System.Xml.ValidationType)
extern "C"  void XmlValidatingReader_set_ValidationType_m3850545770 (XmlValidatingReader_t1719295192 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_set_ValidationType_m3850545770_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Xml.ReadState System.Xml.XmlValidatingReader::get_ReadState() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral224365628, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,XmlValidatingReader_set_ValidationType_m3850545770_RuntimeMethod_var);
	}

IL_0016:
	{
		int32_t L_2 = __this->get_validationType_9();
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_003c;
			}
			case 3:
			{
				goto IL_0048;
			}
			case 4:
			{
				goto IL_003c;
			}
		}
	}
	{
		goto IL_004e;
	}

IL_003c:
	{
		int32_t L_4 = ___value0;
		__this->set_validationType_9(L_4);
		goto IL_004e;
	}

IL_0048:
	{
		NotSupportedException_t1314879016 * L_5 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,XmlValidatingReader_set_ValidationType_m3850545770_RuntimeMethod_var);
	}

IL_004e:
	{
		return;
	}
}
// System.String System.Xml.XmlValidatingReader::get_Value()
extern "C"  String_t* XmlValidatingReader_get_Value_m2511111829 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_Value_m2511111829_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_1;
		goto IL_0020;
	}

IL_0015:
	{
		XmlReader_t3121518892 * L_2 = __this->get_validatingReader_6();
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_2);
		G_B3_0 = L_3;
	}

IL_0020:
	{
		return G_B3_0;
	}
}
// System.String System.Xml.XmlValidatingReader::get_XmlLang()
extern "C"  String_t* XmlValidatingReader_get_XmlLang_m869989634 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_get_XmlLang_m869989634_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_1;
		goto IL_0020;
	}

IL_0015:
	{
		XmlReader_t3121518892 * L_2 = __this->get_validatingReader_6();
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Xml.XmlReader::get_XmlLang() */, L_2);
		G_B3_0 = L_3;
	}

IL_0020:
	{
		return G_B3_0;
	}
}
// System.Xml.XmlSpace System.Xml.XmlValidatingReader::get_XmlSpace()
extern "C"  int32_t XmlValidatingReader_get_XmlSpace_m58584745 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001c;
	}

IL_0011:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_6();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Xml.XmlSpace System.Xml.XmlReader::get_XmlSpace() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_001c:
	{
		return (int32_t)(G_B3_0);
	}
}
// System.Void System.Xml.XmlValidatingReader::Close()
extern "C"  void XmlValidatingReader_Close_m24546856 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		XmlReader_t3121518892 * L_1 = __this->get_sourceReader_4();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(29 /* System.Void System.Xml.XmlReader::Close() */, L_1);
		goto IL_0026;
	}

IL_001b:
	{
		XmlReader_t3121518892 * L_2 = __this->get_validatingReader_6();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(29 /* System.Void System.Xml.XmlReader::Close() */, L_2);
	}

IL_0026:
	{
		return;
	}
}
// System.String System.Xml.XmlValidatingReader::GetAttribute(System.Int32)
extern "C"  String_t* XmlValidatingReader_GetAttribute_m580377592 (XmlValidatingReader_t1719295192 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_GetAttribute_m580377592_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IndexOutOfRangeException_t1578797820 * L_1 = (IndexOutOfRangeException_t1578797820 *)il2cpp_codegen_object_new(IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3408750441(L_1, _stringLiteral349273836, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,XmlValidatingReader_GetAttribute_m580377592_RuntimeMethod_var);
	}

IL_0016:
	{
		XmlReader_t3121518892 * L_2 = __this->get_validatingReader_6();
		int32_t L_3 = ___i0;
		NullCheck(L_2);
		String_t* L_4 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(14 /* System.String System.Xml.XmlReader::get_Item(System.Int32) */, L_2, L_3);
		return L_4;
	}
}
// System.String System.Xml.XmlValidatingReader::GetAttribute(System.String)
extern "C"  String_t* XmlValidatingReader_GetAttribute_m1372195914 (XmlValidatingReader_t1719295192 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	String_t* G_B3_0 = NULL;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_001d;
	}

IL_0011:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_6();
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		String_t* L_3 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_Item(System.String) */, L_1, L_2);
		G_B3_0 = L_3;
	}

IL_001d:
	{
		return G_B3_0;
	}
}
// System.String System.Xml.XmlValidatingReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XmlValidatingReader_GetAttribute_m2636608846 (XmlValidatingReader_t1719295192 * __this, String_t* ___localName0, String_t* ___namespaceName1, const RuntimeMethod* method)
{
	String_t* G_B3_0 = NULL;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_001e;
	}

IL_0011:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_6();
		String_t* L_2 = ___localName0;
		String_t* L_3 = ___namespaceName1;
		NullCheck(L_1);
		String_t* L_4 = VirtFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_Item(System.String,System.String) */, L_1, L_2, L_3);
		G_B3_0 = L_4;
	}

IL_001e:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::HasLineInfo()
extern "C"  bool XmlValidatingReader_HasLineInfo_m870518869 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_HasLineInfo_m870518869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean System.Xml.IXmlLineInfo::HasLineInfo() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		return (bool)G_B3_0;
	}
}
// System.String System.Xml.XmlValidatingReader::LookupNamespace(System.String)
extern "C"  String_t* XmlValidatingReader_LookupNamespace_m1366491815 (XmlValidatingReader_t1719295192 * __this, String_t* ___prefix0, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_6();
		String_t* L_2 = ___prefix0;
		NullCheck(L_1);
		String_t* L_3 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(34 /* System.String System.Xml.XmlReader::LookupNamespace(System.String) */, L_1, L_2);
		return L_3;
	}

IL_0018:
	{
		XmlReader_t3121518892 * L_4 = __this->get_sourceReader_4();
		String_t* L_5 = ___prefix0;
		NullCheck(L_4);
		String_t* L_6 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(34 /* System.String System.Xml.XmlReader::LookupNamespace(System.String) */, L_4, L_5);
		return L_6;
	}
}
// System.Void System.Xml.XmlValidatingReader::MoveToAttribute(System.Int32)
extern "C"  void XmlValidatingReader_MoveToAttribute_m565086185 (XmlValidatingReader_t1719295192 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_MoveToAttribute_m565086185_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IndexOutOfRangeException_t1578797820 * L_1 = (IndexOutOfRangeException_t1578797820 *)il2cpp_codegen_object_new(IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3408750441(L_1, _stringLiteral349273836, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,XmlValidatingReader_MoveToAttribute_m565086185_RuntimeMethod_var);
	}

IL_0016:
	{
		XmlReader_t3121518892 * L_2 = __this->get_validatingReader_6();
		int32_t L_3 = ___i0;
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32) */, L_2, L_3);
		return;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::MoveToAttribute(System.String)
extern "C"  bool XmlValidatingReader_MoveToAttribute_m2298075513 (XmlValidatingReader_t1719295192 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_6();
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		bool L_3 = VirtFuncInvoker1< bool, String_t* >::Invoke(36 /* System.Boolean System.Xml.XmlReader::MoveToAttribute(System.String) */, L_1, L_2);
		return L_3;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlValidatingReader_MoveToAttribute_m3515077069 (XmlValidatingReader_t1719295192 * __this, String_t* ___localName0, String_t* ___namespaceName1, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_6();
		String_t* L_2 = ___localName0;
		String_t* L_3 = ___namespaceName1;
		NullCheck(L_1);
		bool L_4 = VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(37 /* System.Boolean System.Xml.XmlReader::MoveToAttribute(System.String,System.String) */, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::MoveToElement()
extern "C"  bool XmlValidatingReader_MoveToElement_m2423364559 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_6();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_1);
		return L_2;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::MoveToFirstAttribute()
extern "C"  bool XmlValidatingReader_MoveToFirstAttribute_m3181606727 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_6();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Xml.XmlReader::MoveToFirstAttribute() */, L_1);
		return L_2;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::MoveToNextAttribute()
extern "C"  bool XmlValidatingReader_MoveToNextAttribute_m3038240404 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_6();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(41 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_1);
		return L_2;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::Read()
extern "C"  bool XmlValidatingReader_Read_m3555356476 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_Read_m3555356476_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XsdValidatingReader_t3961132625 * V_0 = NULL;
	int32_t V_1 = 0;
	DTDValidatingReader_t3946379043 * V_2 = NULL;
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_1 = XmlValidatingReader_get_ValidationType_m768883523(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0031;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_00ed;
			}
			case 4:
			{
				goto IL_0067;
			}
		}
	}
	{
		goto IL_00f3;
	}

IL_0031:
	{
		goto IL_0067;
	}

IL_0036:
	{
		XmlReader_t3121518892 * L_3 = __this->get_sourceReader_4();
		DTDValidatingReader_t3946379043 * L_4 = (DTDValidatingReader_t3946379043 *)il2cpp_codegen_object_new(DTDValidatingReader_t3946379043_il2cpp_TypeInfo_var);
		DTDValidatingReader__ctor_m3400285377(L_4, L_3, __this, /*hidden argument*/NULL);
		DTDValidatingReader_t3946379043 * L_5 = L_4;
		V_2 = L_5;
		__this->set_dtdReader_11(L_5);
		DTDValidatingReader_t3946379043 * L_6 = V_2;
		__this->set_validatingReader_6(L_6);
		DTDValidatingReader_t3946379043 * L_7 = __this->get_dtdReader_11();
		XmlResolver_t626023767 * L_8 = XmlValidatingReader_get_Resolver_m1269208747(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		DTDValidatingReader_set_XmlResolver_m3887196702(L_7, L_8, /*hidden argument*/NULL);
		goto IL_00f3;
	}

IL_0067:
	{
		XmlReader_t3121518892 * L_9 = __this->get_sourceReader_4();
		DTDValidatingReader_t3946379043 * L_10 = (DTDValidatingReader_t3946379043 *)il2cpp_codegen_object_new(DTDValidatingReader_t3946379043_il2cpp_TypeInfo_var);
		DTDValidatingReader__ctor_m3400285377(L_10, L_9, __this, /*hidden argument*/NULL);
		__this->set_dtdReader_11(L_10);
		DTDValidatingReader_t3946379043 * L_11 = __this->get_dtdReader_11();
		XsdValidatingReader_t3961132625 * L_12 = (XsdValidatingReader_t3961132625 *)il2cpp_codegen_object_new(XsdValidatingReader_t3961132625_il2cpp_TypeInfo_var);
		XsdValidatingReader__ctor_m1875465247(L_12, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		XsdValidatingReader_t3961132625 * L_13 = V_0;
		XsdValidatingReader_t3961132625 * L_14 = L_13;
		NullCheck(L_14);
		ValidationEventHandler_t791314227 * L_15 = L_14->get_ValidationEventHandler_29();
		intptr_t L_16 = (intptr_t)XmlValidatingReader_OnValidationEvent_m367061793_RuntimeMethod_var;
		ValidationEventHandler_t791314227 * L_17 = (ValidationEventHandler_t791314227 *)il2cpp_codegen_object_new(ValidationEventHandler_t791314227_il2cpp_TypeInfo_var);
		ValidationEventHandler__ctor_m2945978529(L_17, __this, L_16, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_18 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->set_ValidationEventHandler_29(((ValidationEventHandler_t791314227 *)CastclassSealed((RuntimeObject*)L_18, ValidationEventHandler_t791314227_il2cpp_TypeInfo_var)));
		XsdValidatingReader_t3961132625 * L_19 = V_0;
		int32_t L_20 = XmlValidatingReader_get_ValidationType_m768883523(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		XsdValidatingReader_set_ValidationType_m2062431012(L_19, L_20, /*hidden argument*/NULL);
		XsdValidatingReader_t3961132625 * L_21 = V_0;
		XmlSchemaCollection_t3610399789 * L_22 = XmlValidatingReader_get_Schemas_m1542506967(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		XmlSchemaSet_t266093086 * L_23 = XmlSchemaCollection_get_SchemaSet_m2053221801(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		XsdValidatingReader_set_Schemas_m1687221862(L_21, L_23, /*hidden argument*/NULL);
		XsdValidatingReader_t3961132625 * L_24 = V_0;
		XmlResolver_t626023767 * L_25 = XmlValidatingReader_get_Resolver_m1269208747(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		XsdValidatingReader_set_XmlResolver_m2067506225(L_24, L_25, /*hidden argument*/NULL);
		XsdValidatingReader_t3961132625 * L_26 = V_0;
		__this->set_validatingReader_6(L_26);
		DTDValidatingReader_t3946379043 * L_27 = __this->get_dtdReader_11();
		XmlResolver_t626023767 * L_28 = XmlValidatingReader_get_Resolver_m1269208747(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		DTDValidatingReader_set_XmlResolver_m3887196702(L_27, L_28, /*hidden argument*/NULL);
		goto IL_00f3;
	}

IL_00ed:
	{
		NotSupportedException_t1314879016 * L_29 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29,XmlValidatingReader_Read_m3555356476_RuntimeMethod_var);
	}

IL_00f3:
	{
		XmlReader_t3121518892 * L_30 = __this->get_validatingReader_6();
		__this->set_schemaInfo_12(((RuntimeObject*)IsInst((RuntimeObject*)L_30, IHasXmlSchemaInfo_t74872415_il2cpp_TypeInfo_var)));
	}

IL_0104:
	{
		XmlReader_t3121518892 * L_31 = __this->get_validatingReader_6();
		NullCheck(L_31);
		bool L_32 = VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean System.Xml.XmlReader::Read() */, L_31);
		return L_32;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::ReadAttributeValue()
extern "C"  bool XmlValidatingReader_ReadAttributeValue_m2604418746 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		XmlReader_t3121518892 * L_1 = __this->get_validatingReader_6();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(43 /* System.Boolean System.Xml.XmlReader::ReadAttributeValue() */, L_1);
		return L_2;
	}
}
// System.String System.Xml.XmlValidatingReader::ReadString()
extern "C"  String_t* XmlValidatingReader_ReadString_m1922510696 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = XmlReader_ReadString_m4051384055(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Xml.XmlValidatingReader::ResolveEntity()
extern "C"  void XmlValidatingReader_ResolveEntity_m513506040 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_validatingReader_6();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(51 /* System.Void System.Xml.XmlReader::ResolveEntity() */, L_0);
		return;
	}
}
// System.Void System.Xml.XmlValidatingReader::OnValidationEvent(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C"  void XmlValidatingReader_OnValidationEvent_m367061793 (XmlValidatingReader_t1719295192 * __this, RuntimeObject * ___o0, ValidationEventArgs_t2784773869 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReader_OnValidationEvent_m367061793_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValidationEventHandler_t791314227 * L_0 = __this->get_ValidationEventHandler_14();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		ValidationEventHandler_t791314227 * L_1 = __this->get_ValidationEventHandler_14();
		RuntimeObject * L_2 = ___o0;
		ValidationEventArgs_t2784773869 * L_3 = ___e1;
		NullCheck(L_1);
		ValidationEventHandler_Invoke_m3984227947(L_1, L_2, L_3, /*hidden argument*/NULL);
		goto IL_003a;
	}

IL_001d:
	{
		int32_t L_4 = XmlValidatingReader_get_ValidationType_m768883523(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		ValidationEventArgs_t2784773869 * L_5 = ___e1;
		NullCheck(L_5);
		int32_t L_6 = ValidationEventArgs_get_Severity_m1798521934(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		ValidationEventArgs_t2784773869 * L_7 = ___e1;
		NullCheck(L_7);
		XmlSchemaException_t3511258692 * L_8 = ValidationEventArgs_get_Exception_m2119547120(L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8,XmlValidatingReader_OnValidationEvent_m367061793_RuntimeMethod_var);
	}

IL_003a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlWhitespace::.ctor(System.String,System.Xml.XmlDocument)
extern "C"  void XmlWhitespace__ctor_m949230574 (XmlWhitespace_t131741354 * __this, String_t* ___strData0, XmlDocument_t2837193595 * ___doc1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___strData0;
		XmlDocument_t2837193595 * L_1 = ___doc1;
		XmlCharacterData__ctor_m3935345337(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XmlWhitespace::get_LocalName()
extern "C"  String_t* XmlWhitespace_get_LocalName_m4124641324 (XmlWhitespace_t131741354 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_get_LocalName_m4124641324_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1653520728;
	}
}
// System.String System.Xml.XmlWhitespace::get_Name()
extern "C"  String_t* XmlWhitespace_get_Name_m3062444240 (XmlWhitespace_t131741354 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_get_Name_m3062444240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1653520728;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlWhitespace::get_NodeType()
extern "C"  int32_t XmlWhitespace_get_NodeType_m4071479963 (XmlWhitespace_t131741354 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)13));
	}
}
// System.String System.Xml.XmlWhitespace::get_Value()
extern "C"  String_t* XmlWhitespace_get_Value_m3008068225 (XmlWhitespace_t131741354 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(38 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		return L_0;
	}
}
// System.Void System.Xml.XmlWhitespace::set_Value(System.String)
extern "C"  void XmlWhitespace_set_Value_m1380309567 (XmlWhitespace_t131741354 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_set_Value_m1380309567_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t3816087079_il2cpp_TypeInfo_var);
		bool L_1 = XmlChar_IsWhitespace_m2421104119(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral3922471879, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,XmlWhitespace_set_Value_m1380309567_RuntimeMethod_var);
	}

IL_0016:
	{
		String_t* L_3 = ___value0;
		VirtActionInvoker1< String_t* >::Invoke(39 /* System.Void System.Xml.XmlCharacterData::set_Data(System.String) */, __this, L_3);
		return;
	}
}
// System.Xml.XmlNode System.Xml.XmlWhitespace::get_ParentNode()
extern "C"  XmlNode_t3767805227 * XmlWhitespace_get_ParentNode_m3161215339 (XmlWhitespace_t131741354 * __this, const RuntimeMethod* method)
{
	{
		XmlNode_t3767805227 * L_0 = XmlNode_get_ParentNode_m3304904414(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.XmlNode System.Xml.XmlWhitespace::CloneNode(System.Boolean)
extern "C"  XmlNode_t3767805227 * XmlWhitespace_CloneNode_m2585972626 (XmlWhitespace_t131741354 * __this, bool ___deep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_CloneNode_m2585972626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(38 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		XmlDocument_t2837193595 * L_1 = VirtFuncInvoker0< XmlDocument_t2837193595 * >::Invoke(20 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		XmlWhitespace_t131741354 * L_2 = (XmlWhitespace_t131741354 *)il2cpp_codegen_object_new(XmlWhitespace_t131741354_il2cpp_TypeInfo_var);
		XmlWhitespace__ctor_m949230574(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlWriter::.ctor()
extern "C"  void XmlWriter__ctor_m2782267819 (XmlWriter_t127905479 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriter::System.IDisposable.Dispose()
extern "C"  void XmlWriter_System_IDisposable_Dispose_m1610106051 (XmlWriter_t127905479 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void System.Xml.XmlWriter::Dispose(System.Boolean) */, __this, (bool)0);
		return;
	}
}
// System.Xml.XmlWriterSettings System.Xml.XmlWriter::get_Settings()
extern "C"  XmlWriterSettings_t3314986516 * XmlWriter_get_Settings_m164933578 (XmlWriter_t127905479 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriter_get_Settings_m164933578_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlWriterSettings_t3314986516 * L_0 = __this->get_settings_0();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		XmlWriterSettings_t3314986516 * L_1 = (XmlWriterSettings_t3314986516 *)il2cpp_codegen_object_new(XmlWriterSettings_t3314986516_il2cpp_TypeInfo_var);
		XmlWriterSettings__ctor_m2465852079(L_1, /*hidden argument*/NULL);
		__this->set_settings_0(L_1);
	}

IL_0016:
	{
		XmlWriterSettings_t3314986516 * L_2 = __this->get_settings_0();
		return L_2;
	}
}
// System.String System.Xml.XmlWriter::get_XmlLang()
extern "C"  String_t* XmlWriter_get_XmlLang_m3841313567 (XmlWriter_t127905479 * __this, const RuntimeMethod* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Xml.XmlSpace System.Xml.XmlWriter::get_XmlSpace()
extern "C"  int32_t XmlWriter_get_XmlSpace_m866999307 (XmlWriter_t127905479 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Void System.Xml.XmlWriter::Dispose(System.Boolean)
extern "C"  void XmlWriter_Dispose_m3961600049 (XmlWriter_t127905479 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(9 /* System.Void System.Xml.XmlWriter::Close() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttribute(System.Xml.XmlReader,System.Boolean)
extern "C"  void XmlWriter_WriteAttribute_m3614493714 (XmlWriter_t127905479 * __this, XmlReader_t3121518892 * ___reader0, bool ___defattr1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = ___defattr1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		XmlReader_t3121518892 * L_1 = ___reader0;
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean System.Xml.XmlReader::get_IsDefault() */, L_1);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		XmlReader_t3121518892 * L_3 = ___reader0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(22 /* System.String System.Xml.XmlReader::get_Prefix() */, L_3);
		XmlReader_t3121518892 * L_5 = ___reader0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_5);
		XmlReader_t3121518892 * L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_7);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(23 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, __this, L_4, L_6, L_8);
		goto IL_0071;
	}

IL_002f:
	{
		XmlReader_t3121518892 * L_9 = ___reader0;
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_9);
		V_0 = L_10;
		int32_t L_11 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)3)))
		{
			case 0:
			{
				goto IL_004f;
			}
			case 1:
			{
				goto IL_0071;
			}
			case 2:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0071;
	}

IL_004f:
	{
		XmlReader_t3121518892 * L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_12);
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_13);
		goto IL_0071;
	}

IL_0060:
	{
		XmlReader_t3121518892 * L_14 = ___reader0;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_Name() */, L_14);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void System.Xml.XmlWriter::WriteEntityRef(System.String) */, __this, L_15);
		goto IL_0071;
	}

IL_0071:
	{
		XmlReader_t3121518892 * L_16 = ___reader0;
		NullCheck(L_16);
		bool L_17 = VirtFuncInvoker0< bool >::Invoke(43 /* System.Boolean System.Xml.XmlReader::ReadAttributeValue() */, L_16);
		if (L_17)
		{
			goto IL_002f;
		}
	}
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String)
extern "C"  void XmlWriter_WriteAttributeString_m400667381 (XmlWriter_t127905479 * __this, String_t* ___localName0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriter_WriteAttributeString_m400667381_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		String_t* L_1 = ___localName0;
		String_t* L_2 = ___value1;
		XmlWriter_WriteAttributeString_m2341773285(__this, L_0, L_1, (String_t*)NULL, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String,System.String)
extern "C"  void XmlWriter_WriteAttributeString_m2341773285 (XmlWriter_t127905479 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___ns2, String_t* ___value3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___prefix0;
		String_t* L_1 = ___localName1;
		String_t* L_2 = ___ns2;
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(23 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, __this, L_0, L_1, L_2);
		String_t* L_3 = ___value3;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_4 = ___value3;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_6 = ___value3;
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_6);
	}

IL_0025:
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteElementString(System.String,System.String)
extern "C"  void XmlWriter_WriteElementString_m3431189080 (XmlWriter_t127905479 * __this, String_t* ___localName0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		XmlWriter_WriteStartElement_m1499083124(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___value1;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2 = ___value1;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_4 = ___value1;
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_4);
	}

IL_0020:
	{
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteQualifiedName(System.String,System.String)
extern "C"  void XmlWriter_WriteQualifiedName_m434158451 (XmlWriter_t127905479 * __this, String_t* ___localName0, String_t* ___ns1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		String_t* L_1 = ___ns1;
		XmlWriter_WriteQualifiedNameInternal_m2017981185(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteQualifiedNameInternal(System.String,System.String)
extern "C"  void XmlWriter_WriteQualifiedNameInternal_m2017981185 (XmlWriter_t127905479 * __this, String_t* ___localName0, String_t* ___ns1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriter_WriteQualifiedNameInternal_m2017981185_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* G_B12_0 = NULL;
	{
		String_t* L_0 = ___localName0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1 = ___localName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}

IL_0016:
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3698743796(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4,XmlWriter_WriteQualifiedNameInternal_m2017981185_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_5 = ___ns1;
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___ns1 = L_6;
	}

IL_0029:
	{
		XmlWriterSettings_t3314986516 * L_7 = VirtFuncInvoker0< XmlWriterSettings_t3314986516 * >::Invoke(5 /* System.Xml.XmlWriterSettings System.Xml.XmlWriter::get_Settings() */, __this);
		NullCheck(L_7);
		int32_t L_8 = XmlWriterSettings_get_ConformanceLevel_m2619815559(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)2)))
		{
			goto IL_0048;
		}
	}
	{
		goto IL_0054;
	}

IL_0048:
	{
		String_t* L_11 = ___localName0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		XmlConvert_VerifyNCName_m3085528481(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		goto IL_0054;
	}

IL_0054:
	{
		String_t* L_12 = ___ns1;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m3847582255(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_14 = ___ns1;
		String_t* L_15 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(12 /* System.String System.Xml.XmlWriter::LookupPrefix(System.String) */, __this, L_14);
		G_B12_0 = L_15;
		goto IL_0071;
	}

IL_006c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B12_0 = L_16;
	}

IL_0071:
	{
		V_0 = G_B12_0;
		String_t* L_17 = V_0;
		if (L_17)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_18 = ___ns1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2384487702, L_18, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_20 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_20, L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20,XmlWriter_WriteQualifiedNameInternal_m2017981185_RuntimeMethod_var);
	}

IL_0089:
	{
		String_t* L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_23 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00b7;
		}
	}
	{
		String_t* L_24 = V_0;
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_24);
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, _stringLiteral3452614550);
		String_t* L_25 = ___localName0;
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_25);
		goto IL_00be;
	}

IL_00b7:
	{
		String_t* L_26 = ___localName0;
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_26);
	}

IL_00be:
	{
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean)
extern "C"  void XmlWriter_WriteNode_m263666930 (XmlWriter_t127905479 * __this, XmlReader_t3121518892 * ___reader0, bool ___defattr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriter_WriteNode_m263666930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		XmlReader_t3121518892 * L_0 = ___reader0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3698743796(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,XmlWriter_WriteNode_m263666930_RuntimeMethod_var);
	}

IL_000c:
	{
		XmlReader_t3121518892 * L_2 = ___reader0;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, L_2);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		XmlReader_t3121518892 * L_4 = ___reader0;
		NullCheck(L_4);
		VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean System.Xml.XmlReader::Read() */, L_4);
	}

IL_001e:
	{
		XmlReader_t3121518892 * L_5 = ___reader0;
		bool L_6 = ___defattr1;
		VirtActionInvoker2< XmlReader_t3121518892 *, bool >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean) */, __this, L_5, L_6);
		XmlReader_t3121518892 * L_7 = ___reader0;
		NullCheck(L_7);
		bool L_8 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.XmlReader::get_EOF() */, L_7);
		if (!L_8)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_0032:
	{
		XmlReader_t3121518892 * L_9 = ___reader0;
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_9);
		V_2 = L_10;
		int32_t L_11 = V_2;
		switch (L_11)
		{
			case 0:
			{
				goto IL_01db;
			}
			case 1:
			{
				goto IL_008c;
			}
			case 2:
			{
				goto IL_012c;
			}
			case 3:
			{
				goto IL_012d;
			}
			case 4:
			{
				goto IL_013e;
			}
			case 5:
			{
				goto IL_014f;
			}
			case 6:
			{
				goto IL_01e0;
			}
			case 7:
			{
				goto IL_0160;
			}
			case 8:
			{
				goto IL_0177;
			}
			case 9:
			{
				goto IL_01e0;
			}
			case 10:
			{
				goto IL_0188;
			}
			case 11:
			{
				goto IL_01e0;
			}
			case 12:
			{
				goto IL_01e0;
			}
			case 13:
			{
				goto IL_01ba;
			}
			case 14:
			{
				goto IL_01b5;
			}
			case 15:
			{
				goto IL_01cb;
			}
			case 16:
			{
				goto IL_01d6;
			}
			case 17:
			{
				goto IL_0160;
			}
		}
	}
	{
		goto IL_01e0;
	}

IL_008c:
	{
		XmlReader_t3121518892 * L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(22 /* System.String System.Xml.XmlReader::get_Prefix() */, L_12);
		XmlReader_t3121518892 * L_14 = ___reader0;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_14);
		XmlReader_t3121518892 * L_16 = ___reader0;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_16);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, __this, L_13, L_15, L_17);
		XmlReader_t3121518892 * L_18 = ___reader0;
		NullCheck(L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Xml.XmlReader::get_HasAttributes() */, L_18);
		if (!L_19)
		{
			goto IL_00dc;
		}
	}
	{
		V_0 = 0;
		goto IL_00c9;
	}

IL_00b6:
	{
		XmlReader_t3121518892 * L_20 = ___reader0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32) */, L_20, L_21);
		XmlReader_t3121518892 * L_22 = ___reader0;
		bool L_23 = ___defattr1;
		XmlWriter_WriteAttribute_m3614493714(__this, L_22, L_23, /*hidden argument*/NULL);
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00c9:
	{
		int32_t L_25 = V_0;
		XmlReader_t3121518892 * L_26 = ___reader0;
		NullCheck(L_26);
		int32_t L_27 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, L_26);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_00b6;
		}
	}
	{
		XmlReader_t3121518892 * L_28 = ___reader0;
		NullCheck(L_28);
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_28);
	}

IL_00dc:
	{
		XmlReader_t3121518892 * L_29 = ___reader0;
		NullCheck(L_29);
		bool L_30 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_29);
		if (!L_30)
		{
			goto IL_00f2;
		}
	}
	{
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, __this);
		goto IL_0127;
	}

IL_00f2:
	{
		XmlReader_t3121518892 * L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_31);
		V_1 = L_32;
		XmlReader_t3121518892 * L_33 = ___reader0;
		NullCheck(L_33);
		VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean System.Xml.XmlReader::Read() */, L_33);
		XmlReader_t3121518892 * L_34 = ___reader0;
		NullCheck(L_34);
		int32_t L_35 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_34);
		if ((((int32_t)L_35) == ((int32_t)((int32_t)15))))
		{
			goto IL_0121;
		}
	}

IL_010d:
	{
		XmlReader_t3121518892 * L_36 = ___reader0;
		bool L_37 = ___defattr1;
		VirtActionInvoker2< XmlReader_t3121518892 *, bool >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean) */, __this, L_36, L_37);
		int32_t L_38 = V_1;
		XmlReader_t3121518892 * L_39 = ___reader0;
		NullCheck(L_39);
		int32_t L_40 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_39);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_010d;
		}
	}

IL_0121:
	{
		VirtActionInvoker0::Invoke(19 /* System.Void System.Xml.XmlWriter::WriteFullEndElement() */, __this);
	}

IL_0127:
	{
		goto IL_0218;
	}

IL_012c:
	{
		return;
	}

IL_012d:
	{
		XmlReader_t3121518892 * L_41 = ___reader0;
		NullCheck(L_41);
		String_t* L_42 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_41);
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_42);
		goto IL_0218;
	}

IL_013e:
	{
		XmlReader_t3121518892 * L_43 = ___reader0;
		NullCheck(L_43);
		String_t* L_44 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_43);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Xml.XmlWriter::WriteCData(System.String) */, __this, L_44);
		goto IL_0218;
	}

IL_014f:
	{
		XmlReader_t3121518892 * L_45 = ___reader0;
		NullCheck(L_45);
		String_t* L_46 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_Name() */, L_45);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void System.Xml.XmlWriter::WriteEntityRef(System.String) */, __this, L_46);
		goto IL_0218;
	}

IL_0160:
	{
		XmlReader_t3121518892 * L_47 = ___reader0;
		NullCheck(L_47);
		String_t* L_48 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_Name() */, L_47);
		XmlReader_t3121518892 * L_49 = ___reader0;
		NullCheck(L_49);
		String_t* L_50 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_49);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Xml.XmlWriter::WriteProcessingInstruction(System.String,System.String) */, __this, L_48, L_50);
		goto IL_0218;
	}

IL_0177:
	{
		XmlReader_t3121518892 * L_51 = ___reader0;
		NullCheck(L_51);
		String_t* L_52 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_51);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.Xml.XmlWriter::WriteComment(System.String) */, __this, L_52);
		goto IL_0218;
	}

IL_0188:
	{
		XmlReader_t3121518892 * L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_Name() */, L_53);
		XmlReader_t3121518892 * L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_Item(System.String) */, L_55, _stringLiteral3984887517);
		XmlReader_t3121518892 * L_57 = ___reader0;
		NullCheck(L_57);
		String_t* L_58 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_Item(System.String) */, L_57, _stringLiteral3261774195);
		XmlReader_t3121518892 * L_59 = ___reader0;
		NullCheck(L_59);
		String_t* L_60 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_59);
		VirtActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(15 /* System.Void System.Xml.XmlWriter::WriteDocType(System.String,System.String,System.String,System.String) */, __this, L_54, L_56, L_58, L_60);
		goto IL_0218;
	}

IL_01b5:
	{
		goto IL_01ba;
	}

IL_01ba:
	{
		XmlReader_t3121518892 * L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_61);
		VirtActionInvoker1< String_t* >::Invoke(27 /* System.Void System.Xml.XmlWriter::WriteWhitespace(System.String) */, __this, L_62);
		goto IL_0218;
	}

IL_01cb:
	{
		VirtActionInvoker0::Invoke(19 /* System.Void System.Xml.XmlWriter::WriteFullEndElement() */, __this);
		goto IL_0218;
	}

IL_01d6:
	{
		goto IL_0218;
	}

IL_01db:
	{
		goto IL_0218;
	}

IL_01e0:
	{
		ObjectU5BU5D_t2843939325* L_63 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, _stringLiteral1152083996);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1152083996);
		ObjectU5BU5D_t2843939325* L_64 = L_63;
		XmlReader_t3121518892 * L_65 = ___reader0;
		NullCheck(L_65);
		String_t* L_66 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::get_Name() */, L_65);
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, L_66);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_66);
		ObjectU5BU5D_t2843939325* L_67 = L_64;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, _stringLiteral3442940761);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3442940761);
		ObjectU5BU5D_t2843939325* L_68 = L_67;
		XmlReader_t3121518892 * L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_69);
		int32_t L_71 = L_70;
		RuntimeObject * L_72 = Box(XmlNodeType_t1672767151_il2cpp_TypeInfo_var, &L_71);
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_72);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_72);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_73 = String_Concat_m2971454694(NULL /*static, unused*/, L_68, /*hidden argument*/NULL);
		XmlException_t1761730631 * L_74 = (XmlException_t1761730631 *)il2cpp_codegen_object_new(XmlException_t1761730631_il2cpp_TypeInfo_var);
		XmlException__ctor_m3751204500(L_74, L_73, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_74,XmlWriter_WriteNode_m263666930_RuntimeMethod_var);
	}

IL_0218:
	{
		XmlReader_t3121518892 * L_75 = ___reader0;
		NullCheck(L_75);
		VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean System.Xml.XmlReader::Read() */, L_75);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String)
extern "C"  void XmlWriter_WriteStartAttribute_m2509241395 (XmlWriter_t127905479 * __this, String_t* ___localName0, String_t* ___ns1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		String_t* L_1 = ___ns1;
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(23 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, __this, (String_t*)NULL, L_0, L_1);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String)
extern "C"  void XmlWriter_WriteStartElement_m1499083124 (XmlWriter_t127905479 * __this, String_t* ___localName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, __this, (String_t*)NULL, L_0, (String_t*)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlWriterSettings::.ctor()
extern "C"  void XmlWriterSettings__ctor_m2465852079 (XmlWriterSettings_t3314986516 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		XmlWriterSettings_Reset_m4105849431(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriterSettings::Reset()
extern "C"  void XmlWriterSettings_Reset_m4105849431 (XmlWriterSettings_t3314986516 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriterSettings_Reset_m4105849431_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_checkCharacters_0((bool)1);
		__this->set_closeOutput_1((bool)0);
		__this->set_conformance_2(2);
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_0 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_encoding_3(L_0);
		__this->set_indent_4((bool)0);
		__this->set_indentChars_5(_stringLiteral3450517376);
		String_t* L_1 = Environment_get_NewLine_m3211016485(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_newLineChars_6(L_1);
		__this->set_newLineOnAttributes_7((bool)0);
		__this->set_newLineHandling_8(2);
		__this->set_omitXmlDeclaration_9((bool)0);
		__this->set_outputMethod_10(3);
		return;
	}
}
// System.Xml.ConformanceLevel System.Xml.XmlWriterSettings::get_ConformanceLevel()
extern "C"  int32_t XmlWriterSettings_get_ConformanceLevel_m2619815559 (XmlWriterSettings_t3314986516 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_conformance_2();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
