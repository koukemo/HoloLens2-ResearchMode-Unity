#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<RosSharp.Urdf.Plugin,System.Boolean>
struct Func_2_t62148C2BAFD36B7AC6CEFCDF70FDCB96BB968DD5;
// System.Func`2<UnityEngine.Resolution,System.Int32>
struct Func_2_t4B545306240B3BDEFEA30C08A7D8623B196B5894;
// System.Func`2<RosSharp.Urdf.UrdfPlugin,RosSharp.Urdf.Plugin>
struct Func_2_tDB0F2F729A086C2B8F1B89D19A1F0F373335917C;
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF;
// Windows.Foundation.IAsyncOperation`1<System.UInt32>
struct IAsyncOperation_1_tDF3123F2E9343D6DBBFE6A5D008A395E62CE246A;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<RosSharp.Urdf.Plugin>
struct IEnumerable_1_t54FD63A84476C99F0256DC76B76B842B75A4C2ED;
// System.Collections.Generic.IEnumerable`1<RosSharp.Urdf.UrdfPlugin>
struct IEnumerable_1_tE0D2D123E9FC074FE0BAAAB12B69303FFC49E083;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<RosSharp.Urdf.Plugin>
struct List_1_t9AA65034F7CE4079EBBA817F8802438FAF03E9DA;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.MeshCollider[]
struct MeshColliderU5BU5D_tF9453F8094ED9F1421E6FB2286A5737C28A1EE79;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// RosSharp.Urdf.Plugin[]
struct PluginU5BU5D_tD38F835D1EA4838E7678A553C15FC9A587DCE72F;
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// RosSharp.Urdf.UrdfInertial[]
struct UrdfInertialU5BU5D_tE74D5B2C8E6857D11AC1940DBA018DD3A739F472;
// RosSharp.Urdf.UrdfJoint[]
struct UrdfJointU5BU5D_tE2C561EACF3FE6E8C5978658CD7CB5ADC582E8BB;
// RosSharp.Urdf.UrdfPlugin[]
struct UrdfPluginU5BU5D_tB12D0FBB1D18781C071791B4E6EF597120EEFD41;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// RosSharp.RosBridgeClient.MessageTypes.Sensor.CompressedImage
struct CompressedImage_tD761DA115A79254BA980C494792F926F9FB4F639;
// Windows.Storage.Streams.DataReader
struct DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E;
// Windows.Storage.Streams.DataWriter
struct DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21;
// Windows.Storage.Streams.DataWriterStoreOperation
struct DataWriterStoreOperation_tAB8CDEF471A0A5F5354E753953E1510E142C827C;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Xml.DomNameTable
struct DomNameTable_tE88EEF20D313A83C002E18FFF7688CC74A2D1CAB;
// System.Xml.EmptyEnumerator
struct EmptyEnumerator_t138901A02D453E19CDE87DFD96981F8A98928E13;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// RosSharp.RosBridgeClient.HL2CameraPublisher
struct HL2CameraPublisher_tB1C84964EE7CB72118B83EC8FEB0695B63EA6F6D;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// Windows.Networking.HostName
struct HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5;
// IActivationFactory
struct Il2CppIActivationFactory;
// Windows.Foundation.IAsyncAction
struct IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// Windows.Storage.Streams.IDataReaderFactory
struct IDataReaderFactory_tA5B6ABAE2AF4C0F70F96795640D438CE24C042C6;
// Windows.Storage.Streams.IDataReaderStatics
struct IDataReaderStatics_tFE8138B86EAD9D8A90505840047FB0B8F5CB990C;
// Windows.Storage.Streams.IDataWriterFactory
struct IDataWriterFactory_t838AB4676F0275099D25845574782A85A519A339;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Windows.Networking.IHostNameFactory
struct IHostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668;
// Windows.Networking.IHostNameStatics
struct IHostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377;
// Windows.Storage.Streams.IInputStream
struct IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2;
// Windows.Storage.Streams.IOutputStream
struct IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD;
// Windows.Networking.Sockets.IStreamSocketStatics
struct IStreamSocketStatics_tA115EC5AB4320D93EF262522A9BCA64460D93BD0;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_tC697CEDEA24AC6EF87E998BF72B96EDBD84DB229;
// UnityEngine.Joint
struct Joint_t085126F36196FC982700F4EA8466CF10C90EC15E;
// RosSharp.RosBridgeClient.Log
struct Log_t8646360F03B7F45B22EF5EEFD7100C86EC3DFFA6;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MeshCollider
struct MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// RosSharp.Urdf.Origin
struct Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225;
// RosSharp.Urdf.Plugin
struct Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// RosSharp.RosBridgeClient.RosConnector
struct RosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839;
// RosSharp.RosBridgeClient.RosSocket
struct RosSocket_t86C619E57C04D8887582FA6494A35492B0CD5B33;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Xml.Schema.SchemaInfo
struct SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5;
// Windows.Networking.Sockets.StreamSocket
struct StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// TCPClient
struct TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// RosSharp.Urdf.UrdfInertial
struct UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A;
// RosSharp.Urdf.UrdfJoint
struct UrdfJoint_t579DFEB5752FB8D571991AA28D6EF709000E5996;
// RosSharp.Urdf.UrdfLink
struct UrdfLink_t82E0AE7CFF5AAA8752AC2776B508F475621980B4;
// RosSharp.Urdf.UrdfPlugin
struct UrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690;
// RosSharp.Urdf.UrdfPlugins
struct UrdfPlugins_tA1653922BA04BE88F719546442B44167B09422F2;
// RosSharp.Urdf.UrdfRobot
struct UrdfRobot_t1F5CE295269BAA777893BE455369BB26C7E9712A;
// RosSharp.Urdf.UrdfVisual
struct UrdfVisual_t07A61D7DB13D485D0C2E3E9623CDD85E1AC0EC4E;
// RosSharp.Urdf.UrdfVisuals
struct UrdfVisuals_t55734538E0449503C5F9B4322ED1AE05A16DE626;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WebCamTexture
struct WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62;
// System.Xml.XmlDocument
struct XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F;
// System.Xml.XmlImplementation
struct XmlImplementation_tE66EA5FEAE495F36B03F697C51E4815D4B5D1D59;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9;
// System.Xml.XmlResolver
struct XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t7CE09F2ECFA8C5EB28DF4724C87EC50B539699E0;
// ros_connector_enable
struct ros_connector_enable_tCEA6FEF1FEBFD7DF90CBAF4A0177F8E3664A821C;
// HLCameraAccess/<>c
struct U3CU3Ec_t3DEC1919CA9119C41BDEAE3A6FFE290111D57AD8;
// RosSharp.RosBridgeClient.Actionlib.UnityFibonacciActionSever/<>c
struct U3CU3Ec_t266B799279B56E423B242D44468C18D2AC57075A;
// RosSharp.Urdf.UrdfPlugins/<>c
struct U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862;

IL2CPP_EXTERN_C RuntimeClass* DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t62148C2BAFD36B7AC6CEFCDF70FDCB96BB968DD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDB0F2F729A086C2B8F1B89D19A1F0F373335917C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketErrorStatus_tACE77FB3A6ABF51D62DD9B95BF3AD084E3CA8612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t266B799279B56E423B242D44468C18D2AC57075A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3DEC1919CA9119C41BDEAE3A6FFE290111D57AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E2E5285337A011CF0FAA1D241125F91B85B43CB;
IL2CPP_EXTERN_C String_t* _stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0;
IL2CPP_EXTERN_C String_t* _stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C String_t* _stringLiteralDC648DA3297D06299B89CFD936903E43D7C25B32;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A_m56B82019D4EFF61B2E908A4E967F79755C69E2AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B_m7DF35F3D0F349A08FF672EFCBFCFDE330A5C8322_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC_mEB1393223D11C43B561AED9783FB1F619EDB9389_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141_mBBF077C2AF315B25009BB8DB7B4D7980DBC374D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A_m25EA64C2B1A70948690905AB812B8B2AEE48C06E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B_m3D3F36E875DC1EF5271CF9620D06143E7B81118D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC_mF30B99097F976CFC61FF0ED5AF4A99351EC7E9B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141_mC8FDA1134E403C8AD6A0ECB6397EED37A2882AAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E_mEA42F36DF36FCF285682790D48DEC001E07490F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m6BFDC225E11C553446E7F957E257B00A79BF63D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m4B7CE88739C1B159238F3EB3FA43B8174F750BA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisUrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A_m49F6AEDCBE3E260313CF0D3780099F15A021F9EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisUrdfJoint_t579DFEB5752FB8D571991AA28D6EF709000E5996_m908637D38CBE965DBB4D04CBB4BC62B7C97AE61F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisUrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690_m83B69F6E20F86FCA4225EF2A63C76277AED2B866_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisUrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690_TisPlugin_t269455CC6FF76038399ED2E022EF65D16F407D67_mD243E3A3DE752CC47B85961F9B8A9D321EDE9793_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisPlugin_t269455CC6FF76038399ED2E022EF65D16F407D67_m9BE1CCDD116392CFC03E7F22E10F94C5C5CE0E9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisPlugin_t269455CC6FF76038399ED2E022EF65D16F407D67_m97ED8F6E2DB4669CCC7EE74197CCAD877B7E818B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m027A30434C02F0A1EBAF27737D773D9ADFED3C11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m661DEEF8E1C72C0FF8680E47B6AC0EF9FAA6FA58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m120FCBEE13619C117A142639F2E0544A6CBD6DD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mAB346F6617AB74E3830B9706D945B24C692EF5D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mD3F63584DCDE15485460C3EA9086ED3ECD2D03A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690_m7EACAC1A10364CE3EA183B0C024EC35731D7000F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUrdfPlugins_tA1653922BA04BE88F719546442B44167B09422F2_m11B0C64FCA016136DA0ABAADA7E41BAFCF647C25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisHL2CameraPublisher_tB1C84964EE7CB72118B83EC8FEB0695B63EA6F6D_m623C6F56A657F7D4B1E644C36FF05F153869F631_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839_mA6D9F57D295E0247914848496E379541A1FA0F86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD99562CA3082752AFB65CF949100AAD6CA780431_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CExportPluginsDataU3Eb__1_0_mF8AD33592A69B12C9D6DD8D0A4A2F4410D084FC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CExportPluginsDataU3Eb__1_1_m51D2C8E264F4FAC62788169AB15EA8F131F17A95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB07613CE857075BEAD679A7DF37A6C99100AC47D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mABBAB86FD9F33AA30FCEA00286EBB81DB7937D84_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IAsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper;
struct IAsyncOperation_1_tDF3123F2E9343D6DBBFE6A5D008A395E62CE246A;
struct IDataReader_t3B076AC15B5E88F90890FB6B01A6266D5A6090B8;
struct IDataWriter_tE58739AC5E08CA4AC2746F8209F994EB511A936E;
struct IHostName_tE33210DDCAFFA71D0FE0DBA437A7550525ACBFFF;
struct IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2;
struct IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD;
struct IStreamSocket_t0E008C9F045995E4093D8489E302BFD0DE46517E;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct MeshColliderU5BU5D_tF9453F8094ED9F1421E6FB2286A5737C28A1EE79;
struct RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B;
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
struct UrdfInertialU5BU5D_tE74D5B2C8E6857D11AC1940DBA018DD3A739F472;
struct UrdfJointU5BU5D_tE2C561EACF3FE6E8C5978658CD7CB5ADC582E8BB;
struct UrdfPluginU5BU5D_tB12D0FBB1D18781C071791B4E6EF597120EEFD41;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct NOVTABLE IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m7656E1FBD07F1A33A8BABCA2DFC7FB61231A0958(IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mF8AED96C1879988554BA949E0718A6174C3117F5(IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m33CB8132B6D0D81238F6BE90A9D3F1F13AB422AD(bool* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.UInt32>
struct NOVTABLE IAsyncOperation_1_tDF3123F2E9343D6DBBFE6A5D008A395E62CE246A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_mC7C94BF5E03D8C5AA20FF9BE77223E1ECE3B0BD4(IAsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m27E355E8C0523DE3F33321676087FB75E057B44A(IAsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m28613513B6F3DE14AC503BC914AFF74AEC8E4CEC(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncAction
struct NOVTABLE IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_put_Completed_m153FFA20288B2A12135D5E31F5E321CB7C7C32A4(IAsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_get_Completed_mEEA8DB3EB0D4FE9F33A54B6A16D65902B70DCB39(IAsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_GetResults_mD06D8F02D7793FED272208F851EF8A2D9B25FE38() = 0;
};
// Windows.Storage.Streams.IDataReaderFactory
struct NOVTABLE IDataReaderFactory_tA5B6ABAE2AF4C0F70F96795640D438CE24C042C6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataReaderFactory_CreateDataReader_m2F8B9A3539E5AF8550015738C6CAEC791DE71825(IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2* ___inputStream0, IDataReader_t3B076AC15B5E88F90890FB6B01A6266D5A6090B8** comReturnValue) = 0;
};
// Windows.Storage.Streams.IDataReaderStatics
struct NOVTABLE IDataReaderStatics_tFE8138B86EAD9D8A90505840047FB0B8F5CB990C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataReaderStatics_U24__Stripped0_FromBuffer_m1185527CFB7A5E2C030E7D637CFF76335A526866() = 0;
};
// Windows.Storage.Streams.IDataWriterFactory
struct NOVTABLE IDataWriterFactory_t838AB4676F0275099D25845574782A85A519A339 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataWriterFactory_CreateDataWriter_m703D07B63530060094C66B2BE2E99C9292C364F5(IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD* ___outputStream0, IDataWriter_tE58739AC5E08CA4AC2746F8209F994EB511A936E** comReturnValue) = 0;
};
// Windows.Networking.IHostNameFactory
struct NOVTABLE IHostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostNameFactory_CreateHostName_m72B504C34111DE6E15C44D1615BA0B6F2E976355(Il2CppHString ___hostName0, IHostName_tE33210DDCAFFA71D0FE0DBA437A7550525ACBFFF** comReturnValue) = 0;
};
// Windows.Networking.IHostNameStatics
struct NOVTABLE IHostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostNameStatics_U24__Stripped0_Compare_m6AFE1DC3964B02DBE3A93B9513A231C553B68FBD() = 0;
};
// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_U24__Stripped0_ReadAsync_m0B2A2BBC0A51EAF4E70BD904E37F5008163DE8DC() = 0;
};
// Windows.Storage.Streams.IOutputStream
struct NOVTABLE IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IOutputStream_U24__Stripped0_WriteAsync_mBBB7B881747EC7F2D2955EF1105321CFFCB46352() = 0;
	virtual il2cpp_hresult_t STDCALL IOutputStream_U24__Stripped1_FlushAsync_mA26207F8F3DF784A859D4DE976F5FA58D12DE119() = 0;
};
// Windows.Networking.Sockets.IStreamSocketStatics
struct NOVTABLE IStreamSocketStatics_tA115EC5AB4320D93EF262522A9BCA64460D93BD0 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocketStatics_U24__Stripped0_GetEndpointPairsAsync_mEB1EC91BCFE2498211F777A6B0DF66C0E189ACAE() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketStatics_U24__Stripped1_GetEndpointPairsAsync_m5CE6A473BDBEF10C35931DC9C1819FF71CF9730F() = 0;
};

// System.Object


// System.Collections.Generic.List`1<RosSharp.Urdf.Plugin>
struct List_1_t9AA65034F7CE4079EBBA817F8802438FAF03E9DA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PluginU5BU5D_tD38F835D1EA4838E7678A553C15FC9A587DCE72F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9AA65034F7CE4079EBBA817F8802438FAF03E9DA, ____items_1)); }
	inline PluginU5BU5D_tD38F835D1EA4838E7678A553C15FC9A587DCE72F* get__items_1() const { return ____items_1; }
	inline PluginU5BU5D_tD38F835D1EA4838E7678A553C15FC9A587DCE72F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PluginU5BU5D_tD38F835D1EA4838E7678A553C15FC9A587DCE72F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9AA65034F7CE4079EBBA817F8802438FAF03E9DA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9AA65034F7CE4079EBBA817F8802438FAF03E9DA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9AA65034F7CE4079EBBA817F8802438FAF03E9DA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9AA65034F7CE4079EBBA817F8802438FAF03E9DA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PluginU5BU5D_tD38F835D1EA4838E7678A553C15FC9A587DCE72F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9AA65034F7CE4079EBBA817F8802438FAF03E9DA_StaticFields, ____emptyArray_5)); }
	inline PluginU5BU5D_tD38F835D1EA4838E7678A553C15FC9A587DCE72F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PluginU5BU5D_tD38F835D1EA4838E7678A553C15FC9A587DCE72F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PluginU5BU5D_tD38F835D1EA4838E7678A553C15FC9A587DCE72F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// RosSharp.Urdf.Origin
struct Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225  : public RuntimeObject
{
public:
	// System.Double[] RosSharp.Urdf.Origin::Xyz
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___Xyz_0;
	// System.Double[] RosSharp.Urdf.Origin::Rpy
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___Rpy_1;

public:
	inline static int32_t get_offset_of_Xyz_0() { return static_cast<int32_t>(offsetof(Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225, ___Xyz_0)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_Xyz_0() const { return ___Xyz_0; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_Xyz_0() { return &___Xyz_0; }
	inline void set_Xyz_0(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___Xyz_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Xyz_0), (void*)value);
	}

	inline static int32_t get_offset_of_Rpy_1() { return static_cast<int32_t>(offsetof(Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225, ___Rpy_1)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_Rpy_1() const { return ___Rpy_1; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_Rpy_1() { return &___Rpy_1; }
	inline void set_Rpy_1(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___Rpy_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Rpy_1), (void*)value);
	}
};


// RosSharp.Urdf.Plugin
struct Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67  : public RuntimeObject
{
public:
	// System.String RosSharp.Urdf.Plugin::text
	String_t* ___text_0;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_0), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// RosSharp.Urdf.UrdfOrigin
struct UrdfOrigin_t85A51047C9B67100F4644D8CCBA005E778654012  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Xml.XmlNode
struct XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1  : public RuntimeObject
{
public:
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * ___parentNode_0;

public:
	inline static int32_t get_offset_of_parentNode_0() { return static_cast<int32_t>(offsetof(XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1, ___parentNode_0)); }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * get_parentNode_0() const { return ___parentNode_0; }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 ** get_address_of_parentNode_0() { return &___parentNode_0; }
	inline void set_parentNode_0(XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * value)
	{
		___parentNode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentNode_0), (void*)value);
	}
};


// System.__Il2CppComObject


// HLCameraAccess/<>c
struct U3CU3Ec_t3DEC1919CA9119C41BDEAE3A6FFE290111D57AD8  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3DEC1919CA9119C41BDEAE3A6FFE290111D57AD8_StaticFields
{
public:
	// HLCameraAccess/<>c HLCameraAccess/<>c::<>9
	U3CU3Ec_t3DEC1919CA9119C41BDEAE3A6FFE290111D57AD8 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Resolution,System.Int32> HLCameraAccess/<>c::<>9__3_0
	Func_2_t4B545306240B3BDEFEA30C08A7D8623B196B5894 * ___U3CU3E9__3_0_1;
	// System.Func`2<UnityEngine.Resolution,System.Int32> HLCameraAccess/<>c::<>9__5_0
	Func_2_t4B545306240B3BDEFEA30C08A7D8623B196B5894 * ___U3CU3E9__5_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3DEC1919CA9119C41BDEAE3A6FFE290111D57AD8_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3DEC1919CA9119C41BDEAE3A6FFE290111D57AD8 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3DEC1919CA9119C41BDEAE3A6FFE290111D57AD8 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3DEC1919CA9119C41BDEAE3A6FFE290111D57AD8 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3DEC1919CA9119C41BDEAE3A6FFE290111D57AD8_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Func_2_t4B545306240B3BDEFEA30C08A7D8623B196B5894 * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Func_2_t4B545306240B3BDEFEA30C08A7D8623B196B5894 ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Func_2_t4B545306240B3BDEFEA30C08A7D8623B196B5894 * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3DEC1919CA9119C41BDEAE3A6FFE290111D57AD8_StaticFields, ___U3CU3E9__5_0_2)); }
	inline Func_2_t4B545306240B3BDEFEA30C08A7D8623B196B5894 * get_U3CU3E9__5_0_2() const { return ___U3CU3E9__5_0_2; }
	inline Func_2_t4B545306240B3BDEFEA30C08A7D8623B196B5894 ** get_address_of_U3CU3E9__5_0_2() { return &___U3CU3E9__5_0_2; }
	inline void set_U3CU3E9__5_0_2(Func_2_t4B545306240B3BDEFEA30C08A7D8623B196B5894 * value)
	{
		___U3CU3E9__5_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_2), (void*)value);
	}
};


// RosSharp.RosBridgeClient.Actionlib.UnityFibonacciActionSever/<>c
struct U3CU3Ec_t266B799279B56E423B242D44468C18D2AC57075A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t266B799279B56E423B242D44468C18D2AC57075A_StaticFields
{
public:
	// RosSharp.RosBridgeClient.Actionlib.UnityFibonacciActionSever/<>c RosSharp.RosBridgeClient.Actionlib.UnityFibonacciActionSever/<>c::<>9
	U3CU3Ec_t266B799279B56E423B242D44468C18D2AC57075A * ___U3CU3E9_0;
	// RosSharp.RosBridgeClient.Log RosSharp.RosBridgeClient.Actionlib.UnityFibonacciActionSever/<>c::<>9__5_0
	Log_t8646360F03B7F45B22EF5EEFD7100C86EC3DFFA6 * ___U3CU3E9__5_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t266B799279B56E423B242D44468C18D2AC57075A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t266B799279B56E423B242D44468C18D2AC57075A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t266B799279B56E423B242D44468C18D2AC57075A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t266B799279B56E423B242D44468C18D2AC57075A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t266B799279B56E423B242D44468C18D2AC57075A_StaticFields, ___U3CU3E9__5_0_1)); }
	inline Log_t8646360F03B7F45B22EF5EEFD7100C86EC3DFFA6 * get_U3CU3E9__5_0_1() const { return ___U3CU3E9__5_0_1; }
	inline Log_t8646360F03B7F45B22EF5EEFD7100C86EC3DFFA6 ** get_address_of_U3CU3E9__5_0_1() { return &___U3CU3E9__5_0_1; }
	inline void set_U3CU3E9__5_0_1(Log_t8646360F03B7F45B22EF5EEFD7100C86EC3DFFA6 * value)
	{
		___U3CU3E9__5_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_1), (void*)value);
	}
};


// RosSharp.Urdf.UrdfPlugins/<>c
struct U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_StaticFields
{
public:
	// RosSharp.Urdf.UrdfPlugins/<>c RosSharp.Urdf.UrdfPlugins/<>c::<>9
	U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862 * ___U3CU3E9_0;
	// System.Func`2<RosSharp.Urdf.UrdfPlugin,RosSharp.Urdf.Plugin> RosSharp.Urdf.UrdfPlugins/<>c::<>9__1_0
	Func_2_tDB0F2F729A086C2B8F1B89D19A1F0F373335917C * ___U3CU3E9__1_0_1;
	// System.Func`2<RosSharp.Urdf.Plugin,System.Boolean> RosSharp.Urdf.UrdfPlugins/<>c::<>9__1_1
	Func_2_t62148C2BAFD36B7AC6CEFCDF70FDCB96BB968DD5 * ___U3CU3E9__1_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_2_tDB0F2F729A086C2B8F1B89D19A1F0F373335917C * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_2_tDB0F2F729A086C2B8F1B89D19A1F0F373335917C ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_2_tDB0F2F729A086C2B8F1B89D19A1F0F373335917C * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_StaticFields, ___U3CU3E9__1_1_2)); }
	inline Func_2_t62148C2BAFD36B7AC6CEFCDF70FDCB96BB968DD5 * get_U3CU3E9__1_1_2() const { return ___U3CU3E9__1_1_2; }
	inline Func_2_t62148C2BAFD36B7AC6CEFCDF70FDCB96BB968DD5 ** get_address_of_U3CU3E9__1_1_2() { return &___U3CU3E9__1_1_2; }
	inline void set_U3CU3E9__1_1_2(Func_2_t62148C2BAFD36B7AC6CEFCDF70FDCB96BB968DD5 * value)
	{
		___U3CU3E9__1_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_1_2), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<RosSharp.Urdf.Plugin>
struct Enumerator_t69C5C222CE7C41D212421CE44C01CC2ACBC740EC 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t9AA65034F7CE4079EBBA817F8802438FAF03E9DA * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t69C5C222CE7C41D212421CE44C01CC2ACBC740EC, ___list_0)); }
	inline List_1_t9AA65034F7CE4079EBBA817F8802438FAF03E9DA * get_list_0() const { return ___list_0; }
	inline List_1_t9AA65034F7CE4079EBBA817F8802438FAF03E9DA ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t9AA65034F7CE4079EBBA817F8802438FAF03E9DA * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t69C5C222CE7C41D212421CE44C01CC2ACBC740EC, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t69C5C222CE7C41D212421CE44C01CC2ACBC740EC, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t69C5C222CE7C41D212421CE44C01CC2ACBC740EC, ___current_3)); }
	inline Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 * get_current_3() const { return ___current_3; }
	inline Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>
struct TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C, ___m_task_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>
struct TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865, ___m_task_0)); }
	inline Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// Windows.Storage.Streams.DataReader
struct DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E  : public Il2CppComObject
{
public:

public:
};

struct DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.Streams.IDataReaderFactory
	IDataReaderFactory_tA5B6ABAE2AF4C0F70F96795640D438CE24C042C6* ____idataReaderFactory_tA5B6ABAE2AF4C0F70F96795640D438CE24C042C6;
	// Cached pointer to Windows.Storage.Streams.IDataReaderStatics
	IDataReaderStatics_tFE8138B86EAD9D8A90505840047FB0B8F5CB990C* ____idataReaderStatics_tFE8138B86EAD9D8A90505840047FB0B8F5CB990C;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.Streams.DataReader"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IDataReaderFactory_tA5B6ABAE2AF4C0F70F96795640D438CE24C042C6* get_____idataReaderFactory_tA5B6ABAE2AF4C0F70F96795640D438CE24C042C6()
	{
		IDataReaderFactory_tA5B6ABAE2AF4C0F70F96795640D438CE24C042C6* returnValue = ____idataReaderFactory_tA5B6ABAE2AF4C0F70F96795640D438CE24C042C6;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDataReaderFactory_tA5B6ABAE2AF4C0F70F96795640D438CE24C042C6::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____idataReaderFactory_tA5B6ABAE2AF4C0F70F96795640D438CE24C042C6), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataReaderFactory_tA5B6ABAE2AF4C0F70F96795640D438CE24C042C6;
			}
		}
		return returnValue;
	}

	inline IDataReaderStatics_tFE8138B86EAD9D8A90505840047FB0B8F5CB990C* get_____idataReaderStatics_tFE8138B86EAD9D8A90505840047FB0B8F5CB990C()
	{
		IDataReaderStatics_tFE8138B86EAD9D8A90505840047FB0B8F5CB990C* returnValue = ____idataReaderStatics_tFE8138B86EAD9D8A90505840047FB0B8F5CB990C;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDataReaderStatics_tFE8138B86EAD9D8A90505840047FB0B8F5CB990C::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____idataReaderStatics_tFE8138B86EAD9D8A90505840047FB0B8F5CB990C), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataReaderStatics_tFE8138B86EAD9D8A90505840047FB0B8F5CB990C;
			}
		}
		return returnValue;
	}
};


// Windows.Storage.Streams.DataWriter
struct DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21  : public Il2CppComObject
{
public:

public:
};

struct DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21_StaticFields
{
public:
	// Cached pointer to Windows.Storage.Streams.IDataWriterFactory
	IDataWriterFactory_t838AB4676F0275099D25845574782A85A519A339* ____idataWriterFactory_t838AB4676F0275099D25845574782A85A519A339;
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;

public:
	inline IDataWriterFactory_t838AB4676F0275099D25845574782A85A519A339* get_____idataWriterFactory_t838AB4676F0275099D25845574782A85A519A339()
	{
		IDataWriterFactory_t838AB4676F0275099D25845574782A85A519A339* returnValue = ____idataWriterFactory_t838AB4676F0275099D25845574782A85A519A339;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDataWriterFactory_t838AB4676F0275099D25845574782A85A519A339::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____idataWriterFactory_t838AB4676F0275099D25845574782A85A519A339), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataWriterFactory_t838AB4676F0275099D25845574782A85A519A339;
			}
		}
		return returnValue;
	}

	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.Streams.DataWriter"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}
};


// Windows.Storage.Streams.DataWriterStoreOperation
struct DataWriterStoreOperation_tAB8CDEF471A0A5F5354E753953E1510E142C827C  : public Il2CppComObject
{
public:

public:
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// Windows.Networking.HostName
struct HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5  : public Il2CppComObject
{
public:

public:
};

struct HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.IHostNameFactory
	IHostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668* ____ihostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668;
	// Cached pointer to Windows.Networking.IHostNameStatics
	IHostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377* ____ihostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.HostName"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IHostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668* get_____ihostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668()
	{
		IHostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668* returnValue = ____ihostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____ihostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668;
			}
		}
		return returnValue;
	}

	inline IHostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377* get_____ihostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377()
	{
		IHostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377* returnValue = ____ihostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____ihostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377;
			}
		}
		return returnValue;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Resolution
struct Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 
{
public:
	// System.Int32 UnityEngine.Resolution::m_Width
	int32_t ___m_Width_0;
	// System.Int32 UnityEngine.Resolution::m_Height
	int32_t ___m_Height_1;
	// System.Int32 UnityEngine.Resolution::m_RefreshRate
	int32_t ___m_RefreshRate_2;

public:
	inline static int32_t get_offset_of_m_Width_0() { return static_cast<int32_t>(offsetof(Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767, ___m_Width_0)); }
	inline int32_t get_m_Width_0() const { return ___m_Width_0; }
	inline int32_t* get_address_of_m_Width_0() { return &___m_Width_0; }
	inline void set_m_Width_0(int32_t value)
	{
		___m_Width_0 = value;
	}

	inline static int32_t get_offset_of_m_Height_1() { return static_cast<int32_t>(offsetof(Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767, ___m_Height_1)); }
	inline int32_t get_m_Height_1() const { return ___m_Height_1; }
	inline int32_t* get_address_of_m_Height_1() { return &___m_Height_1; }
	inline void set_m_Height_1(int32_t value)
	{
		___m_Height_1 = value;
	}

	inline static int32_t get_offset_of_m_RefreshRate_2() { return static_cast<int32_t>(offsetof(Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767, ___m_RefreshRate_2)); }
	inline int32_t get_m_RefreshRate_2() const { return ___m_RefreshRate_2; }
	inline int32_t* get_address_of_m_RefreshRate_2() { return &___m_RefreshRate_2; }
	inline void set_m_RefreshRate_2(int32_t value)
	{
		___m_RefreshRate_2 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// Windows.Networking.Sockets.StreamSocket
struct StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921  : public Il2CppComObject
{
public:

public:
};

struct StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocketStatics
	IStreamSocketStatics_tA115EC5AB4320D93EF262522A9BCA64460D93BD0* ____istreamSocketStatics_tA115EC5AB4320D93EF262522A9BCA64460D93BD0;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.Sockets.StreamSocket"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStreamSocketStatics_tA115EC5AB4320D93EF262522A9BCA64460D93BD0* get_____istreamSocketStatics_tA115EC5AB4320D93EF262522A9BCA64460D93BD0()
	{
		IStreamSocketStatics_tA115EC5AB4320D93EF262522A9BCA64460D93BD0* returnValue = ____istreamSocketStatics_tA115EC5AB4320D93EF262522A9BCA64460D93BD0;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStreamSocketStatics_tA115EC5AB4320D93EF262522A9BCA64460D93BD0::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____istreamSocketStatics_tA115EC5AB4320D93EF262522A9BCA64460D93BD0), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocketStatics_tA115EC5AB4320D93EF262522A9BCA64460D93BD0;
			}
		}
		return returnValue;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};

// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Xml.XmlDocument
struct XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F  : public XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1
{
public:
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_tE66EA5FEAE495F36B03F697C51E4815D4B5D1D59 * ___implementation_1;
	// System.Xml.DomNameTable System.Xml.XmlDocument::domNameTable
	DomNameTable_tE88EEF20D313A83C002E18FFF7688CC74A2D1CAB * ___domNameTable_2;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastChild
	XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * ___lastChild_3;
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocument::entities
	XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 * ___entities_4;
	// System.Collections.Hashtable System.Xml.XmlDocument::htElementIdMap
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___htElementIdMap_5;
	// System.Collections.Hashtable System.Xml.XmlDocument::htElementIDAttrDecl
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___htElementIDAttrDecl_6;
	// System.Xml.Schema.SchemaInfo System.Xml.XmlDocument::schemaInfo
	SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5 * ___schemaInfo_7;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlDocument::schemas
	XmlSchemaSet_t7CE09F2ECFA8C5EB28DF4724C87EC50B539699E0 * ___schemas_8;
	// System.Boolean System.Xml.XmlDocument::reportValidity
	bool ___reportValidity_9;
	// System.Boolean System.Xml.XmlDocument::actualLoadingStatus
	bool ___actualLoadingStatus_10;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeInsertingDelegate
	XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * ___onNodeInsertingDelegate_11;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeInsertedDelegate
	XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * ___onNodeInsertedDelegate_12;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeRemovingDelegate
	XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * ___onNodeRemovingDelegate_13;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeRemovedDelegate
	XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * ___onNodeRemovedDelegate_14;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeChangingDelegate
	XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * ___onNodeChangingDelegate_15;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeChangedDelegate
	XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * ___onNodeChangedDelegate_16;
	// System.Boolean System.Xml.XmlDocument::fEntRefNodesPresent
	bool ___fEntRefNodesPresent_17;
	// System.Boolean System.Xml.XmlDocument::fCDataNodesPresent
	bool ___fCDataNodesPresent_18;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_19;
	// System.Boolean System.Xml.XmlDocument::isLoading
	bool ___isLoading_20;
	// System.String System.Xml.XmlDocument::strDocumentName
	String_t* ___strDocumentName_21;
	// System.String System.Xml.XmlDocument::strDocumentFragmentName
	String_t* ___strDocumentFragmentName_22;
	// System.String System.Xml.XmlDocument::strCommentName
	String_t* ___strCommentName_23;
	// System.String System.Xml.XmlDocument::strTextName
	String_t* ___strTextName_24;
	// System.String System.Xml.XmlDocument::strCDataSectionName
	String_t* ___strCDataSectionName_25;
	// System.String System.Xml.XmlDocument::strEntityName
	String_t* ___strEntityName_26;
	// System.String System.Xml.XmlDocument::strID
	String_t* ___strID_27;
	// System.String System.Xml.XmlDocument::strXmlns
	String_t* ___strXmlns_28;
	// System.String System.Xml.XmlDocument::strXml
	String_t* ___strXml_29;
	// System.String System.Xml.XmlDocument::strSpace
	String_t* ___strSpace_30;
	// System.String System.Xml.XmlDocument::strLang
	String_t* ___strLang_31;
	// System.String System.Xml.XmlDocument::strEmpty
	String_t* ___strEmpty_32;
	// System.String System.Xml.XmlDocument::strNonSignificantWhitespaceName
	String_t* ___strNonSignificantWhitespaceName_33;
	// System.String System.Xml.XmlDocument::strSignificantWhitespaceName
	String_t* ___strSignificantWhitespaceName_34;
	// System.String System.Xml.XmlDocument::strReservedXmlns
	String_t* ___strReservedXmlns_35;
	// System.String System.Xml.XmlDocument::strReservedXml
	String_t* ___strReservedXml_36;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_37;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A * ___resolver_38;
	// System.Boolean System.Xml.XmlDocument::bSetResolver
	bool ___bSetResolver_39;
	// System.Object System.Xml.XmlDocument::objLock
	RuntimeObject * ___objLock_40;

public:
	inline static int32_t get_offset_of_implementation_1() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___implementation_1)); }
	inline XmlImplementation_tE66EA5FEAE495F36B03F697C51E4815D4B5D1D59 * get_implementation_1() const { return ___implementation_1; }
	inline XmlImplementation_tE66EA5FEAE495F36B03F697C51E4815D4B5D1D59 ** get_address_of_implementation_1() { return &___implementation_1; }
	inline void set_implementation_1(XmlImplementation_tE66EA5FEAE495F36B03F697C51E4815D4B5D1D59 * value)
	{
		___implementation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___implementation_1), (void*)value);
	}

	inline static int32_t get_offset_of_domNameTable_2() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___domNameTable_2)); }
	inline DomNameTable_tE88EEF20D313A83C002E18FFF7688CC74A2D1CAB * get_domNameTable_2() const { return ___domNameTable_2; }
	inline DomNameTable_tE88EEF20D313A83C002E18FFF7688CC74A2D1CAB ** get_address_of_domNameTable_2() { return &___domNameTable_2; }
	inline void set_domNameTable_2(DomNameTable_tE88EEF20D313A83C002E18FFF7688CC74A2D1CAB * value)
	{
		___domNameTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___domNameTable_2), (void*)value);
	}

	inline static int32_t get_offset_of_lastChild_3() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___lastChild_3)); }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * get_lastChild_3() const { return ___lastChild_3; }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 ** get_address_of_lastChild_3() { return &___lastChild_3; }
	inline void set_lastChild_3(XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * value)
	{
		___lastChild_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastChild_3), (void*)value);
	}

	inline static int32_t get_offset_of_entities_4() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___entities_4)); }
	inline XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 * get_entities_4() const { return ___entities_4; }
	inline XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 ** get_address_of_entities_4() { return &___entities_4; }
	inline void set_entities_4(XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 * value)
	{
		___entities_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entities_4), (void*)value);
	}

	inline static int32_t get_offset_of_htElementIdMap_5() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___htElementIdMap_5)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_htElementIdMap_5() const { return ___htElementIdMap_5; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_htElementIdMap_5() { return &___htElementIdMap_5; }
	inline void set_htElementIdMap_5(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___htElementIdMap_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___htElementIdMap_5), (void*)value);
	}

	inline static int32_t get_offset_of_htElementIDAttrDecl_6() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___htElementIDAttrDecl_6)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_htElementIDAttrDecl_6() const { return ___htElementIDAttrDecl_6; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_htElementIDAttrDecl_6() { return &___htElementIDAttrDecl_6; }
	inline void set_htElementIDAttrDecl_6(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___htElementIDAttrDecl_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___htElementIDAttrDecl_6), (void*)value);
	}

	inline static int32_t get_offset_of_schemaInfo_7() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___schemaInfo_7)); }
	inline SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5 * get_schemaInfo_7() const { return ___schemaInfo_7; }
	inline SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5 ** get_address_of_schemaInfo_7() { return &___schemaInfo_7; }
	inline void set_schemaInfo_7(SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5 * value)
	{
		___schemaInfo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemaInfo_7), (void*)value);
	}

	inline static int32_t get_offset_of_schemas_8() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___schemas_8)); }
	inline XmlSchemaSet_t7CE09F2ECFA8C5EB28DF4724C87EC50B539699E0 * get_schemas_8() const { return ___schemas_8; }
	inline XmlSchemaSet_t7CE09F2ECFA8C5EB28DF4724C87EC50B539699E0 ** get_address_of_schemas_8() { return &___schemas_8; }
	inline void set_schemas_8(XmlSchemaSet_t7CE09F2ECFA8C5EB28DF4724C87EC50B539699E0 * value)
	{
		___schemas_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemas_8), (void*)value);
	}

	inline static int32_t get_offset_of_reportValidity_9() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___reportValidity_9)); }
	inline bool get_reportValidity_9() const { return ___reportValidity_9; }
	inline bool* get_address_of_reportValidity_9() { return &___reportValidity_9; }
	inline void set_reportValidity_9(bool value)
	{
		___reportValidity_9 = value;
	}

	inline static int32_t get_offset_of_actualLoadingStatus_10() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___actualLoadingStatus_10)); }
	inline bool get_actualLoadingStatus_10() const { return ___actualLoadingStatus_10; }
	inline bool* get_address_of_actualLoadingStatus_10() { return &___actualLoadingStatus_10; }
	inline void set_actualLoadingStatus_10(bool value)
	{
		___actualLoadingStatus_10 = value;
	}

	inline static int32_t get_offset_of_onNodeInsertingDelegate_11() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___onNodeInsertingDelegate_11)); }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * get_onNodeInsertingDelegate_11() const { return ___onNodeInsertingDelegate_11; }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 ** get_address_of_onNodeInsertingDelegate_11() { return &___onNodeInsertingDelegate_11; }
	inline void set_onNodeInsertingDelegate_11(XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * value)
	{
		___onNodeInsertingDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeInsertingDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_onNodeInsertedDelegate_12() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___onNodeInsertedDelegate_12)); }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * get_onNodeInsertedDelegate_12() const { return ___onNodeInsertedDelegate_12; }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 ** get_address_of_onNodeInsertedDelegate_12() { return &___onNodeInsertedDelegate_12; }
	inline void set_onNodeInsertedDelegate_12(XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * value)
	{
		___onNodeInsertedDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeInsertedDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_onNodeRemovingDelegate_13() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___onNodeRemovingDelegate_13)); }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * get_onNodeRemovingDelegate_13() const { return ___onNodeRemovingDelegate_13; }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 ** get_address_of_onNodeRemovingDelegate_13() { return &___onNodeRemovingDelegate_13; }
	inline void set_onNodeRemovingDelegate_13(XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * value)
	{
		___onNodeRemovingDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeRemovingDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_onNodeRemovedDelegate_14() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___onNodeRemovedDelegate_14)); }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * get_onNodeRemovedDelegate_14() const { return ___onNodeRemovedDelegate_14; }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 ** get_address_of_onNodeRemovedDelegate_14() { return &___onNodeRemovedDelegate_14; }
	inline void set_onNodeRemovedDelegate_14(XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * value)
	{
		___onNodeRemovedDelegate_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeRemovedDelegate_14), (void*)value);
	}

	inline static int32_t get_offset_of_onNodeChangingDelegate_15() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___onNodeChangingDelegate_15)); }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * get_onNodeChangingDelegate_15() const { return ___onNodeChangingDelegate_15; }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 ** get_address_of_onNodeChangingDelegate_15() { return &___onNodeChangingDelegate_15; }
	inline void set_onNodeChangingDelegate_15(XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * value)
	{
		___onNodeChangingDelegate_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeChangingDelegate_15), (void*)value);
	}

	inline static int32_t get_offset_of_onNodeChangedDelegate_16() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___onNodeChangedDelegate_16)); }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * get_onNodeChangedDelegate_16() const { return ___onNodeChangedDelegate_16; }
	inline XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 ** get_address_of_onNodeChangedDelegate_16() { return &___onNodeChangedDelegate_16; }
	inline void set_onNodeChangedDelegate_16(XmlNodeChangedEventHandler_tA0D165ACE065C3934721B68C6762B79372D7ECE9 * value)
	{
		___onNodeChangedDelegate_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNodeChangedDelegate_16), (void*)value);
	}

	inline static int32_t get_offset_of_fEntRefNodesPresent_17() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___fEntRefNodesPresent_17)); }
	inline bool get_fEntRefNodesPresent_17() const { return ___fEntRefNodesPresent_17; }
	inline bool* get_address_of_fEntRefNodesPresent_17() { return &___fEntRefNodesPresent_17; }
	inline void set_fEntRefNodesPresent_17(bool value)
	{
		___fEntRefNodesPresent_17 = value;
	}

	inline static int32_t get_offset_of_fCDataNodesPresent_18() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___fCDataNodesPresent_18)); }
	inline bool get_fCDataNodesPresent_18() const { return ___fCDataNodesPresent_18; }
	inline bool* get_address_of_fCDataNodesPresent_18() { return &___fCDataNodesPresent_18; }
	inline void set_fCDataNodesPresent_18(bool value)
	{
		___fCDataNodesPresent_18 = value;
	}

	inline static int32_t get_offset_of_preserveWhitespace_19() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___preserveWhitespace_19)); }
	inline bool get_preserveWhitespace_19() const { return ___preserveWhitespace_19; }
	inline bool* get_address_of_preserveWhitespace_19() { return &___preserveWhitespace_19; }
	inline void set_preserveWhitespace_19(bool value)
	{
		___preserveWhitespace_19 = value;
	}

	inline static int32_t get_offset_of_isLoading_20() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___isLoading_20)); }
	inline bool get_isLoading_20() const { return ___isLoading_20; }
	inline bool* get_address_of_isLoading_20() { return &___isLoading_20; }
	inline void set_isLoading_20(bool value)
	{
		___isLoading_20 = value;
	}

	inline static int32_t get_offset_of_strDocumentName_21() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strDocumentName_21)); }
	inline String_t* get_strDocumentName_21() const { return ___strDocumentName_21; }
	inline String_t** get_address_of_strDocumentName_21() { return &___strDocumentName_21; }
	inline void set_strDocumentName_21(String_t* value)
	{
		___strDocumentName_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strDocumentName_21), (void*)value);
	}

	inline static int32_t get_offset_of_strDocumentFragmentName_22() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strDocumentFragmentName_22)); }
	inline String_t* get_strDocumentFragmentName_22() const { return ___strDocumentFragmentName_22; }
	inline String_t** get_address_of_strDocumentFragmentName_22() { return &___strDocumentFragmentName_22; }
	inline void set_strDocumentFragmentName_22(String_t* value)
	{
		___strDocumentFragmentName_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strDocumentFragmentName_22), (void*)value);
	}

	inline static int32_t get_offset_of_strCommentName_23() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strCommentName_23)); }
	inline String_t* get_strCommentName_23() const { return ___strCommentName_23; }
	inline String_t** get_address_of_strCommentName_23() { return &___strCommentName_23; }
	inline void set_strCommentName_23(String_t* value)
	{
		___strCommentName_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strCommentName_23), (void*)value);
	}

	inline static int32_t get_offset_of_strTextName_24() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strTextName_24)); }
	inline String_t* get_strTextName_24() const { return ___strTextName_24; }
	inline String_t** get_address_of_strTextName_24() { return &___strTextName_24; }
	inline void set_strTextName_24(String_t* value)
	{
		___strTextName_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strTextName_24), (void*)value);
	}

	inline static int32_t get_offset_of_strCDataSectionName_25() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strCDataSectionName_25)); }
	inline String_t* get_strCDataSectionName_25() const { return ___strCDataSectionName_25; }
	inline String_t** get_address_of_strCDataSectionName_25() { return &___strCDataSectionName_25; }
	inline void set_strCDataSectionName_25(String_t* value)
	{
		___strCDataSectionName_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strCDataSectionName_25), (void*)value);
	}

	inline static int32_t get_offset_of_strEntityName_26() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strEntityName_26)); }
	inline String_t* get_strEntityName_26() const { return ___strEntityName_26; }
	inline String_t** get_address_of_strEntityName_26() { return &___strEntityName_26; }
	inline void set_strEntityName_26(String_t* value)
	{
		___strEntityName_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strEntityName_26), (void*)value);
	}

	inline static int32_t get_offset_of_strID_27() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strID_27)); }
	inline String_t* get_strID_27() const { return ___strID_27; }
	inline String_t** get_address_of_strID_27() { return &___strID_27; }
	inline void set_strID_27(String_t* value)
	{
		___strID_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strID_27), (void*)value);
	}

	inline static int32_t get_offset_of_strXmlns_28() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strXmlns_28)); }
	inline String_t* get_strXmlns_28() const { return ___strXmlns_28; }
	inline String_t** get_address_of_strXmlns_28() { return &___strXmlns_28; }
	inline void set_strXmlns_28(String_t* value)
	{
		___strXmlns_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strXmlns_28), (void*)value);
	}

	inline static int32_t get_offset_of_strXml_29() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strXml_29)); }
	inline String_t* get_strXml_29() const { return ___strXml_29; }
	inline String_t** get_address_of_strXml_29() { return &___strXml_29; }
	inline void set_strXml_29(String_t* value)
	{
		___strXml_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strXml_29), (void*)value);
	}

	inline static int32_t get_offset_of_strSpace_30() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strSpace_30)); }
	inline String_t* get_strSpace_30() const { return ___strSpace_30; }
	inline String_t** get_address_of_strSpace_30() { return &___strSpace_30; }
	inline void set_strSpace_30(String_t* value)
	{
		___strSpace_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strSpace_30), (void*)value);
	}

	inline static int32_t get_offset_of_strLang_31() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strLang_31)); }
	inline String_t* get_strLang_31() const { return ___strLang_31; }
	inline String_t** get_address_of_strLang_31() { return &___strLang_31; }
	inline void set_strLang_31(String_t* value)
	{
		___strLang_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strLang_31), (void*)value);
	}

	inline static int32_t get_offset_of_strEmpty_32() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strEmpty_32)); }
	inline String_t* get_strEmpty_32() const { return ___strEmpty_32; }
	inline String_t** get_address_of_strEmpty_32() { return &___strEmpty_32; }
	inline void set_strEmpty_32(String_t* value)
	{
		___strEmpty_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strEmpty_32), (void*)value);
	}

	inline static int32_t get_offset_of_strNonSignificantWhitespaceName_33() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strNonSignificantWhitespaceName_33)); }
	inline String_t* get_strNonSignificantWhitespaceName_33() const { return ___strNonSignificantWhitespaceName_33; }
	inline String_t** get_address_of_strNonSignificantWhitespaceName_33() { return &___strNonSignificantWhitespaceName_33; }
	inline void set_strNonSignificantWhitespaceName_33(String_t* value)
	{
		___strNonSignificantWhitespaceName_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strNonSignificantWhitespaceName_33), (void*)value);
	}

	inline static int32_t get_offset_of_strSignificantWhitespaceName_34() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strSignificantWhitespaceName_34)); }
	inline String_t* get_strSignificantWhitespaceName_34() const { return ___strSignificantWhitespaceName_34; }
	inline String_t** get_address_of_strSignificantWhitespaceName_34() { return &___strSignificantWhitespaceName_34; }
	inline void set_strSignificantWhitespaceName_34(String_t* value)
	{
		___strSignificantWhitespaceName_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strSignificantWhitespaceName_34), (void*)value);
	}

	inline static int32_t get_offset_of_strReservedXmlns_35() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strReservedXmlns_35)); }
	inline String_t* get_strReservedXmlns_35() const { return ___strReservedXmlns_35; }
	inline String_t** get_address_of_strReservedXmlns_35() { return &___strReservedXmlns_35; }
	inline void set_strReservedXmlns_35(String_t* value)
	{
		___strReservedXmlns_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strReservedXmlns_35), (void*)value);
	}

	inline static int32_t get_offset_of_strReservedXml_36() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___strReservedXml_36)); }
	inline String_t* get_strReservedXml_36() const { return ___strReservedXml_36; }
	inline String_t** get_address_of_strReservedXml_36() { return &___strReservedXml_36; }
	inline void set_strReservedXml_36(String_t* value)
	{
		___strReservedXml_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strReservedXml_36), (void*)value);
	}

	inline static int32_t get_offset_of_baseURI_37() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___baseURI_37)); }
	inline String_t* get_baseURI_37() const { return ___baseURI_37; }
	inline String_t** get_address_of_baseURI_37() { return &___baseURI_37; }
	inline void set_baseURI_37(String_t* value)
	{
		___baseURI_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseURI_37), (void*)value);
	}

	inline static int32_t get_offset_of_resolver_38() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___resolver_38)); }
	inline XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A * get_resolver_38() const { return ___resolver_38; }
	inline XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A ** get_address_of_resolver_38() { return &___resolver_38; }
	inline void set_resolver_38(XmlResolver_t7666FB44FF30D5CE53CC8DD913B2A8D2BD74343A * value)
	{
		___resolver_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolver_38), (void*)value);
	}

	inline static int32_t get_offset_of_bSetResolver_39() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___bSetResolver_39)); }
	inline bool get_bSetResolver_39() const { return ___bSetResolver_39; }
	inline bool* get_address_of_bSetResolver_39() { return &___bSetResolver_39; }
	inline void set_bSetResolver_39(bool value)
	{
		___bSetResolver_39 = value;
	}

	inline static int32_t get_offset_of_objLock_40() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F, ___objLock_40)); }
	inline RuntimeObject * get_objLock_40() const { return ___objLock_40; }
	inline RuntimeObject ** get_address_of_objLock_40() { return &___objLock_40; }
	inline void set_objLock_40(RuntimeObject * value)
	{
		___objLock_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objLock_40), (void*)value);
	}
};

struct XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_StaticFields
{
public:
	// System.Xml.EmptyEnumerator System.Xml.XmlDocument::EmptyEnumerator
	EmptyEnumerator_t138901A02D453E19CDE87DFD96981F8A98928E13 * ___EmptyEnumerator_41;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::NotKnownSchemaInfo
	RuntimeObject* ___NotKnownSchemaInfo_42;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::ValidSchemaInfo
	RuntimeObject* ___ValidSchemaInfo_43;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::InvalidSchemaInfo
	RuntimeObject* ___InvalidSchemaInfo_44;

public:
	inline static int32_t get_offset_of_EmptyEnumerator_41() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_StaticFields, ___EmptyEnumerator_41)); }
	inline EmptyEnumerator_t138901A02D453E19CDE87DFD96981F8A98928E13 * get_EmptyEnumerator_41() const { return ___EmptyEnumerator_41; }
	inline EmptyEnumerator_t138901A02D453E19CDE87DFD96981F8A98928E13 ** get_address_of_EmptyEnumerator_41() { return &___EmptyEnumerator_41; }
	inline void set_EmptyEnumerator_41(EmptyEnumerator_t138901A02D453E19CDE87DFD96981F8A98928E13 * value)
	{
		___EmptyEnumerator_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyEnumerator_41), (void*)value);
	}

	inline static int32_t get_offset_of_NotKnownSchemaInfo_42() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_StaticFields, ___NotKnownSchemaInfo_42)); }
	inline RuntimeObject* get_NotKnownSchemaInfo_42() const { return ___NotKnownSchemaInfo_42; }
	inline RuntimeObject** get_address_of_NotKnownSchemaInfo_42() { return &___NotKnownSchemaInfo_42; }
	inline void set_NotKnownSchemaInfo_42(RuntimeObject* value)
	{
		___NotKnownSchemaInfo_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NotKnownSchemaInfo_42), (void*)value);
	}

	inline static int32_t get_offset_of_ValidSchemaInfo_43() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_StaticFields, ___ValidSchemaInfo_43)); }
	inline RuntimeObject* get_ValidSchemaInfo_43() const { return ___ValidSchemaInfo_43; }
	inline RuntimeObject** get_address_of_ValidSchemaInfo_43() { return &___ValidSchemaInfo_43; }
	inline void set_ValidSchemaInfo_43(RuntimeObject* value)
	{
		___ValidSchemaInfo_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ValidSchemaInfo_43), (void*)value);
	}

	inline static int32_t get_offset_of_InvalidSchemaInfo_44() { return static_cast<int32_t>(offsetof(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_StaticFields, ___InvalidSchemaInfo_44)); }
	inline RuntimeObject* get_InvalidSchemaInfo_44() const { return ___InvalidSchemaInfo_44; }
	inline RuntimeObject** get_address_of_InvalidSchemaInfo_44() { return &___InvalidSchemaInfo_44; }
	inline void set_InvalidSchemaInfo_44(RuntimeObject* value)
	{
		___InvalidSchemaInfo_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InvalidSchemaInfo_44), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// RosSharp.Urdf.GeometryTypes
struct GeometryTypes_tFD9F40A82AD2E3233054D320E0797D5682C45BC9 
{
public:
	// System.Int32 RosSharp.Urdf.GeometryTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GeometryTypes_tFD9F40A82AD2E3233054D320E0797D5682C45BC9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Storage.Streams.InputStreamOptions
struct InputStreamOptions_t0C3A0185F954CB3B6508044E60E672B8DB75CA79 
{
public:
	// System.UInt32 Windows.Storage.Streams.InputStreamOptions::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputStreamOptions_t0C3A0185F954CB3B6508044E60E672B8DB75CA79, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// RosSharp.RosBridgeClient.Protocols.Protocol
struct Protocol_tB8550BEB2E9B21670C518A8E8F384FFC4CB3363A 
{
public:
	// System.Int32 RosSharp.RosBridgeClient.Protocols.Protocol::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Protocol_tB8550BEB2E9B21670C518A8E8F384FFC4CB3363A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Networking.Sockets.SocketErrorStatus
struct SocketErrorStatus_tACE77FB3A6ABF51D62DD9B95BF3AD084E3CA8612 
{
public:
	// System.Int32 Windows.Networking.Sockets.SocketErrorStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketErrorStatus_tACE77FB3A6ABF51D62DD9B95BF3AD084E3CA8612, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HL2CameraResearch/DepthSensorMode
struct DepthSensorMode_t63A4E1DA329F5B2B7AF1B665CC161582AAF7D690 
{
public:
	// System.Int32 HL2CameraResearch/DepthSensorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DepthSensorMode_t63A4E1DA329F5B2B7AF1B665CC161582AAF7D690, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ResearchModeVideoStream/DepthSensorMode
struct DepthSensorMode_t8F47852F0968C41E2EB645BE8D55EB31FA39D3F2 
{
public:
	// System.Int32 ResearchModeVideoStream/DepthSensorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DepthSensorMode_t8F47852F0968C41E2EB645BE8D55EB31FA39D3F2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// RosSharp.RosBridgeClient.RosSocket/SerializerEnum
struct SerializerEnum_t30B7D05304381381E05A78211CCD0BCB98082028 
{
public:
	// System.Int32 RosSharp.RosBridgeClient.RosSocket/SerializerEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializerEnum_t30B7D05304381381E05A78211CCD0BCB98082028, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// RosSharp.Urdf.UrdfInertial/RigidbodyDataSource
struct RigidbodyDataSource_tCA05B70ADAEEB8701FE1BCBB27DA177085426BC8 
{
public:
	// System.Int32 RosSharp.Urdf.UrdfInertial/RigidbodyDataSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyDataSource_tCA05B70ADAEEB8701FE1BCBB27DA177085426BC8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// RosSharp.Urdf.UrdfJoint/JointTypes
struct JointTypes_tBE9213D9A4D3E75F528CA6627DD4B99615946D32 
{
public:
	// System.Int32 RosSharp.Urdf.UrdfJoint/JointTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JointTypes_tBE9213D9A4D3E75F528CA6627DD4B99615946D32, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// TCPClient/<SendSpatialImageAsync>d__16
struct U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A 
{
public:
	// System.Int32 TCPClient/<SendSpatialImageAsync>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder TCPClient/<SendSpatialImageAsync>d__16::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// TCPClient TCPClient/<SendSpatialImageAsync>d__16::<>4__this
	TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * ___U3CU3E4__this_2;
	// System.Byte[] TCPClient/<SendSpatialImageAsync>d__16::LFImage
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___LFImage_3;
	// System.Byte[] TCPClient/<SendSpatialImageAsync>d__16::RFImage
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___RFImage_4;
	// System.Int64 TCPClient/<SendSpatialImageAsync>d__16::ts_left
	int64_t ___ts_left_5;
	// System.Int64 TCPClient/<SendSpatialImageAsync>d__16::ts_right
	int64_t ___ts_right_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32> TCPClient/<SendSpatialImageAsync>d__16::<>u__1
	TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  ___U3CU3Eu__1_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> TCPClient/<SendSpatialImageAsync>d__16::<>u__2
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  ___U3CU3Eu__2_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A, ___U3CU3E4__this_2)); }
	inline TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_LFImage_3() { return static_cast<int32_t>(offsetof(U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A, ___LFImage_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_LFImage_3() const { return ___LFImage_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_LFImage_3() { return &___LFImage_3; }
	inline void set_LFImage_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___LFImage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LFImage_3), (void*)value);
	}

	inline static int32_t get_offset_of_RFImage_4() { return static_cast<int32_t>(offsetof(U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A, ___RFImage_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_RFImage_4() const { return ___RFImage_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_RFImage_4() { return &___RFImage_4; }
	inline void set_RFImage_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___RFImage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RFImage_4), (void*)value);
	}

	inline static int32_t get_offset_of_ts_left_5() { return static_cast<int32_t>(offsetof(U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A, ___ts_left_5)); }
	inline int64_t get_ts_left_5() const { return ___ts_left_5; }
	inline int64_t* get_address_of_ts_left_5() { return &___ts_left_5; }
	inline void set_ts_left_5(int64_t value)
	{
		___ts_left_5 = value;
	}

	inline static int32_t get_offset_of_ts_right_6() { return static_cast<int32_t>(offsetof(U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A, ___ts_right_6)); }
	inline int64_t get_ts_right_6() const { return ___ts_right_6; }
	inline int64_t* get_address_of_ts_right_6() { return &___ts_right_6; }
	inline void set_ts_right_6(int64_t value)
	{
		___ts_right_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_7() { return static_cast<int32_t>(offsetof(U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A, ___U3CU3Eu__1_7)); }
	inline TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  get_U3CU3Eu__1_7() const { return ___U3CU3Eu__1_7; }
	inline TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * get_address_of_U3CU3Eu__1_7() { return &___U3CU3Eu__1_7; }
	inline void set_U3CU3Eu__1_7(TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  value)
	{
		___U3CU3Eu__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_8() { return static_cast<int32_t>(offsetof(U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A, ___U3CU3Eu__2_8)); }
	inline TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  get_U3CU3Eu__2_8() const { return ___U3CU3Eu__2_8; }
	inline TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * get_address_of_U3CU3Eu__2_8() { return &___U3CU3Eu__2_8; }
	inline void set_U3CU3Eu__2_8(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  value)
	{
		___U3CU3Eu__2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_8))->___m_task_0), (void*)NULL);
	}
};


// TCPClient/<SendSpatialImageAsync>d__17
struct U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B 
{
public:
	// System.Int32 TCPClient/<SendSpatialImageAsync>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder TCPClient/<SendSpatialImageAsync>d__17::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// TCPClient TCPClient/<SendSpatialImageAsync>d__17::<>4__this
	TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * ___U3CU3E4__this_2;
	// System.Byte[] TCPClient/<SendSpatialImageAsync>d__17::LRFImage
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___LRFImage_3;
	// System.Int64 TCPClient/<SendSpatialImageAsync>d__17::ts_left
	int64_t ___ts_left_4;
	// System.Int64 TCPClient/<SendSpatialImageAsync>d__17::ts_right
	int64_t ___ts_right_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32> TCPClient/<SendSpatialImageAsync>d__17::<>u__1
	TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> TCPClient/<SendSpatialImageAsync>d__17::<>u__2
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  ___U3CU3Eu__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B, ___U3CU3E4__this_2)); }
	inline TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_LRFImage_3() { return static_cast<int32_t>(offsetof(U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B, ___LRFImage_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_LRFImage_3() const { return ___LRFImage_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_LRFImage_3() { return &___LRFImage_3; }
	inline void set_LRFImage_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___LRFImage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LRFImage_3), (void*)value);
	}

	inline static int32_t get_offset_of_ts_left_4() { return static_cast<int32_t>(offsetof(U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B, ___ts_left_4)); }
	inline int64_t get_ts_left_4() const { return ___ts_left_4; }
	inline int64_t* get_address_of_ts_left_4() { return &___ts_left_4; }
	inline void set_ts_left_4(int64_t value)
	{
		___ts_left_4 = value;
	}

	inline static int32_t get_offset_of_ts_right_5() { return static_cast<int32_t>(offsetof(U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B, ___ts_right_5)); }
	inline int64_t get_ts_right_5() const { return ___ts_right_5; }
	inline int64_t* get_address_of_ts_right_5() { return &___ts_right_5; }
	inline void set_ts_right_5(int64_t value)
	{
		___ts_right_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_7() { return static_cast<int32_t>(offsetof(U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B, ___U3CU3Eu__2_7)); }
	inline TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  get_U3CU3Eu__2_7() const { return ___U3CU3Eu__2_7; }
	inline TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * get_address_of_U3CU3Eu__2_7() { return &___U3CU3Eu__2_7; }
	inline void set_U3CU3Eu__2_7(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  value)
	{
		___U3CU3Eu__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
	}
};


// TCPClient/<SendUINT16Async>d__14
struct U3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC 
{
public:
	// System.Int32 TCPClient/<SendUINT16Async>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder TCPClient/<SendUINT16Async>d__14::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// TCPClient TCPClient/<SendUINT16Async>d__14::<>4__this
	TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * ___U3CU3E4__this_2;
	// System.UInt16[] TCPClient/<SendUINT16Async>d__14::data
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___data_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32> TCPClient/<SendUINT16Async>d__14::<>u__1
	TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  ___U3CU3Eu__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> TCPClient/<SendUINT16Async>d__14::<>u__2
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  ___U3CU3Eu__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC, ___U3CU3E4__this_2)); }
	inline TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(U3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC, ___data_3)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_data_3() const { return ___data_3; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_5() { return static_cast<int32_t>(offsetof(U3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC, ___U3CU3Eu__2_5)); }
	inline TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  get_U3CU3Eu__2_5() const { return ___U3CU3Eu__2_5; }
	inline TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * get_address_of_U3CU3Eu__2_5() { return &___U3CU3Eu__2_5; }
	inline void set_U3CU3Eu__2_5(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  value)
	{
		___U3CU3Eu__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_5))->___m_task_0), (void*)NULL);
	}
};


// TCPClient/<SendUINT16Async>d__15
struct U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141 
{
public:
	// System.Int32 TCPClient/<SendUINT16Async>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder TCPClient/<SendUINT16Async>d__15::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// TCPClient TCPClient/<SendUINT16Async>d__15::<>4__this
	TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * ___U3CU3E4__this_2;
	// System.UInt16[] TCPClient/<SendUINT16Async>d__15::data1
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___data1_3;
	// System.UInt16[] TCPClient/<SendUINT16Async>d__15::data2
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___data2_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32> TCPClient/<SendUINT16Async>d__15::<>u__1
	TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> TCPClient/<SendUINT16Async>d__15::<>u__2
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  ___U3CU3Eu__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141, ___U3CU3E4__this_2)); }
	inline TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_data1_3() { return static_cast<int32_t>(offsetof(U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141, ___data1_3)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_data1_3() const { return ___data1_3; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_data1_3() { return &___data1_3; }
	inline void set_data1_3(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___data1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data1_3), (void*)value);
	}

	inline static int32_t get_offset_of_data2_4() { return static_cast<int32_t>(offsetof(U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141, ___data2_4)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_data2_4() const { return ___data2_4; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_data2_4() { return &___data2_4; }
	inline void set_data2_4(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___data2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_6() { return static_cast<int32_t>(offsetof(U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141, ___U3CU3Eu__2_6)); }
	inline TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  get_U3CU3Eu__2_6() const { return ___U3CU3Eu__2_6; }
	inline TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * get_address_of_U3CU3Eu__2_6() { return &___U3CU3Eu__2_6; }
	inline void set_U3CU3Eu__2_6(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  value)
	{
		___U3CU3Eu__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
	}
};


// TCPClient/<StartCoonection>d__11
struct U3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E 
{
public:
	// System.Int32 TCPClient/<StartCoonection>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder TCPClient/<StartCoonection>d__11::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// TCPClient TCPClient/<StartCoonection>d__11::<>4__this
	TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter TCPClient/<StartCoonection>d__11::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E, ___U3CU3E4__this_2)); }
	inline TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// System.Func`2<RosSharp.Urdf.Plugin,System.Boolean>
struct Func_2_t62148C2BAFD36B7AC6CEFCDF70FDCB96BB968DD5  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<RosSharp.Urdf.UrdfPlugin,RosSharp.Urdf.Plugin>
struct Func_2_tDB0F2F729A086C2B8F1B89D19A1F0F373335917C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.Xml.XmlException
struct XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.Xml.XmlException::res
	String_t* ___res_17;
	// System.String[] System.Xml.XmlException::args
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___args_18;
	// System.Int32 System.Xml.XmlException::lineNumber
	int32_t ___lineNumber_19;
	// System.Int32 System.Xml.XmlException::linePosition
	int32_t ___linePosition_20;
	// System.String System.Xml.XmlException::sourceUri
	String_t* ___sourceUri_21;
	// System.String System.Xml.XmlException::message
	String_t* ___message_22;

public:
	inline static int32_t get_offset_of_res_17() { return static_cast<int32_t>(offsetof(XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918, ___res_17)); }
	inline String_t* get_res_17() const { return ___res_17; }
	inline String_t** get_address_of_res_17() { return &___res_17; }
	inline void set_res_17(String_t* value)
	{
		___res_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___res_17), (void*)value);
	}

	inline static int32_t get_offset_of_args_18() { return static_cast<int32_t>(offsetof(XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918, ___args_18)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_args_18() const { return ___args_18; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_args_18() { return &___args_18; }
	inline void set_args_18(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___args_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_18), (void*)value);
	}

	inline static int32_t get_offset_of_lineNumber_19() { return static_cast<int32_t>(offsetof(XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918, ___lineNumber_19)); }
	inline int32_t get_lineNumber_19() const { return ___lineNumber_19; }
	inline int32_t* get_address_of_lineNumber_19() { return &___lineNumber_19; }
	inline void set_lineNumber_19(int32_t value)
	{
		___lineNumber_19 = value;
	}

	inline static int32_t get_offset_of_linePosition_20() { return static_cast<int32_t>(offsetof(XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918, ___linePosition_20)); }
	inline int32_t get_linePosition_20() const { return ___linePosition_20; }
	inline int32_t* get_address_of_linePosition_20() { return &___linePosition_20; }
	inline void set_linePosition_20(int32_t value)
	{
		___linePosition_20 = value;
	}

	inline static int32_t get_offset_of_sourceUri_21() { return static_cast<int32_t>(offsetof(XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918, ___sourceUri_21)); }
	inline String_t* get_sourceUri_21() const { return ___sourceUri_21; }
	inline String_t** get_address_of_sourceUri_21() { return &___sourceUri_21; }
	inline void set_sourceUri_21(String_t* value)
	{
		___sourceUri_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceUri_21), (void*)value);
	}

	inline static int32_t get_offset_of_message_22() { return static_cast<int32_t>(offsetof(XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918, ___message_22)); }
	inline String_t* get_message_22() const { return ___message_22; }
	inline String_t** get_address_of_message_22() { return &___message_22; }
	inline void set_message_22(String_t* value)
	{
		___message_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_22), (void*)value);
	}
};


// UnityEngine.MeshCollider
struct MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// RosSharp.RosBridgeClient.UnityPublisher`1<RosSharp.RosBridgeClient.MessageTypes.Sensor.CompressedImage>
struct UnityPublisher_1_tD711D9F4A47C9FE079FB22B77AF7F17BD332295E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String RosSharp.RosBridgeClient.UnityPublisher`1::Topic
	String_t* ___Topic_4;
	// System.String RosSharp.RosBridgeClient.UnityPublisher`1::publicationId
	String_t* ___publicationId_5;
	// RosSharp.RosBridgeClient.RosConnector RosSharp.RosBridgeClient.UnityPublisher`1::rosConnector
	RosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839 * ___rosConnector_6;

public:
	inline static int32_t get_offset_of_Topic_4() { return static_cast<int32_t>(offsetof(UnityPublisher_1_tD711D9F4A47C9FE079FB22B77AF7F17BD332295E, ___Topic_4)); }
	inline String_t* get_Topic_4() const { return ___Topic_4; }
	inline String_t** get_address_of_Topic_4() { return &___Topic_4; }
	inline void set_Topic_4(String_t* value)
	{
		___Topic_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Topic_4), (void*)value);
	}

	inline static int32_t get_offset_of_publicationId_5() { return static_cast<int32_t>(offsetof(UnityPublisher_1_tD711D9F4A47C9FE079FB22B77AF7F17BD332295E, ___publicationId_5)); }
	inline String_t* get_publicationId_5() const { return ___publicationId_5; }
	inline String_t** get_address_of_publicationId_5() { return &___publicationId_5; }
	inline void set_publicationId_5(String_t* value)
	{
		___publicationId_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___publicationId_5), (void*)value);
	}

	inline static int32_t get_offset_of_rosConnector_6() { return static_cast<int32_t>(offsetof(UnityPublisher_1_tD711D9F4A47C9FE079FB22B77AF7F17BD332295E, ___rosConnector_6)); }
	inline RosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839 * get_rosConnector_6() const { return ___rosConnector_6; }
	inline RosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839 ** get_address_of_rosConnector_6() { return &___rosConnector_6; }
	inline void set_rosConnector_6(RosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839 * value)
	{
		___rosConnector_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rosConnector_6), (void*)value);
	}
};


// RosSharp.RosBridgeClient.RosConnector
struct RosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 RosSharp.RosBridgeClient.RosConnector::SecondsTimeout
	int32_t ___SecondsTimeout_4;
	// RosSharp.RosBridgeClient.RosSocket RosSharp.RosBridgeClient.RosConnector::<RosSocket>k__BackingField
	RosSocket_t86C619E57C04D8887582FA6494A35492B0CD5B33 * ___U3CRosSocketU3Ek__BackingField_5;
	// RosSharp.RosBridgeClient.RosSocket/SerializerEnum RosSharp.RosBridgeClient.RosConnector::Serializer
	int32_t ___Serializer_6;
	// RosSharp.RosBridgeClient.Protocols.Protocol RosSharp.RosBridgeClient.RosConnector::protocol
	int32_t ___protocol_7;
	// System.String RosSharp.RosBridgeClient.RosConnector::RosBridgeServerUrl
	String_t* ___RosBridgeServerUrl_8;
	// System.Threading.ManualResetEvent RosSharp.RosBridgeClient.RosConnector::<IsConnected>k__BackingField
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___U3CIsConnectedU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_SecondsTimeout_4() { return static_cast<int32_t>(offsetof(RosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839, ___SecondsTimeout_4)); }
	inline int32_t get_SecondsTimeout_4() const { return ___SecondsTimeout_4; }
	inline int32_t* get_address_of_SecondsTimeout_4() { return &___SecondsTimeout_4; }
	inline void set_SecondsTimeout_4(int32_t value)
	{
		___SecondsTimeout_4 = value;
	}

	inline static int32_t get_offset_of_U3CRosSocketU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839, ___U3CRosSocketU3Ek__BackingField_5)); }
	inline RosSocket_t86C619E57C04D8887582FA6494A35492B0CD5B33 * get_U3CRosSocketU3Ek__BackingField_5() const { return ___U3CRosSocketU3Ek__BackingField_5; }
	inline RosSocket_t86C619E57C04D8887582FA6494A35492B0CD5B33 ** get_address_of_U3CRosSocketU3Ek__BackingField_5() { return &___U3CRosSocketU3Ek__BackingField_5; }
	inline void set_U3CRosSocketU3Ek__BackingField_5(RosSocket_t86C619E57C04D8887582FA6494A35492B0CD5B33 * value)
	{
		___U3CRosSocketU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRosSocketU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_Serializer_6() { return static_cast<int32_t>(offsetof(RosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839, ___Serializer_6)); }
	inline int32_t get_Serializer_6() const { return ___Serializer_6; }
	inline int32_t* get_address_of_Serializer_6() { return &___Serializer_6; }
	inline void set_Serializer_6(int32_t value)
	{
		___Serializer_6 = value;
	}

	inline static int32_t get_offset_of_protocol_7() { return static_cast<int32_t>(offsetof(RosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839, ___protocol_7)); }
	inline int32_t get_protocol_7() const { return ___protocol_7; }
	inline int32_t* get_address_of_protocol_7() { return &___protocol_7; }
	inline void set_protocol_7(int32_t value)
	{
		___protocol_7 = value;
	}

	inline static int32_t get_offset_of_RosBridgeServerUrl_8() { return static_cast<int32_t>(offsetof(RosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839, ___RosBridgeServerUrl_8)); }
	inline String_t* get_RosBridgeServerUrl_8() const { return ___RosBridgeServerUrl_8; }
	inline String_t** get_address_of_RosBridgeServerUrl_8() { return &___RosBridgeServerUrl_8; }
	inline void set_RosBridgeServerUrl_8(String_t* value)
	{
		___RosBridgeServerUrl_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RosBridgeServerUrl_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsConnectedU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839, ___U3CIsConnectedU3Ek__BackingField_9)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_U3CIsConnectedU3Ek__BackingField_9() const { return ___U3CIsConnectedU3Ek__BackingField_9; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_U3CIsConnectedU3Ek__BackingField_9() { return &___U3CIsConnectedU3Ek__BackingField_9; }
	inline void set_U3CIsConnectedU3Ek__BackingField_9(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___U3CIsConnectedU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIsConnectedU3Ek__BackingField_9), (void*)value);
	}
};


// TCPClient
struct TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String TCPClient::hostIPAddress
	String_t* ___hostIPAddress_4;
	// System.String TCPClient::port
	String_t* ___port_5;
	// UnityEngine.Renderer TCPClient::ConnectionStatusLED
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___ConnectionStatusLED_6;
	// System.Boolean TCPClient::connected
	bool ___connected_7;
	// Windows.Networking.Sockets.StreamSocket TCPClient::socket
	StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * ___socket_8;
	// Windows.Storage.Streams.DataWriter TCPClient::dw
	DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * ___dw_9;
	// Windows.Storage.Streams.DataReader TCPClient::dr
	DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E * ___dr_10;
	// System.Boolean TCPClient::lastMessageSent
	bool ___lastMessageSent_11;

public:
	inline static int32_t get_offset_of_hostIPAddress_4() { return static_cast<int32_t>(offsetof(TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30, ___hostIPAddress_4)); }
	inline String_t* get_hostIPAddress_4() const { return ___hostIPAddress_4; }
	inline String_t** get_address_of_hostIPAddress_4() { return &___hostIPAddress_4; }
	inline void set_hostIPAddress_4(String_t* value)
	{
		___hostIPAddress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hostIPAddress_4), (void*)value);
	}

	inline static int32_t get_offset_of_port_5() { return static_cast<int32_t>(offsetof(TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30, ___port_5)); }
	inline String_t* get_port_5() const { return ___port_5; }
	inline String_t** get_address_of_port_5() { return &___port_5; }
	inline void set_port_5(String_t* value)
	{
		___port_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___port_5), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectionStatusLED_6() { return static_cast<int32_t>(offsetof(TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30, ___ConnectionStatusLED_6)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get_ConnectionStatusLED_6() const { return ___ConnectionStatusLED_6; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of_ConnectionStatusLED_6() { return &___ConnectionStatusLED_6; }
	inline void set_ConnectionStatusLED_6(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		___ConnectionStatusLED_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectionStatusLED_6), (void*)value);
	}

	inline static int32_t get_offset_of_connected_7() { return static_cast<int32_t>(offsetof(TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30, ___connected_7)); }
	inline bool get_connected_7() const { return ___connected_7; }
	inline bool* get_address_of_connected_7() { return &___connected_7; }
	inline void set_connected_7(bool value)
	{
		___connected_7 = value;
	}

	inline static int32_t get_offset_of_socket_8() { return static_cast<int32_t>(offsetof(TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30, ___socket_8)); }
	inline StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * get_socket_8() const { return ___socket_8; }
	inline StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 ** get_address_of_socket_8() { return &___socket_8; }
	inline void set_socket_8(StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * value)
	{
		___socket_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_8), (void*)value);
	}

	inline static int32_t get_offset_of_dw_9() { return static_cast<int32_t>(offsetof(TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30, ___dw_9)); }
	inline DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * get_dw_9() const { return ___dw_9; }
	inline DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 ** get_address_of_dw_9() { return &___dw_9; }
	inline void set_dw_9(DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * value)
	{
		___dw_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dw_9), (void*)value);
	}

	inline static int32_t get_offset_of_dr_10() { return static_cast<int32_t>(offsetof(TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30, ___dr_10)); }
	inline DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E * get_dr_10() const { return ___dr_10; }
	inline DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E ** get_address_of_dr_10() { return &___dr_10; }
	inline void set_dr_10(DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E * value)
	{
		___dr_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dr_10), (void*)value);
	}

	inline static int32_t get_offset_of_lastMessageSent_11() { return static_cast<int32_t>(offsetof(TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30, ___lastMessageSent_11)); }
	inline bool get_lastMessageSent_11() const { return ___lastMessageSent_11; }
	inline bool* get_address_of_lastMessageSent_11() { return &___lastMessageSent_11; }
	inline void set_lastMessageSent_11(bool value)
	{
		___lastMessageSent_11 = value;
	}
};


// RosSharp.Urdf.UrdfInertial
struct UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody RosSharp.Urdf.UrdfInertial::_rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ____rigidbody_4;
	// System.Boolean RosSharp.Urdf.UrdfInertial::DisplayInertiaGizmo
	bool ___DisplayInertiaGizmo_5;
	// RosSharp.Urdf.UrdfInertial/RigidbodyDataSource RosSharp.Urdf.UrdfInertial::rigidbodyDataSource
	int32_t ___rigidbodyDataSource_6;
	// System.Single RosSharp.Urdf.UrdfInertial::Mass
	float ___Mass_7;
	// UnityEngine.Vector3 RosSharp.Urdf.UrdfInertial::CenterOfMass
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___CenterOfMass_8;
	// UnityEngine.Vector3 RosSharp.Urdf.UrdfInertial::InertiaTensor
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___InertiaTensor_9;
	// UnityEngine.Quaternion RosSharp.Urdf.UrdfInertial::InertiaTensorRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___InertiaTensorRotation_10;
	// System.Single RosSharp.Urdf.UrdfInertial::UrdfMass
	float ___UrdfMass_11;
	// UnityEngine.Vector3 RosSharp.Urdf.UrdfInertial::UrdfCenterOfMass
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___UrdfCenterOfMass_12;
	// UnityEngine.Vector3 RosSharp.Urdf.UrdfInertial::UrdfInertiaTensor
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___UrdfInertiaTensor_13;
	// UnityEngine.Quaternion RosSharp.Urdf.UrdfInertial::UrdfInertiaTensorRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___UrdfInertiaTensorRotation_14;
	// System.Boolean RosSharp.Urdf.UrdfInertial::isCreated
	bool ___isCreated_17;

public:
	inline static int32_t get_offset_of__rigidbody_4() { return static_cast<int32_t>(offsetof(UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A, ____rigidbody_4)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get__rigidbody_4() const { return ____rigidbody_4; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of__rigidbody_4() { return &____rigidbody_4; }
	inline void set__rigidbody_4(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		____rigidbody_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rigidbody_4), (void*)value);
	}

	inline static int32_t get_offset_of_DisplayInertiaGizmo_5() { return static_cast<int32_t>(offsetof(UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A, ___DisplayInertiaGizmo_5)); }
	inline bool get_DisplayInertiaGizmo_5() const { return ___DisplayInertiaGizmo_5; }
	inline bool* get_address_of_DisplayInertiaGizmo_5() { return &___DisplayInertiaGizmo_5; }
	inline void set_DisplayInertiaGizmo_5(bool value)
	{
		___DisplayInertiaGizmo_5 = value;
	}

	inline static int32_t get_offset_of_rigidbodyDataSource_6() { return static_cast<int32_t>(offsetof(UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A, ___rigidbodyDataSource_6)); }
	inline int32_t get_rigidbodyDataSource_6() const { return ___rigidbodyDataSource_6; }
	inline int32_t* get_address_of_rigidbodyDataSource_6() { return &___rigidbodyDataSource_6; }
	inline void set_rigidbodyDataSource_6(int32_t value)
	{
		___rigidbodyDataSource_6 = value;
	}

	inline static int32_t get_offset_of_Mass_7() { return static_cast<int32_t>(offsetof(UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A, ___Mass_7)); }
	inline float get_Mass_7() const { return ___Mass_7; }
	inline float* get_address_of_Mass_7() { return &___Mass_7; }
	inline void set_Mass_7(float value)
	{
		___Mass_7 = value;
	}

	inline static int32_t get_offset_of_CenterOfMass_8() { return static_cast<int32_t>(offsetof(UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A, ___CenterOfMass_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_CenterOfMass_8() const { return ___CenterOfMass_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_CenterOfMass_8() { return &___CenterOfMass_8; }
	inline void set_CenterOfMass_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___CenterOfMass_8 = value;
	}

	inline static int32_t get_offset_of_InertiaTensor_9() { return static_cast<int32_t>(offsetof(UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A, ___InertiaTensor_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_InertiaTensor_9() const { return ___InertiaTensor_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_InertiaTensor_9() { return &___InertiaTensor_9; }
	inline void set_InertiaTensor_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___InertiaTensor_9 = value;
	}

	inline static int32_t get_offset_of_InertiaTensorRotation_10() { return static_cast<int32_t>(offsetof(UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A, ___InertiaTensorRotation_10)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_InertiaTensorRotation_10() const { return ___InertiaTensorRotation_10; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_InertiaTensorRotation_10() { return &___InertiaTensorRotation_10; }
	inline void set_InertiaTensorRotation_10(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___InertiaTensorRotation_10 = value;
	}

	inline static int32_t get_offset_of_UrdfMass_11() { return static_cast<int32_t>(offsetof(UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A, ___UrdfMass_11)); }
	inline float get_UrdfMass_11() const { return ___UrdfMass_11; }
	inline float* get_address_of_UrdfMass_11() { return &___UrdfMass_11; }
	inline void set_UrdfMass_11(float value)
	{
		___UrdfMass_11 = value;
	}

	inline static int32_t get_offset_of_UrdfCenterOfMass_12() { return static_cast<int32_t>(offsetof(UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A, ___UrdfCenterOfMass_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_UrdfCenterOfMass_12() const { return ___UrdfCenterOfMass_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_UrdfCenterOfMass_12() { return &___UrdfCenterOfMass_12; }
	inline void set_UrdfCenterOfMass_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___UrdfCenterOfMass_12 = value;
	}

	inline static int32_t get_offset_of_UrdfInertiaTensor_13() { return static_cast<int32_t>(offsetof(UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A, ___UrdfInertiaTensor_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_UrdfInertiaTensor_13() const { return ___UrdfInertiaTensor_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_UrdfInertiaTensor_13() { return &___UrdfInertiaTensor_13; }
	inline void set_UrdfInertiaTensor_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___UrdfInertiaTensor_13 = value;
	}

	inline static int32_t get_offset_of_UrdfInertiaTensorRotation_14() { return static_cast<int32_t>(offsetof(UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A, ___UrdfInertiaTensorRotation_14)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_UrdfInertiaTensorRotation_14() const { return ___UrdfInertiaTensorRotation_14; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_UrdfInertiaTensorRotation_14() { return &___UrdfInertiaTensorRotation_14; }
	inline void set_UrdfInertiaTensorRotation_14(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___UrdfInertiaTensorRotation_14 = value;
	}

	inline static int32_t get_offset_of_isCreated_17() { return static_cast<int32_t>(offsetof(UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A, ___isCreated_17)); }
	inline bool get_isCreated_17() const { return ___isCreated_17; }
	inline bool* get_address_of_isCreated_17() { return &___isCreated_17; }
	inline void set_isCreated_17(bool value)
	{
		___isCreated_17 = value;
	}
};


// RosSharp.Urdf.UrdfJoint
struct UrdfJoint_t579DFEB5752FB8D571991AA28D6EF709000E5996  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Joint RosSharp.Urdf.UrdfJoint::UnityJoint
	Joint_t085126F36196FC982700F4EA8466CF10C90EC15E * ___UnityJoint_4;
	// System.String RosSharp.Urdf.UrdfJoint::JointName
	String_t* ___JointName_5;
	// RosSharp.Urdf.UrdfJoint/JointTypes RosSharp.Urdf.UrdfJoint::_jointType
	int32_t ____jointType_6;
	// System.Double RosSharp.Urdf.UrdfJoint::EffortLimit
	double ___EffortLimit_7;
	// System.Double RosSharp.Urdf.UrdfJoint::VelocityLimit
	double ___VelocityLimit_8;

public:
	inline static int32_t get_offset_of_UnityJoint_4() { return static_cast<int32_t>(offsetof(UrdfJoint_t579DFEB5752FB8D571991AA28D6EF709000E5996, ___UnityJoint_4)); }
	inline Joint_t085126F36196FC982700F4EA8466CF10C90EC15E * get_UnityJoint_4() const { return ___UnityJoint_4; }
	inline Joint_t085126F36196FC982700F4EA8466CF10C90EC15E ** get_address_of_UnityJoint_4() { return &___UnityJoint_4; }
	inline void set_UnityJoint_4(Joint_t085126F36196FC982700F4EA8466CF10C90EC15E * value)
	{
		___UnityJoint_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnityJoint_4), (void*)value);
	}

	inline static int32_t get_offset_of_JointName_5() { return static_cast<int32_t>(offsetof(UrdfJoint_t579DFEB5752FB8D571991AA28D6EF709000E5996, ___JointName_5)); }
	inline String_t* get_JointName_5() const { return ___JointName_5; }
	inline String_t** get_address_of_JointName_5() { return &___JointName_5; }
	inline void set_JointName_5(String_t* value)
	{
		___JointName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JointName_5), (void*)value);
	}

	inline static int32_t get_offset_of__jointType_6() { return static_cast<int32_t>(offsetof(UrdfJoint_t579DFEB5752FB8D571991AA28D6EF709000E5996, ____jointType_6)); }
	inline int32_t get__jointType_6() const { return ____jointType_6; }
	inline int32_t* get_address_of__jointType_6() { return &____jointType_6; }
	inline void set__jointType_6(int32_t value)
	{
		____jointType_6 = value;
	}

	inline static int32_t get_offset_of_EffortLimit_7() { return static_cast<int32_t>(offsetof(UrdfJoint_t579DFEB5752FB8D571991AA28D6EF709000E5996, ___EffortLimit_7)); }
	inline double get_EffortLimit_7() const { return ___EffortLimit_7; }
	inline double* get_address_of_EffortLimit_7() { return &___EffortLimit_7; }
	inline void set_EffortLimit_7(double value)
	{
		___EffortLimit_7 = value;
	}

	inline static int32_t get_offset_of_VelocityLimit_8() { return static_cast<int32_t>(offsetof(UrdfJoint_t579DFEB5752FB8D571991AA28D6EF709000E5996, ___VelocityLimit_8)); }
	inline double get_VelocityLimit_8() const { return ___VelocityLimit_8; }
	inline double* get_address_of_VelocityLimit_8() { return &___VelocityLimit_8; }
	inline void set_VelocityLimit_8(double value)
	{
		___VelocityLimit_8 = value;
	}
};


// RosSharp.Urdf.UrdfLink
struct UrdfLink_t82E0AE7CFF5AAA8752AC2776B508F475621980B4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean RosSharp.Urdf.UrdfLink::IsBaseLink
	bool ___IsBaseLink_4;

public:
	inline static int32_t get_offset_of_IsBaseLink_4() { return static_cast<int32_t>(offsetof(UrdfLink_t82E0AE7CFF5AAA8752AC2776B508F475621980B4, ___IsBaseLink_4)); }
	inline bool get_IsBaseLink_4() const { return ___IsBaseLink_4; }
	inline bool* get_address_of_IsBaseLink_4() { return &___IsBaseLink_4; }
	inline void set_IsBaseLink_4(bool value)
	{
		___IsBaseLink_4 = value;
	}
};


// RosSharp.Urdf.UrdfPlugin
struct UrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String RosSharp.Urdf.UrdfPlugin::PluginText
	String_t* ___PluginText_4;

public:
	inline static int32_t get_offset_of_PluginText_4() { return static_cast<int32_t>(offsetof(UrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690, ___PluginText_4)); }
	inline String_t* get_PluginText_4() const { return ___PluginText_4; }
	inline String_t** get_address_of_PluginText_4() { return &___PluginText_4; }
	inline void set_PluginText_4(String_t* value)
	{
		___PluginText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PluginText_4), (void*)value);
	}
};


// RosSharp.Urdf.UrdfPlugins
struct UrdfPlugins_tA1653922BA04BE88F719546442B44167B09422F2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// RosSharp.Urdf.UrdfRobot
struct UrdfRobot_t1F5CE295269BAA777893BE455369BB26C7E9712A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String RosSharp.Urdf.UrdfRobot::FilePath
	String_t* ___FilePath_4;

public:
	inline static int32_t get_offset_of_FilePath_4() { return static_cast<int32_t>(offsetof(UrdfRobot_t1F5CE295269BAA777893BE455369BB26C7E9712A, ___FilePath_4)); }
	inline String_t* get_FilePath_4() const { return ___FilePath_4; }
	inline String_t** get_address_of_FilePath_4() { return &___FilePath_4; }
	inline void set_FilePath_4(String_t* value)
	{
		___FilePath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilePath_4), (void*)value);
	}
};


// RosSharp.Urdf.UrdfVisual
struct UrdfVisual_t07A61D7DB13D485D0C2E3E9623CDD85E1AC0EC4E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// RosSharp.Urdf.GeometryTypes RosSharp.Urdf.UrdfVisual::GeometryType
	int32_t ___GeometryType_4;

public:
	inline static int32_t get_offset_of_GeometryType_4() { return static_cast<int32_t>(offsetof(UrdfVisual_t07A61D7DB13D485D0C2E3E9623CDD85E1AC0EC4E, ___GeometryType_4)); }
	inline int32_t get_GeometryType_4() const { return ___GeometryType_4; }
	inline int32_t* get_address_of_GeometryType_4() { return &___GeometryType_4; }
	inline void set_GeometryType_4(int32_t value)
	{
		___GeometryType_4 = value;
	}
};


// RosSharp.Urdf.UrdfVisuals
struct UrdfVisuals_t55734538E0449503C5F9B4322ED1AE05A16DE626  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ros_connector_enable
struct ros_connector_enable_tCEA6FEF1FEBFD7DF90CBAF4A0177F8E3664A821C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ros_connector_enable::ros_connector
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ros_connector_4;
	// UnityEngine.GameObject ros_connector_enable::ros_connector_button_controller
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ros_connector_button_controller_5;
	// UnityEngine.GameObject ros_connector_enable::publish_controller
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___publish_controller_6;
	// System.Int32 ros_connector_enable::click_count
	int32_t ___click_count_7;
	// System.Int32 ros_connector_enable::click_pose_count
	int32_t ___click_pose_count_8;
	// System.Int32 ros_connector_enable::click_contacted_count
	int32_t ___click_contacted_count_9;
	// RosSharp.RosBridgeClient.RosConnector ros_connector_enable::ros_connector_script
	RosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839 * ___ros_connector_script_10;
	// RosSharp.RosBridgeClient.HL2CameraPublisher ros_connector_enable::hl2_camera_script
	HL2CameraPublisher_tB1C84964EE7CB72118B83EC8FEB0695B63EA6F6D * ___hl2_camera_script_11;

public:
	inline static int32_t get_offset_of_ros_connector_4() { return static_cast<int32_t>(offsetof(ros_connector_enable_tCEA6FEF1FEBFD7DF90CBAF4A0177F8E3664A821C, ___ros_connector_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ros_connector_4() const { return ___ros_connector_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ros_connector_4() { return &___ros_connector_4; }
	inline void set_ros_connector_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ros_connector_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ros_connector_4), (void*)value);
	}

	inline static int32_t get_offset_of_ros_connector_button_controller_5() { return static_cast<int32_t>(offsetof(ros_connector_enable_tCEA6FEF1FEBFD7DF90CBAF4A0177F8E3664A821C, ___ros_connector_button_controller_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ros_connector_button_controller_5() const { return ___ros_connector_button_controller_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ros_connector_button_controller_5() { return &___ros_connector_button_controller_5; }
	inline void set_ros_connector_button_controller_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ros_connector_button_controller_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ros_connector_button_controller_5), (void*)value);
	}

	inline static int32_t get_offset_of_publish_controller_6() { return static_cast<int32_t>(offsetof(ros_connector_enable_tCEA6FEF1FEBFD7DF90CBAF4A0177F8E3664A821C, ___publish_controller_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_publish_controller_6() const { return ___publish_controller_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_publish_controller_6() { return &___publish_controller_6; }
	inline void set_publish_controller_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___publish_controller_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___publish_controller_6), (void*)value);
	}

	inline static int32_t get_offset_of_click_count_7() { return static_cast<int32_t>(offsetof(ros_connector_enable_tCEA6FEF1FEBFD7DF90CBAF4A0177F8E3664A821C, ___click_count_7)); }
	inline int32_t get_click_count_7() const { return ___click_count_7; }
	inline int32_t* get_address_of_click_count_7() { return &___click_count_7; }
	inline void set_click_count_7(int32_t value)
	{
		___click_count_7 = value;
	}

	inline static int32_t get_offset_of_click_pose_count_8() { return static_cast<int32_t>(offsetof(ros_connector_enable_tCEA6FEF1FEBFD7DF90CBAF4A0177F8E3664A821C, ___click_pose_count_8)); }
	inline int32_t get_click_pose_count_8() const { return ___click_pose_count_8; }
	inline int32_t* get_address_of_click_pose_count_8() { return &___click_pose_count_8; }
	inline void set_click_pose_count_8(int32_t value)
	{
		___click_pose_count_8 = value;
	}

	inline static int32_t get_offset_of_click_contacted_count_9() { return static_cast<int32_t>(offsetof(ros_connector_enable_tCEA6FEF1FEBFD7DF90CBAF4A0177F8E3664A821C, ___click_contacted_count_9)); }
	inline int32_t get_click_contacted_count_9() const { return ___click_contacted_count_9; }
	inline int32_t* get_address_of_click_contacted_count_9() { return &___click_contacted_count_9; }
	inline void set_click_contacted_count_9(int32_t value)
	{
		___click_contacted_count_9 = value;
	}

	inline static int32_t get_offset_of_ros_connector_script_10() { return static_cast<int32_t>(offsetof(ros_connector_enable_tCEA6FEF1FEBFD7DF90CBAF4A0177F8E3664A821C, ___ros_connector_script_10)); }
	inline RosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839 * get_ros_connector_script_10() const { return ___ros_connector_script_10; }
	inline RosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839 ** get_address_of_ros_connector_script_10() { return &___ros_connector_script_10; }
	inline void set_ros_connector_script_10(RosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839 * value)
	{
		___ros_connector_script_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ros_connector_script_10), (void*)value);
	}

	inline static int32_t get_offset_of_hl2_camera_script_11() { return static_cast<int32_t>(offsetof(ros_connector_enable_tCEA6FEF1FEBFD7DF90CBAF4A0177F8E3664A821C, ___hl2_camera_script_11)); }
	inline HL2CameraPublisher_tB1C84964EE7CB72118B83EC8FEB0695B63EA6F6D * get_hl2_camera_script_11() const { return ___hl2_camera_script_11; }
	inline HL2CameraPublisher_tB1C84964EE7CB72118B83EC8FEB0695B63EA6F6D ** get_address_of_hl2_camera_script_11() { return &___hl2_camera_script_11; }
	inline void set_hl2_camera_script_11(HL2CameraPublisher_tB1C84964EE7CB72118B83EC8FEB0695B63EA6F6D * value)
	{
		___hl2_camera_script_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hl2_camera_script_11), (void*)value);
	}
};


// RosSharp.RosBridgeClient.HL2CameraPublisher
struct HL2CameraPublisher_tB1C84964EE7CB72118B83EC8FEB0695B63EA6F6D  : public UnityPublisher_1_tD711D9F4A47C9FE079FB22B77AF7F17BD332295E
{
public:
	// System.String RosSharp.RosBridgeClient.HL2CameraPublisher::FrameId
	String_t* ___FrameId_7;
	// System.Int32 RosSharp.RosBridgeClient.HL2CameraPublisher::resolutionWidth
	int32_t ___resolutionWidth_8;
	// System.Int32 RosSharp.RosBridgeClient.HL2CameraPublisher::resolutionHeight
	int32_t ___resolutionHeight_9;
	// System.Int32 RosSharp.RosBridgeClient.HL2CameraPublisher::qualityLevel
	int32_t ___qualityLevel_10;
	// RosSharp.RosBridgeClient.MessageTypes.Sensor.CompressedImage RosSharp.RosBridgeClient.HL2CameraPublisher::message
	CompressedImage_tD761DA115A79254BA980C494792F926F9FB4F639 * ___message_11;
	// UnityEngine.WebCamTexture RosSharp.RosBridgeClient.HL2CameraPublisher::webcam
	WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * ___webcam_12;
	// UnityEngine.Texture2D RosSharp.RosBridgeClient.HL2CameraPublisher::webcamImage
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___webcamImage_13;

public:
	inline static int32_t get_offset_of_FrameId_7() { return static_cast<int32_t>(offsetof(HL2CameraPublisher_tB1C84964EE7CB72118B83EC8FEB0695B63EA6F6D, ___FrameId_7)); }
	inline String_t* get_FrameId_7() const { return ___FrameId_7; }
	inline String_t** get_address_of_FrameId_7() { return &___FrameId_7; }
	inline void set_FrameId_7(String_t* value)
	{
		___FrameId_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FrameId_7), (void*)value);
	}

	inline static int32_t get_offset_of_resolutionWidth_8() { return static_cast<int32_t>(offsetof(HL2CameraPublisher_tB1C84964EE7CB72118B83EC8FEB0695B63EA6F6D, ___resolutionWidth_8)); }
	inline int32_t get_resolutionWidth_8() const { return ___resolutionWidth_8; }
	inline int32_t* get_address_of_resolutionWidth_8() { return &___resolutionWidth_8; }
	inline void set_resolutionWidth_8(int32_t value)
	{
		___resolutionWidth_8 = value;
	}

	inline static int32_t get_offset_of_resolutionHeight_9() { return static_cast<int32_t>(offsetof(HL2CameraPublisher_tB1C84964EE7CB72118B83EC8FEB0695B63EA6F6D, ___resolutionHeight_9)); }
	inline int32_t get_resolutionHeight_9() const { return ___resolutionHeight_9; }
	inline int32_t* get_address_of_resolutionHeight_9() { return &___resolutionHeight_9; }
	inline void set_resolutionHeight_9(int32_t value)
	{
		___resolutionHeight_9 = value;
	}

	inline static int32_t get_offset_of_qualityLevel_10() { return static_cast<int32_t>(offsetof(HL2CameraPublisher_tB1C84964EE7CB72118B83EC8FEB0695B63EA6F6D, ___qualityLevel_10)); }
	inline int32_t get_qualityLevel_10() const { return ___qualityLevel_10; }
	inline int32_t* get_address_of_qualityLevel_10() { return &___qualityLevel_10; }
	inline void set_qualityLevel_10(int32_t value)
	{
		___qualityLevel_10 = value;
	}

	inline static int32_t get_offset_of_message_11() { return static_cast<int32_t>(offsetof(HL2CameraPublisher_tB1C84964EE7CB72118B83EC8FEB0695B63EA6F6D, ___message_11)); }
	inline CompressedImage_tD761DA115A79254BA980C494792F926F9FB4F639 * get_message_11() const { return ___message_11; }
	inline CompressedImage_tD761DA115A79254BA980C494792F926F9FB4F639 ** get_address_of_message_11() { return &___message_11; }
	inline void set_message_11(CompressedImage_tD761DA115A79254BA980C494792F926F9FB4F639 * value)
	{
		___message_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_11), (void*)value);
	}

	inline static int32_t get_offset_of_webcam_12() { return static_cast<int32_t>(offsetof(HL2CameraPublisher_tB1C84964EE7CB72118B83EC8FEB0695B63EA6F6D, ___webcam_12)); }
	inline WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * get_webcam_12() const { return ___webcam_12; }
	inline WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 ** get_address_of_webcam_12() { return &___webcam_12; }
	inline void set_webcam_12(WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * value)
	{
		___webcam_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webcam_12), (void*)value);
	}

	inline static int32_t get_offset_of_webcamImage_13() { return static_cast<int32_t>(offsetof(HL2CameraPublisher_tB1C84964EE7CB72118B83EC8FEB0695B63EA6F6D, ___webcamImage_13)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_webcamImage_13() const { return ___webcamImage_13; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_webcamImage_13() { return &___webcamImage_13; }
	inline void set_webcamImage_13(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___webcamImage_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webcamImage_13), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// RosSharp.Urdf.UrdfPlugin[]
struct UrdfPluginU5BU5D_tB12D0FBB1D18781C071791B4E6EF597120EEFD41  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690 * m_Items[1];

public:
	inline UrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.MeshCollider[]
struct MeshColliderU5BU5D_tF9453F8094ED9F1421E6FB2286A5737C28A1EE79  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * m_Items[1];

public:
	inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * m_Items[1];

public:
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// RosSharp.Urdf.UrdfInertial[]
struct UrdfInertialU5BU5D_tE74D5B2C8E6857D11AC1940DBA018DD3A739F472  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A * m_Items[1];

public:
	inline UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// RosSharp.Urdf.UrdfJoint[]
struct UrdfJointU5BU5D_tE2C561EACF3FE6E8C5978658CD7CB5ADC582E8BB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UrdfJoint_t579DFEB5752FB8D571991AA28D6EF709000E5996 * m_Items[1];

public:
	inline UrdfJoint_t579DFEB5752FB8D571991AA28D6EF709000E5996 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UrdfJoint_t579DFEB5752FB8D571991AA28D6EF709000E5996 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UrdfJoint_t579DFEB5752FB8D571991AA28D6EF709000E5996 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UrdfJoint_t579DFEB5752FB8D571991AA28D6EF709000E5996 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UrdfJoint_t579DFEB5752FB8D571991AA28D6EF709000E5996 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UrdfJoint_t579DFEB5752FB8D571991AA28D6EF709000E5996 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponents_TisRuntimeObject_mEBC8AE0C8843120678A284931632FCCBE15F0C46_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.UInt32>(Windows.Foundation.IAsyncOperation`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mABBAB86FD9F33AA30FCEA00286EBB81DB7937D84_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD_gshared (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>,TCPClient/<SendSpatialImageAsync>d__16>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A_m56B82019D4EFF61B2E908A4E967F79755C69E2AD_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * ___awaiter0, U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C_gshared (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.Boolean>(Windows.Foundation.IAsyncOperation`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB07613CE857075BEAD679A7DF37A6C99100AC47D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_gshared (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,TCPClient/<SendSpatialImageAsync>d__16>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A_m25EA64C2B1A70948690905AB812B8B2AEE48C06E_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * ___awaiter0, U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_gshared (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>,TCPClient/<SendSpatialImageAsync>d__17>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B_m7DF35F3D0F349A08FF672EFCBFCFDE330A5C8322_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * ___awaiter0, U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,TCPClient/<SendSpatialImageAsync>d__17>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B_m3D3F36E875DC1EF5271CF9620D06143E7B81118D_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * ___awaiter0, U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>,TCPClient/<SendUINT16Async>d__14>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC_mEB1393223D11C43B561AED9783FB1F619EDB9389_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * ___awaiter0, U3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,TCPClient/<SendUINT16Async>d__14>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC_mF30B99097F976CFC61FF0ED5AF4A99351EC7E9B3_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * ___awaiter0, U3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>,TCPClient/<SendUINT16Async>d__15>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141_mBBF077C2AF315B25009BB8DB7B4D7980DBC374D9_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * ___awaiter0, U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,TCPClient/<SendUINT16Async>d__15>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141_mC8FDA1134E403C8AD6A0ECB6397EED37A2882AAC_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * ___awaiter0, U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,TCPClient/<StartCoonection>d__11>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E_mEA42F36DF36FCF285682790D48DEC001E07490F4_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E * ___stateMachine1, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 RosSharp.Urdf.UrdfOrigin::GetPositionFromUrdf(RosSharp.Urdf.Origin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UrdfOrigin_GetPositionFromUrdf_mF61445C96DE8E10C3EAE867C2BCFFCFE336282A9 (Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * ___origin0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// UnityEngine.Vector3 RosSharp.Urdf.UrdfOrigin::GetRotationFromUrdf(RosSharp.Urdf.Origin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UrdfOrigin_GetRotationFromUrdf_mADD878C9FCBB6D1D73CC271DC9570BDE5E6433C3 (Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * ___origin0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, const RuntimeMethod* method);
// UnityEngine.Vector3 RosSharp.TransformExtensions::ToVector3(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformExtensions_ToVector3_m8BC8FA302463E6B261BCE8795C9B86133211C1D3 (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___array0, const RuntimeMethod* method);
// UnityEngine.Vector3 RosSharp.TransformExtensions::Ros2Unity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformExtensions_Ros2Unity_m44C678B238F4332CD880056B3F948D1F16D02C54 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector30, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Double[] RosSharp.Urdf.UrdfOrigin::ExportXyzData(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* UrdfOrigin_ExportXyzData_m9EC8E76E6FA162E275B5CA14301B916C322D286F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, const RuntimeMethod* method);
// System.Double[] RosSharp.Urdf.UrdfOrigin::ExportRpyData(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* UrdfOrigin_ExportRpyData_mB5BA2301F48AC8DA0E64B956C7F2255B84C4886B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, const RuntimeMethod* method);
// System.Void RosSharp.Urdf.Origin::.ctor(System.Double[],System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Origin__ctor_mAE2771A99D2B46447CA8A0E9D2A62988E3BE5728 (Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___xyz0, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___rpy1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 RosSharp.TransformExtensions::Unity2Ros(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformExtensions_Unity2Ros_mA6DA97E7DB31FD1D3CC2576348C490FB31351FCD (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector30, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Double[] RosSharp.TransformExtensions::ToRoundedDoubleArray(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* TransformExtensions_ToRoundedDoubleArray_m728AE7056A04EE834E3DE3AFD8356209346855C0 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector30, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<RosSharp.Urdf.UrdfPlugin>()
inline UrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690 * GameObject_AddComponent_TisUrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690_m7EACAC1A10364CE3EA183B0C024EC35731D7000F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  UrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Xml.XmlDocument::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocument__ctor_m1E5403972A058DD1EBEE531962F862BBBB08BAB1 (XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F * __this, const RuntimeMethod* method);
// System.Void RosSharp.Urdf.Plugin::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin__ctor_mD86641846880020FFFD7360B8058CEAE934F9D3C (Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 * __this, String_t* ___text0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mE6AF3EFCF84F2296622CD42FBF9EEAF07244C0A8 (RuntimeObject * ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void RosSharp.TransformExtensions::SetParentAndAlign(UnityEngine.Transform,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformExtensions_SetParentAndAlign_m1D807FB365BB366B84D464C2B0705BE037D18064 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, bool ___keepLocalTransform2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<RosSharp.Urdf.UrdfPlugins>()
inline UrdfPlugins_tA1653922BA04BE88F719546442B44167B09422F2 * GameObject_AddComponent_TisUrdfPlugins_tA1653922BA04BE88F719546442B44167B09422F2_m11B0C64FCA016136DA0ABAADA7E41BAFCF647C25 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  UrdfPlugins_tA1653922BA04BE88F719546442B44167B09422F2 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<RosSharp.Urdf.Plugin>::GetEnumerator()
inline Enumerator_t69C5C222CE7C41D212421CE44C01CC2ACBC740EC  List_1_GetEnumerator_mD99562CA3082752AFB65CF949100AAD6CA780431 (List_1_t9AA65034F7CE4079EBBA817F8802438FAF03E9DA * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t69C5C222CE7C41D212421CE44C01CC2ACBC740EC  (*) (List_1_t9AA65034F7CE4079EBBA817F8802438FAF03E9DA *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<RosSharp.Urdf.Plugin>::get_Current()
inline Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 * Enumerator_get_Current_m120FCBEE13619C117A142639F2E0544A6CBD6DD9_inline (Enumerator_t69C5C222CE7C41D212421CE44C01CC2ACBC740EC * __this, const RuntimeMethod* method)
{
	return ((  Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 * (*) (Enumerator_t69C5C222CE7C41D212421CE44C01CC2ACBC740EC *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void RosSharp.Urdf.UrdfPlugin::Create(UnityEngine.Transform,RosSharp.Urdf.Plugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UrdfPlugin_Create_mAB466F801514E83E9C2055B976C88BAC7A7C98AB (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 * ___plugin1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<RosSharp.Urdf.Plugin>::MoveNext()
inline bool Enumerator_MoveNext_m661DEEF8E1C72C0FF8680E47B6AC0EF9FAA6FA58 (Enumerator_t69C5C222CE7C41D212421CE44C01CC2ACBC740EC * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t69C5C222CE7C41D212421CE44C01CC2ACBC740EC *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<RosSharp.Urdf.Plugin>::Dispose()
inline void Enumerator_Dispose_m027A30434C02F0A1EBAF27737D773D9ADFED3C11 (Enumerator_t69C5C222CE7C41D212421CE44C01CC2ACBC740EC * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t69C5C222CE7C41D212421CE44C01CC2ACBC740EC *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// !!0[] UnityEngine.Component::GetComponents<RosSharp.Urdf.UrdfPlugin>()
inline UrdfPluginU5BU5D_tB12D0FBB1D18781C071791B4E6EF597120EEFD41* Component_GetComponents_TisUrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690_m83B69F6E20F86FCA4225EF2A63C76277AED2B866 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  UrdfPluginU5BU5D_tB12D0FBB1D18781C071791B4E6EF597120EEFD41* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_mEBC8AE0C8843120678A284931632FCCBE15F0C46_gshared)(__this, method);
}
// System.Void System.Func`2<RosSharp.Urdf.UrdfPlugin,RosSharp.Urdf.Plugin>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mAB346F6617AB74E3830B9706D945B24C692EF5D4 (Func_2_tDB0F2F729A086C2B8F1B89D19A1F0F373335917C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDB0F2F729A086C2B8F1B89D19A1F0F373335917C *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<RosSharp.Urdf.UrdfPlugin,RosSharp.Urdf.Plugin>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisUrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690_TisPlugin_t269455CC6FF76038399ED2E022EF65D16F407D67_mD243E3A3DE752CC47B85961F9B8A9D321EDE9793 (RuntimeObject* ___source0, Func_2_tDB0F2F729A086C2B8F1B89D19A1F0F373335917C * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tDB0F2F729A086C2B8F1B89D19A1F0F373335917C *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<RosSharp.Urdf.Plugin,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD3F63584DCDE15485460C3EA9086ED3ECD2D03A6 (Func_2_t62148C2BAFD36B7AC6CEFCDF70FDCB96BB968DD5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t62148C2BAFD36B7AC6CEFCDF70FDCB96BB968DD5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<RosSharp.Urdf.Plugin>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisPlugin_t269455CC6FF76038399ED2E022EF65D16F407D67_m97ED8F6E2DB4669CCC7EE74197CCAD877B7E818B (RuntimeObject* ___source0, Func_2_t62148C2BAFD36B7AC6CEFCDF70FDCB96BB968DD5 * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t62148C2BAFD36B7AC6CEFCDF70FDCB96BB968DD5 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared)(___source0, ___predicate1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<RosSharp.Urdf.Plugin>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t9AA65034F7CE4079EBBA817F8802438FAF03E9DA * Enumerable_ToList_TisPlugin_t269455CC6FF76038399ED2E022EF65D16F407D67_m9BE1CCDD116392CFC03E7F22E10F94C5C5CE0E9C (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t9AA65034F7CE4079EBBA817F8802438FAF03E9DA * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared)(___source0, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.MeshCollider>()
inline MeshColliderU5BU5D_tF9453F8094ED9F1421E6FB2286A5737C28A1EE79* Component_GetComponentsInChildren_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m6BFDC225E11C553446E7F957E257B00A79BF63D6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MeshColliderU5BU5D_tF9453F8094ED9F1421E6FB2286A5737C28A1EE79* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// System.Void UnityEngine.MeshCollider::set_convex(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCollider_set_convex_mE94F2BE7760587C1944992B7AF9959ED425F631A (MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * __this, bool ___value0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Rigidbody>()
inline RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* Component_GetComponentsInChildren_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m4B7CE88739C1B159238F3EB3FA43B8174F750BA8 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, bool ___value0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<RosSharp.Urdf.UrdfInertial>()
inline UrdfInertialU5BU5D_tE74D5B2C8E6857D11AC1940DBA018DD3A739F472* Component_GetComponentsInChildren_TisUrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A_m49F6AEDCBE3E260313CF0D3780099F15A021F9EA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  UrdfInertialU5BU5D_tE74D5B2C8E6857D11AC1940DBA018DD3A739F472* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1057292FB3199E87664F40B8BCBA7A7E64D1A096 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, bool ___value0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<RosSharp.Urdf.UrdfJoint>()
inline UrdfJointU5BU5D_tE2C561EACF3FE6E8C5978658CD7CB5ADC582E8BB* Component_GetComponentsInChildren_TisUrdfJoint_t579DFEB5752FB8D571991AA28D6EF709000E5996_m908637D38CBE965DBB4D04CBB4BC62B7C97AE61F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  UrdfJointU5BU5D_tE2C561EACF3FE6E8C5978658CD7CB5ADC582E8BB* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// System.Void RosSharp.Urdf.UrdfJoint::GenerateUniqueJointName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UrdfJoint_GenerateUniqueJointName_m5D518038028AA0CA8E0BDF001F45C1C6605BE0F6 (UrdfJoint_t579DFEB5752FB8D571991AA28D6EF709000E5996 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<RosSharp.RosBridgeClient.RosConnector>()
inline RosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839 * GameObject_GetComponent_TisRosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839_mA6D9F57D295E0247914848496E379541A1FA0F86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<RosSharp.RosBridgeClient.HL2CameraPublisher>()
inline HL2CameraPublisher_tB1C84964EE7CB72118B83EC8FEB0695B63EA6F6D * GameObject_GetComponent_TisHL2CameraPublisher_tB1C84964EE7CB72118B83EC8FEB0695B63EA6F6D_m623C6F56A657F7D4B1E644C36FF05F153869F631 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  HL2CameraPublisher_tB1C84964EE7CB72118B83EC8FEB0695B63EA6F6D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void HLCameraAccess/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8D7D66FF8931B3F5DE2832861EFA2CD4A52BD1CA (U3CU3Ec_t3DEC1919CA9119C41BDEAE3A6FFE290111D57AD8 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Resolution::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolution_get_width_mDD9DCC89D65057B64C413AF15BEE2E37E9892065 (Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Resolution::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolution_get_height_mB90F24337D7B96A288F8BE1D0F2F3599B785AD27 (Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 * __this, const RuntimeMethod* method);
// System.UInt32 Windows.Storage.Streams.DataWriter::WriteString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t DataWriter_WriteString_m37D3000CE2655C1E9179B4EC7B736BF73D320D03 (DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Windows.Storage.Streams.DataWriter::WriteInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataWriter_WriteInt32_m5D96F1EA9585FF7CF685775D5394B8F1799423C9 (DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Windows.Storage.Streams.DataWriter::WriteInt64(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataWriter_WriteInt64_mA3731579C00D7269B6DBA0DC3329F5383B0D0CE4 (DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void Windows.Storage.Streams.DataWriter::WriteBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataWriter_WriteBytes_mADCDD5B8F9F6AEC47315350EB524A5FE007B74FE (DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// Windows.Storage.Streams.DataWriterStoreOperation Windows.Storage.Streams.DataWriter::StoreAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataWriterStoreOperation_tAB8CDEF471A0A5F5354E753953E1510E142C827C * DataWriter_StoreAsync_m6377506DB362DDD4CE31FD9530A16873D4473AA4 (DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.UInt32>(Windows.Foundation.IAsyncOperation`1<!!0>)
inline TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mABBAB86FD9F33AA30FCEA00286EBB81DB7937D84 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  (*) (RuntimeObject*, const RuntimeMethod*))WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mABBAB86FD9F33AA30FCEA00286EBB81DB7937D84_gshared)(___source0, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>,TCPClient/<SendSpatialImageAsync>d__16>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A_m56B82019D4EFF61B2E908A4E967F79755C69E2AD (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * ___awaiter0, U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *, U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A_m56B82019D4EFF61B2E908A4E967F79755C69E2AD_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>::GetResult()
inline uint32_t TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C_gshared)(__this, method);
}
// Windows.Foundation.IAsyncOperation`1<System.Boolean> Windows.Storage.Streams.DataWriter::FlushAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataWriter_FlushAsync_mBEF87BDA2121D90A25DC8A7AB180CA6CB8B3330B (DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.Boolean>(Windows.Foundation.IAsyncOperation`1<!!0>)
inline TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB07613CE857075BEAD679A7DF37A6C99100AC47D (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  (*) (RuntimeObject*, const RuntimeMethod*))WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB07613CE857075BEAD679A7DF37A6C99100AC47D_gshared)(___source0, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1 (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,TCPClient/<SendSpatialImageAsync>d__16>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A_m25EA64C2B1A70948690905AB812B8B2AEE48C06E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * ___awaiter0, U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *, U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A_m25EA64C2B1A70948690905AB812B8B2AEE48C06E_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
inline bool TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_gshared)(__this, method);
}
// System.Int32 System.Exception::get_HResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Exception_get_HResult_mAF0FE56C31C3C7D5567539FB46BE80D6B9D1AD42_inline (Exception_t * __this, const RuntimeMethod* method);
// Windows.Networking.Sockets.SocketErrorStatus Windows.Networking.Sockets.SocketError::GetStatus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketError_GetStatus_m4E09DAB6C550036CD4C64C51195DDAA03D8669D8 (int32_t ___hresult0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void TCPClient/<SendSpatialImageAsync>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendSpatialImageAsyncU3Ed__16_MoveNext_m963DB74C70D3C8EA41E172146F6CC0BF384B6A82 (U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void TCPClient/<SendSpatialImageAsync>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendSpatialImageAsyncU3Ed__16_SetStateMachine_m9F285F6E713D9490F44B568F30D599D9BB29743A (U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>,TCPClient/<SendSpatialImageAsync>d__17>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B_m7DF35F3D0F349A08FF672EFCBFCFDE330A5C8322 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * ___awaiter0, U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *, U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B_m7DF35F3D0F349A08FF672EFCBFCFDE330A5C8322_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,TCPClient/<SendSpatialImageAsync>d__17>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B_m3D3F36E875DC1EF5271CF9620D06143E7B81118D (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * ___awaiter0, U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *, U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B_m3D3F36E875DC1EF5271CF9620D06143E7B81118D_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void TCPClient/<SendSpatialImageAsync>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendSpatialImageAsyncU3Ed__17_MoveNext_mF3C0F92989BFA46A6125CE2B9E314A26F7B6E698 (U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B * __this, const RuntimeMethod* method);
// System.Void TCPClient/<SendSpatialImageAsync>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendSpatialImageAsyncU3Ed__17_SetStateMachine_m819550350939F054A3432EEACCEF9745B4CC3307 (U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Byte[] TCPClient::UINT16ToBytes(System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* TCPClient_UINT16ToBytes_m0B9B88D62CDD7F0D2550B9979A16025EFE059460 (TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * __this, UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>,TCPClient/<SendUINT16Async>d__14>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC_mEB1393223D11C43B561AED9783FB1F619EDB9389 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * ___awaiter0, U3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *, U3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC_mEB1393223D11C43B561AED9783FB1F619EDB9389_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,TCPClient/<SendUINT16Async>d__14>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC_mF30B99097F976CFC61FF0ED5AF4A99351EC7E9B3 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * ___awaiter0, U3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *, U3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC_mF30B99097F976CFC61FF0ED5AF4A99351EC7E9B3_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void TCPClient/<SendUINT16Async>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUINT16AsyncU3Ed__14_MoveNext_m923619CB32678B83A16D1FE0316948074A41E1B2 (U3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC * __this, const RuntimeMethod* method);
// System.Void TCPClient/<SendUINT16Async>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUINT16AsyncU3Ed__14_SetStateMachine_mC3B6759950EB2C7571F27B89FA3D8AF3E9D11432 (U3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>,TCPClient/<SendUINT16Async>d__15>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141_mBBF077C2AF315B25009BB8DB7B4D7980DBC374D9 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * ___awaiter0, U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *, U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141_mBBF077C2AF315B25009BB8DB7B4D7980DBC374D9_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,TCPClient/<SendUINT16Async>d__15>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141_mC8FDA1134E403C8AD6A0ECB6397EED37A2882AAC (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * ___awaiter0, U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *, U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141_mC8FDA1134E403C8AD6A0ECB6397EED37A2882AAC_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void TCPClient/<SendUINT16Async>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUINT16AsyncU3Ed__15_MoveNext_mB107D978A34B58F01831FB70516C3F90FEAB0190 (U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141 * __this, const RuntimeMethod* method);
// System.Void TCPClient/<SendUINT16Async>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUINT16AsyncU3Ed__15_SetStateMachine_m6F0958663D358A62D3FF7B3FB272F8442EABE823 (U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Windows.Networking.Sockets.StreamSocket::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamSocket_Dispose_m49BB98678857BA758A033329A39462904D10B228 (StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * __this, const RuntimeMethod* method);
// System.Void Windows.Networking.Sockets.StreamSocket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamSocket__ctor_m0ADAF625EE434F52F6CD1F539F961AAB95876533 (StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * __this, const RuntimeMethod* method);
// System.Void Windows.Networking.HostName::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostName__ctor_mB6DD447379F5F9BAC0C2B672318FEF41463856A7 (HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5 * __this, String_t* ___hostName0, const RuntimeMethod* method);
// Windows.Foundation.IAsyncAction Windows.Networking.Sockets.StreamSocket::ConnectAsync(Windows.Networking.HostName,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamSocket_ConnectAsync_mD79B5CF30BDBA1A492F5818DF172075FEF4913EE (StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * __this, HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5 * ___remoteHostName0, String_t* ___remoteServiceName1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.WindowsRuntimeSystemExtensions::GetAwaiter(Windows.Foundation.IAsyncAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  WindowsRuntimeSystemExtensions_GetAwaiter_m0218FEA730C2DAD8311AA5A6BAE767DC7BB5D58B (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,TCPClient/<StartCoonection>d__11>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E_mEA42F36DF36FCF285682790D48DEC001E07490F4 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E_mEA42F36DF36FCF285682790D48DEC001E07490F4_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// Windows.Storage.Streams.IOutputStream Windows.Networking.Sockets.StreamSocket::get_OutputStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamSocket_get_OutputStream_mDE216F07C1125E7971BEB545FF36F0C52AF2AA44 (StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * __this, const RuntimeMethod* method);
// System.Void Windows.Storage.Streams.DataWriter::.ctor(Windows.Storage.Streams.IOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataWriter__ctor_mFCB1F83900A0D1AC0F038BCC9D01383099FBD27E (DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * __this, RuntimeObject* ___outputStream0, const RuntimeMethod* method);
// Windows.Storage.Streams.IInputStream Windows.Networking.Sockets.StreamSocket::get_InputStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamSocket_get_InputStream_mE7A37722EC598466C097C7FCE06F1B9D2E27DAD4 (StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * __this, const RuntimeMethod* method);
// System.Void Windows.Storage.Streams.DataReader::.ctor(Windows.Storage.Streams.IInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReader__ctor_mF2123BC23FC33A58A140ACB4C04B5007B4974360 (DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E * __this, RuntimeObject* ___inputStream0, const RuntimeMethod* method);
// System.Void Windows.Storage.Streams.DataReader::put_InputStreamOptions(Windows.Storage.Streams.InputStreamOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReader_put_InputStreamOptions_m7350744D69B3834E66B34B06E4FC542601BB03DC (DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E * __this, uint32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void TCPClient/<StartCoonection>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCoonectionU3Ed__11_MoveNext_mB193A8FC158A571ECE4FA3A6F3ACDBD9009258C7 (U3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E * __this, const RuntimeMethod* method);
// System.Void TCPClient/<StartCoonection>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCoonectionU3Ed__11_SetStateMachine_m17CFA4C2A56D696E0E4802E621A2323C76BABC9B (U3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void RosSharp.RosBridgeClient.Actionlib.UnityFibonacciActionSever/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5B0E1DED4BDFEF400D2768BE929BAEFE44A7B27B (U3CU3Ec_t266B799279B56E423B242D44468C18D2AC57075A * __this, const RuntimeMethod* method);
// System.Void RosSharp.Urdf.UrdfPlugins/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDB61C170875ADF820A910BEE3239EC8C36A35CF9 (U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862 * __this, const RuntimeMethod* method);
// RosSharp.Urdf.Plugin RosSharp.Urdf.UrdfPlugin::ExportPluginData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 * UrdfPlugin_ExportPluginData_m0A59A4244303EFDD21BEC86C761447709478172F (UrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RosSharp.Urdf.UrdfLink::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UrdfLink__ctor_mDC1F5B4F00E1468FF62C2BB0CD3FB33A2D843CB6 (UrdfLink_t82E0AE7CFF5AAA8752AC2776B508F475621980B4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void RosSharp.Urdf.UrdfOrigin::ImportOriginData(UnityEngine.Transform,RosSharp.Urdf.Origin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UrdfOrigin_ImportOriginData_mB9201A16F788288E8B800A77572E195E28CE0550 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * ___origin1, const RuntimeMethod* method)
{
	{
		// if (origin != null)
		Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * L_0 = ___origin1;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// transform.Translate(GetPositionFromUrdf(origin));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___transform0;
		Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * L_2 = ___origin1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = UrdfOrigin_GetPositionFromUrdf_mF61445C96DE8E10C3EAE867C2BCFFCFE336282A9(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_1, L_3, /*hidden argument*/NULL);
		// transform.Rotate(GetRotationFromUrdf(origin));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = ___transform0;
		Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * L_5 = ___origin1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = UrdfOrigin_GetRotationFromUrdf_mADD878C9FCBB6D1D73CC271DC9570BDE5E6433C3(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_4, L_6, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 RosSharp.Urdf.UrdfOrigin::GetPositionFromUrdf(RosSharp.Urdf.Origin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UrdfOrigin_GetPositionFromUrdf_mF61445C96DE8E10C3EAE867C2BCFFCFE336282A9 (Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * ___origin0, const RuntimeMethod* method)
{
	{
		// if (origin.Xyz != null)
		Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * L_0 = ___origin0;
		NullCheck(L_0);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1 = L_0->get_Xyz_0();
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// return origin.Xyz.ToVector3().Ros2Unity();
		Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * L_2 = ___origin0;
		NullCheck(L_2);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_3 = L_2->get_Xyz_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = TransformExtensions_ToVector3_m8BC8FA302463E6B261BCE8795C9B86133211C1D3(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = TransformExtensions_Ros2Unity_m44C678B238F4332CD880056B3F948D1F16D02C54(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0019:
	{
		// return Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 RosSharp.Urdf.UrdfOrigin::GetRotationFromUrdf(RosSharp.Urdf.Origin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UrdfOrigin_GetRotationFromUrdf_mADD878C9FCBB6D1D73CC271DC9570BDE5E6433C3 (Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * ___origin0, const RuntimeMethod* method)
{
	{
		// if (origin.Rpy != null)
		Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * L_0 = ___origin0;
		NullCheck(L_0);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1 = L_0->get_Rpy_1();
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// return new Vector3(
		//     (float)+origin.Rpy[1] * Mathf.Rad2Deg,
		//     (float)-origin.Rpy[2] * Mathf.Rad2Deg,
		//     (float)-origin.Rpy[0] * Mathf.Rad2Deg);
		Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * L_2 = ___origin0;
		NullCheck(L_2);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_3 = L_2->get_Rpy_1();
		NullCheck(L_3);
		int32_t L_4 = 1;
		double L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * L_6 = ___origin0;
		NullCheck(L_6);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_7 = L_6->get_Rpy_1();
		NullCheck(L_7);
		int32_t L_8 = 2;
		double L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * L_10 = ___origin0;
		NullCheck(L_10);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_11 = L_10->get_Rpy_1();
		NullCheck(L_11);
		int32_t L_12 = 0;
		double L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_14), ((float)il2cpp_codegen_multiply((float)((float)((float)L_5)), (float)(57.2957802f))), ((float)il2cpp_codegen_multiply((float)((float)((float)((-L_9)))), (float)(57.2957802f))), ((float)il2cpp_codegen_multiply((float)((float)((float)((-L_13)))), (float)(57.2957802f))), /*hidden argument*/NULL);
		return L_14;
	}

IL_003d:
	{
		// return Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		return L_15;
	}
}
// RosSharp.Urdf.Origin RosSharp.Urdf.UrdfOrigin::ExportOriginData(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * UrdfOrigin_ExportOriginData_m10E56C75676DD991A3FB7888F317742C8BC82939 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_0 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_1 = NULL;
	{
		// double[] xyz = ExportXyzData(transform);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___transform0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1;
		L_1 = UrdfOrigin_ExportXyzData_m9EC8E76E6FA162E275B5CA14301B916C322D286F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// double[] rpy = ExportRpyData(transform);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___transform0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_3;
		L_3 = UrdfOrigin_ExportRpyData_mB5BA2301F48AC8DA0E64B956C7F2255B84C4886B(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// if (xyz != null || rpy != null)
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_4 = V_0;
		if (L_4)
		{
			goto IL_0014;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_5 = V_1;
		if (!L_5)
		{
			goto IL_001c;
		}
	}

IL_0014:
	{
		// return new Origin(xyz, rpy);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_6 = V_0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_7 = V_1;
		Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * L_8 = (Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 *)il2cpp_codegen_object_new(Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225_il2cpp_TypeInfo_var);
		Origin__ctor_mAE2771A99D2B46447CA8A0E9D2A62988E3BE5728(L_8, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_001c:
	{
		// return null;
		return (Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 *)NULL;
	}
}
// System.Double[] RosSharp.Urdf.UrdfOrigin::ExportXyzData(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* UrdfOrigin_ExportXyzData_m9EC8E76E6FA162E275B5CA14301B916C322D286F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 xyzVector = transform.localPosition.Unity2Ros();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___transform0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = TransformExtensions_Unity2Ros_mA6DA97E7DB31FD1D3CC2576348C490FB31351FCD(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// return xyzVector == Vector3.zero ? null : xyzVector.ToRoundedDoubleArray();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_5;
		L_5 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_3, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_7;
		L_7 = TransformExtensions_ToRoundedDoubleArray_m728AE7056A04EE834E3DE3AFD8356209346855C0(L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0020:
	{
		return (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)NULL;
	}
}
// System.Double[] RosSharp.Urdf.UrdfOrigin::ExportRpyData(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* UrdfOrigin_ExportRpyData_mB5BA2301F48AC8DA0E64B956C7F2255B84C4886B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 rpyVector = new Vector3(
		//     -transform.localEulerAngles.z * Mathf.Deg2Rad,
		//     transform.localEulerAngles.x * Mathf.Deg2Rad,
		//     -transform.localEulerAngles.y * Mathf.Deg2Rad);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___transform0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_z_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ___transform0;
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = ___transform0;
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_y_3();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), ((float)il2cpp_codegen_multiply((float)((-L_2)), (float)(0.0174532924f))), ((float)il2cpp_codegen_multiply((float)L_5, (float)(0.0174532924f))), ((float)il2cpp_codegen_multiply((float)((-L_8)), (float)(0.0174532924f))), /*hidden argument*/NULL);
		// return rpyVector == Vector3.zero ? null : rpyVector.ToRoundedDoubleArray();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_11;
		L_11 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_9, L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0050;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_13;
		L_13 = TransformExtensions_ToRoundedDoubleArray_m728AE7056A04EE834E3DE3AFD8356209346855C0(L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0050:
	{
		return (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)NULL;
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
// System.Void RosSharp.Urdf.UrdfPlugin::Create(UnityEngine.Transform,RosSharp.Urdf.Plugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UrdfPlugin_Create_mAB466F801514E83E9C2055B976C88BAC7A7C98AB (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 * ___plugin1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690_m7EACAC1A10364CE3EA183B0C024EC35731D7000F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690 * V_0 = NULL;
	{
		// UrdfPlugin urdfPlugin = parent.gameObject.AddComponent<UrdfPlugin>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___parent0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		UrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690 * L_2;
		L_2 = GameObject_AddComponent_TisUrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690_m7EACAC1A10364CE3EA183B0C024EC35731D7000F(L_1, /*hidden argument*/GameObject_AddComponent_TisUrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690_m7EACAC1A10364CE3EA183B0C024EC35731D7000F_RuntimeMethod_var);
		V_0 = L_2;
		// if (plugin != null)
		Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 * L_3 = ___plugin1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// urdfPlugin.PluginText = plugin.text;
		UrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690 * L_4 = V_0;
		Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 * L_5 = ___plugin1;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_text_0();
		NullCheck(L_4);
		L_4->set_PluginText_4(L_6);
	}

IL_001b:
	{
		// }
		return;
	}
}
// RosSharp.Urdf.Plugin RosSharp.Urdf.UrdfPlugin::ExportPluginData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 * UrdfPlugin_ExportPluginData_m0A59A4244303EFDD21BEC86C761447709478172F (UrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 * V_0 = NULL;
	XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918 * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (PluginText == null || PluginText == "") return null;
		String_t* L_0 = __this->get_PluginText_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_1 = __this->get_PluginText_4();
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		// if (PluginText == null || PluginText == "") return null;
		return (Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 *)NULL;
	}

IL_001c:
	{
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		// XmlDocument xDoc = new XmlDocument();
		XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F * L_3 = (XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F *)il2cpp_codegen_object_new(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m1E5403972A058DD1EBEE531962F862BBBB08BAB1(L_3, /*hidden argument*/NULL);
		// xDoc.LoadXml(PluginText);
		String_t* L_4 = __this->get_PluginText_4();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void System.Xml.XmlDocument::LoadXml(System.String) */, L_3, L_4);
		// return new Plugin(PluginText);
		String_t* L_5 = __this->get_PluginText_4();
		Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 * L_6 = (Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 *)il2cpp_codegen_object_new(Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67_il2cpp_TypeInfo_var);
		Plugin__ctor_mD86641846880020FFFD7360B8058CEAE934F9D3C(L_6, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0056;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003b;
		}
		throw e;
	}

CATCH_003b:
	{ // begin catch(System.Xml.XmlException)
		// catch (XmlException e)
		V_1 = ((XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918 *)IL2CPP_GET_ACTIVE_EXCEPTION(XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918 *));
		// Debug.LogWarning("UrdfPlugin contains invalid XML. The contents of this plugin will not be " +
		//                  "written to the URDF file.\nXML Error: " + e.Message, this);
		XmlException_tBD65EFA0B5CA26D7D8F4906BEC7C83A76394C918 * L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_7);
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0E2E5285337A011CF0FAA1D241125F91B85B43CB)), L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_mE6AF3EFCF84F2296622CD42FBF9EEAF07244C0A8(L_9, __this, /*hidden argument*/NULL);
		// return null;
		V_0 = (Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 *)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0056;
	} // end catch (depth: 1)

IL_0056:
	{
		// }
		Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 * L_10 = V_0;
		return L_10;
	}
}
// System.Void RosSharp.Urdf.UrdfPlugin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UrdfPlugin__ctor_m339A815FD14C72D76749433AD4346A37818E7CBC (UrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void RosSharp.Urdf.UrdfPlugins::Create(UnityEngine.Transform,System.Collections.Generic.List`1<RosSharp.Urdf.Plugin>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UrdfPlugins_Create_mA58FBBB5D1EAEE6A4AF30911F94CF69157AC2FCC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___robot0, List_1_t9AA65034F7CE4079EBBA817F8802438FAF03E9DA * ___plugins1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m027A30434C02F0A1EBAF27737D773D9ADFED3C11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m661DEEF8E1C72C0FF8680E47B6AC0EF9FAA6FA58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m120FCBEE13619C117A142639F2E0544A6CBD6DD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUrdfPlugins_tA1653922BA04BE88F719546442B44167B09422F2_m11B0C64FCA016136DA0ABAADA7E41BAFCF647C25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD99562CA3082752AFB65CF949100AAD6CA780431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC648DA3297D06299B89CFD936903E43D7C25B32);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	Enumerator_t69C5C222CE7C41D212421CE44C01CC2ACBC740EC  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// GameObject pluginsObject = new GameObject("Plugins");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_0, _stringLiteralDC648DA3297D06299B89CFD936903E43D7C25B32, /*hidden argument*/NULL);
		V_0 = L_0;
		// pluginsObject.transform.SetParentAndAlign(robot);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ___robot0;
		TransformExtensions_SetParentAndAlign_m1D807FB365BB366B84D464C2B0705BE037D18064(L_2, L_3, (bool)1, /*hidden argument*/NULL);
		// pluginsObject.AddComponent<UrdfPlugins>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_0;
		NullCheck(L_4);
		UrdfPlugins_tA1653922BA04BE88F719546442B44167B09422F2 * L_5;
		L_5 = GameObject_AddComponent_TisUrdfPlugins_tA1653922BA04BE88F719546442B44167B09422F2_m11B0C64FCA016136DA0ABAADA7E41BAFCF647C25(L_4, /*hidden argument*/GameObject_AddComponent_TisUrdfPlugins_tA1653922BA04BE88F719546442B44167B09422F2_m11B0C64FCA016136DA0ABAADA7E41BAFCF647C25_RuntimeMethod_var);
		// if (plugins == null) return;
		List_1_t9AA65034F7CE4079EBBA817F8802438FAF03E9DA * L_6 = ___plugins1;
		if (L_6)
		{
			goto IL_0023;
		}
	}
	{
		// if (plugins == null) return;
		return;
	}

IL_0023:
	{
		// foreach (var plugin in plugins)
		List_1_t9AA65034F7CE4079EBBA817F8802438FAF03E9DA * L_7 = ___plugins1;
		NullCheck(L_7);
		Enumerator_t69C5C222CE7C41D212421CE44C01CC2ACBC740EC  L_8;
		L_8 = List_1_GetEnumerator_mD99562CA3082752AFB65CF949100AAD6CA780431(L_7, /*hidden argument*/List_1_GetEnumerator_mD99562CA3082752AFB65CF949100AAD6CA780431_RuntimeMethod_var);
		V_1 = L_8;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_002c:
		{
			// foreach (var plugin in plugins)
			Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 * L_9;
			L_9 = Enumerator_get_Current_m120FCBEE13619C117A142639F2E0544A6CBD6DD9_inline((Enumerator_t69C5C222CE7C41D212421CE44C01CC2ACBC740EC *)(&V_1), /*hidden argument*/Enumerator_get_Current_m120FCBEE13619C117A142639F2E0544A6CBD6DD9_RuntimeMethod_var);
			V_2 = L_9;
			// UrdfPlugin.Create(pluginsObject.transform, plugin);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_0;
			NullCheck(L_10);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
			L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
			Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 * L_12 = V_2;
			UrdfPlugin_Create_mAB466F801514E83E9C2055B976C88BAC7A7C98AB(L_11, L_12, /*hidden argument*/NULL);
		}

IL_0040:
		{
			// foreach (var plugin in plugins)
			bool L_13;
			L_13 = Enumerator_MoveNext_m661DEEF8E1C72C0FF8680E47B6AC0EF9FAA6FA58((Enumerator_t69C5C222CE7C41D212421CE44C01CC2ACBC740EC *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m661DEEF8E1C72C0FF8680E47B6AC0EF9FAA6FA58_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_002c;
			}
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x59, FINALLY_004b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004b;
	}

FINALLY_004b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m027A30434C02F0A1EBAF27737D773D9ADFED3C11((Enumerator_t69C5C222CE7C41D212421CE44C01CC2ACBC740EC *)(&V_1), /*hidden argument*/Enumerator_Dispose_m027A30434C02F0A1EBAF27737D773D9ADFED3C11_RuntimeMethod_var);
		IL2CPP_END_FINALLY(75)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x59, IL_0059)
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<RosSharp.Urdf.Plugin> RosSharp.Urdf.UrdfPlugins::ExportPluginsData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9AA65034F7CE4079EBBA817F8802438FAF03E9DA * UrdfPlugins_ExportPluginsData_m9CF32A0D0A2C700F8292417F6BF33A48E24AC048 (UrdfPlugins_tA1653922BA04BE88F719546442B44167B09422F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisUrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690_m83B69F6E20F86FCA4225EF2A63C76277AED2B866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisUrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690_TisPlugin_t269455CC6FF76038399ED2E022EF65D16F407D67_mD243E3A3DE752CC47B85961F9B8A9D321EDE9793_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisPlugin_t269455CC6FF76038399ED2E022EF65D16F407D67_m9BE1CCDD116392CFC03E7F22E10F94C5C5CE0E9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisPlugin_t269455CC6FF76038399ED2E022EF65D16F407D67_m97ED8F6E2DB4669CCC7EE74197CCAD877B7E818B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mAB346F6617AB74E3830B9706D945B24C692EF5D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mD3F63584DCDE15485460C3EA9086ED3ECD2D03A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t62148C2BAFD36B7AC6CEFCDF70FDCB96BB968DD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDB0F2F729A086C2B8F1B89D19A1F0F373335917C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CExportPluginsDataU3Eb__1_0_mF8AD33592A69B12C9D6DD8D0A4A2F4410D084FC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CExportPluginsDataU3Eb__1_1_m51D2C8E264F4FAC62788169AB15EA8F131F17A95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tDB0F2F729A086C2B8F1B89D19A1F0F373335917C * G_B2_0 = NULL;
	UrdfPluginU5BU5D_tB12D0FBB1D18781C071791B4E6EF597120EEFD41* G_B2_1 = NULL;
	Func_2_tDB0F2F729A086C2B8F1B89D19A1F0F373335917C * G_B1_0 = NULL;
	UrdfPluginU5BU5D_tB12D0FBB1D18781C071791B4E6EF597120EEFD41* G_B1_1 = NULL;
	Func_2_t62148C2BAFD36B7AC6CEFCDF70FDCB96BB968DD5 * G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_t62148C2BAFD36B7AC6CEFCDF70FDCB96BB968DD5 * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		// return GetComponents<UrdfPlugin>()
		//     .Select(urdfPlugin => urdfPlugin.ExportPluginData())
		//     .Where(plugin => plugin != null)
		//     .ToList();
		UrdfPluginU5BU5D_tB12D0FBB1D18781C071791B4E6EF597120EEFD41* L_0;
		L_0 = Component_GetComponents_TisUrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690_m83B69F6E20F86FCA4225EF2A63C76277AED2B866(__this, /*hidden argument*/Component_GetComponents_TisUrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690_m83B69F6E20F86FCA4225EF2A63C76277AED2B866_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_il2cpp_TypeInfo_var);
		Func_2_tDB0F2F729A086C2B8F1B89D19A1F0F373335917C * L_1 = ((U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_il2cpp_TypeInfo_var))->get_U3CU3E9__1_0_1();
		Func_2_tDB0F2F729A086C2B8F1B89D19A1F0F373335917C * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_il2cpp_TypeInfo_var);
		U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862 * L_3 = ((U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tDB0F2F729A086C2B8F1B89D19A1F0F373335917C * L_4 = (Func_2_tDB0F2F729A086C2B8F1B89D19A1F0F373335917C *)il2cpp_codegen_object_new(Func_2_tDB0F2F729A086C2B8F1B89D19A1F0F373335917C_il2cpp_TypeInfo_var);
		Func_2__ctor_mAB346F6617AB74E3830B9706D945B24C692EF5D4(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CExportPluginsDataU3Eb__1_0_mF8AD33592A69B12C9D6DD8D0A4A2F4410D084FC4_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mAB346F6617AB74E3830B9706D945B24C692EF5D4_RuntimeMethod_var);
		Func_2_tDB0F2F729A086C2B8F1B89D19A1F0F373335917C * L_5 = L_4;
		((U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_il2cpp_TypeInfo_var))->set_U3CU3E9__1_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisUrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690_TisPlugin_t269455CC6FF76038399ED2E022EF65D16F407D67_mD243E3A3DE752CC47B85961F9B8A9D321EDE9793((RuntimeObject*)(RuntimeObject*)G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Select_TisUrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690_TisPlugin_t269455CC6FF76038399ED2E022EF65D16F407D67_mD243E3A3DE752CC47B85961F9B8A9D321EDE9793_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_il2cpp_TypeInfo_var);
		Func_2_t62148C2BAFD36B7AC6CEFCDF70FDCB96BB968DD5 * L_7 = ((U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_il2cpp_TypeInfo_var))->get_U3CU3E9__1_1_2();
		Func_2_t62148C2BAFD36B7AC6CEFCDF70FDCB96BB968DD5 * L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = L_6;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_6;
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_il2cpp_TypeInfo_var);
		U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862 * L_9 = ((U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t62148C2BAFD36B7AC6CEFCDF70FDCB96BB968DD5 * L_10 = (Func_2_t62148C2BAFD36B7AC6CEFCDF70FDCB96BB968DD5 *)il2cpp_codegen_object_new(Func_2_t62148C2BAFD36B7AC6CEFCDF70FDCB96BB968DD5_il2cpp_TypeInfo_var);
		Func_2__ctor_mD3F63584DCDE15485460C3EA9086ED3ECD2D03A6(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec_U3CExportPluginsDataU3Eb__1_1_m51D2C8E264F4FAC62788169AB15EA8F131F17A95_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mD3F63584DCDE15485460C3EA9086ED3ECD2D03A6_RuntimeMethod_var);
		Func_2_t62148C2BAFD36B7AC6CEFCDF70FDCB96BB968DD5 * L_11 = L_10;
		((U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_il2cpp_TypeInfo_var))->set_U3CU3E9__1_1_2(L_11);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
	}

IL_0049:
	{
		RuntimeObject* L_12;
		L_12 = Enumerable_Where_TisPlugin_t269455CC6FF76038399ED2E022EF65D16F407D67_m97ED8F6E2DB4669CCC7EE74197CCAD877B7E818B(G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Where_TisPlugin_t269455CC6FF76038399ED2E022EF65D16F407D67_m97ED8F6E2DB4669CCC7EE74197CCAD877B7E818B_RuntimeMethod_var);
		List_1_t9AA65034F7CE4079EBBA817F8802438FAF03E9DA * L_13;
		L_13 = Enumerable_ToList_TisPlugin_t269455CC6FF76038399ED2E022EF65D16F407D67_m9BE1CCDD116392CFC03E7F22E10F94C5C5CE0E9C(L_12, /*hidden argument*/Enumerable_ToList_TisPlugin_t269455CC6FF76038399ED2E022EF65D16F407D67_m9BE1CCDD116392CFC03E7F22E10F94C5C5CE0E9C_RuntimeMethod_var);
		return L_13;
	}
}
// System.Void RosSharp.Urdf.UrdfPlugins::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UrdfPlugins__ctor_m89B9D44F4F5DBCF953D090BD552BB3E509221B96 (UrdfPlugins_tA1653922BA04BE88F719546442B44167B09422F2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void RosSharp.Urdf.UrdfRobot::SetCollidersConvex(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UrdfRobot_SetCollidersConvex_mB196A7499C1CAF141935471A0D805DF7030C3A6E (UrdfRobot_t1F5CE295269BAA777893BE455369BB26C7E9712A * __this, bool ___convex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m6BFDC225E11C553446E7F957E257B00A79BF63D6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MeshColliderU5BU5D_tF9453F8094ED9F1421E6FB2286A5737C28A1EE79* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (MeshCollider meshCollider in GetComponentsInChildren<MeshCollider>())
		MeshColliderU5BU5D_tF9453F8094ED9F1421E6FB2286A5737C28A1EE79* L_0;
		L_0 = Component_GetComponentsInChildren_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m6BFDC225E11C553446E7F957E257B00A79BF63D6(__this, /*hidden argument*/Component_GetComponentsInChildren_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m6BFDC225E11C553446E7F957E257B00A79BF63D6_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (MeshCollider meshCollider in GetComponentsInChildren<MeshCollider>())
		MeshColliderU5BU5D_tF9453F8094ED9F1421E6FB2286A5737C28A1EE79* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// meshCollider.convex = convex;
		bool L_5 = ___convex0;
		NullCheck(L_4);
		MeshCollider_set_convex_mE94F2BE7760587C1944992B7AF9959ED425F631A(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0018:
	{
		// foreach (MeshCollider meshCollider in GetComponentsInChildren<MeshCollider>())
		int32_t L_7 = V_1;
		MeshColliderU5BU5D_tF9453F8094ED9F1421E6FB2286A5737C28A1EE79* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RosSharp.Urdf.UrdfRobot::SetRigidbodiesIsKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UrdfRobot_SetRigidbodiesIsKinematic_mB700865E1A5A51973E38D972735A7625BE336FE7 (UrdfRobot_t1F5CE295269BAA777893BE455369BB26C7E9712A * __this, bool ___isKinematic0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m4B7CE88739C1B159238F3EB3FA43B8174F750BA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (Rigidbody rb in GetComponentsInChildren<Rigidbody>())
		RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* L_0;
		L_0 = Component_GetComponentsInChildren_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m4B7CE88739C1B159238F3EB3FA43B8174F750BA8(__this, /*hidden argument*/Component_GetComponentsInChildren_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m4B7CE88739C1B159238F3EB3FA43B8174F750BA8_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (Rigidbody rb in GetComponentsInChildren<Rigidbody>())
		RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// rb.isKinematic = isKinematic;
		bool L_5 = ___isKinematic0;
		NullCheck(L_4);
		Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0018:
	{
		// foreach (Rigidbody rb in GetComponentsInChildren<Rigidbody>())
		int32_t L_7 = V_1;
		RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RosSharp.Urdf.UrdfRobot::SetUseUrdfInertiaData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UrdfRobot_SetUseUrdfInertiaData_mFF6EDD5542E13344E4E5614BC4B63AFA9BB58B64 (UrdfRobot_t1F5CE295269BAA777893BE455369BB26C7E9712A * __this, bool ___useUrdfData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisUrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A_m49F6AEDCBE3E260313CF0D3780099F15A021F9EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UrdfInertialU5BU5D_tE74D5B2C8E6857D11AC1940DBA018DD3A739F472* V_0 = NULL;
	int32_t V_1 = 0;
	UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A * G_B3_0 = NULL;
	UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A * G_B4_1 = NULL;
	{
		// foreach (UrdfInertial urdfInertial in GetComponentsInChildren<UrdfInertial>())
		UrdfInertialU5BU5D_tE74D5B2C8E6857D11AC1940DBA018DD3A739F472* L_0;
		L_0 = Component_GetComponentsInChildren_TisUrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A_m49F6AEDCBE3E260313CF0D3780099F15A021F9EA(__this, /*hidden argument*/Component_GetComponentsInChildren_TisUrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A_m49F6AEDCBE3E260313CF0D3780099F15A021F9EA_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_001e;
	}

IL_000b:
	{
		// foreach (UrdfInertial urdfInertial in GetComponentsInChildren<UrdfInertial>())
		UrdfInertialU5BU5D_tE74D5B2C8E6857D11AC1940DBA018DD3A739F472* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		UrdfInertial_tC87CCB157CC4903598213FEE63BE15A3CFF45A2A * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// urdfInertial.rigidbodyDataSource = useUrdfData ?
		//     UrdfInertial.RigidbodyDataSource.Urdf :
		//     UrdfInertial.RigidbodyDataSource.Unity;
		bool L_5 = ___useUrdfData0;
		G_B2_0 = L_4;
		if (L_5)
		{
			G_B3_0 = L_4;
			goto IL_0014;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0015;
	}

IL_0014:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0015:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_rigidbodyDataSource_6(G_B4_0);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001e:
	{
		// foreach (UrdfInertial urdfInertial in GetComponentsInChildren<UrdfInertial>())
		int32_t L_7 = V_1;
		UrdfInertialU5BU5D_tE74D5B2C8E6857D11AC1940DBA018DD3A739F472* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RosSharp.Urdf.UrdfRobot::SetRigidbodiesUseGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UrdfRobot_SetRigidbodiesUseGravity_m9A7244771AB4D4D98E6279B9D886F451A354CC82 (UrdfRobot_t1F5CE295269BAA777893BE455369BB26C7E9712A * __this, bool ___useGravity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m4B7CE88739C1B159238F3EB3FA43B8174F750BA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (Rigidbody rb in GetComponentsInChildren<Rigidbody>())
		RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* L_0;
		L_0 = Component_GetComponentsInChildren_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m4B7CE88739C1B159238F3EB3FA43B8174F750BA8(__this, /*hidden argument*/Component_GetComponentsInChildren_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m4B7CE88739C1B159238F3EB3FA43B8174F750BA8_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (Rigidbody rb in GetComponentsInChildren<Rigidbody>())
		RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// rb.useGravity = useGravity;
		bool L_5 = ___useGravity0;
		NullCheck(L_4);
		Rigidbody_set_useGravity_m1057292FB3199E87664F40B8BCBA7A7E64D1A096(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0018:
	{
		// foreach (Rigidbody rb in GetComponentsInChildren<Rigidbody>())
		int32_t L_7 = V_1;
		RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RosSharp.Urdf.UrdfRobot::GenerateUniqueJointNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UrdfRobot_GenerateUniqueJointNames_m819F606B9561D1A21FE4E2BF63DDCF4C10C2DC08 (UrdfRobot_t1F5CE295269BAA777893BE455369BB26C7E9712A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisUrdfJoint_t579DFEB5752FB8D571991AA28D6EF709000E5996_m908637D38CBE965DBB4D04CBB4BC62B7C97AE61F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UrdfJointU5BU5D_tE2C561EACF3FE6E8C5978658CD7CB5ADC582E8BB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (UrdfJoint urdfJoint in GetComponentsInChildren<UrdfJoint>())
		UrdfJointU5BU5D_tE2C561EACF3FE6E8C5978658CD7CB5ADC582E8BB* L_0;
		L_0 = Component_GetComponentsInChildren_TisUrdfJoint_t579DFEB5752FB8D571991AA28D6EF709000E5996_m908637D38CBE965DBB4D04CBB4BC62B7C97AE61F(__this, /*hidden argument*/Component_GetComponentsInChildren_TisUrdfJoint_t579DFEB5752FB8D571991AA28D6EF709000E5996_m908637D38CBE965DBB4D04CBB4BC62B7C97AE61F_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0017;
	}

IL_000b:
	{
		// foreach (UrdfJoint urdfJoint in GetComponentsInChildren<UrdfJoint>())
		UrdfJointU5BU5D_tE2C561EACF3FE6E8C5978658CD7CB5ADC582E8BB* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		UrdfJoint_t579DFEB5752FB8D571991AA28D6EF709000E5996 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// urdfJoint.GenerateUniqueJointName();
		NullCheck(L_4);
		UrdfJoint_GenerateUniqueJointName_m5D518038028AA0CA8E0BDF001F45C1C6605BE0F6(L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0017:
	{
		// foreach (UrdfJoint urdfJoint in GetComponentsInChildren<UrdfJoint>())
		int32_t L_6 = V_1;
		UrdfJointU5BU5D_tE2C561EACF3FE6E8C5978658CD7CB5ADC582E8BB* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RosSharp.Urdf.UrdfRobot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UrdfRobot__ctor_mE18E0295E8CBF9F475F04EA3009B780D4AC80C82 (UrdfRobot_t1F5CE295269BAA777893BE455369BB26C7E9712A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void RosSharp.Urdf.UrdfVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UrdfVisual__ctor_mC36EB6BE1DCFB070DD0F21BB89E3765DFA38819F (UrdfVisual_t07A61D7DB13D485D0C2E3E9623CDD85E1AC0EC4E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void RosSharp.Urdf.UrdfVisuals::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UrdfVisuals__ctor_m3E00361E983E49FB3AB6D98B406A8DDE822CBF6C (UrdfVisuals_t55734538E0449503C5F9B4322ED1AE05A16DE626 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ros_connector_enable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ros_connector_enable_Start_m1D86CF81159C31C8B4FF3C3DC15D4366BB673E1A (ros_connector_enable_tCEA6FEF1FEBFD7DF90CBAF4A0177F8E3664A821C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHL2CameraPublisher_tB1C84964EE7CB72118B83EC8FEB0695B63EA6F6D_m623C6F56A657F7D4B1E644C36FF05F153869F631_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839_mA6D9F57D295E0247914848496E379541A1FA0F86_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ros_connector_script = ros_connector.GetComponent<RosConnector>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_ros_connector_4();
		NullCheck(L_0);
		RosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839 * L_1;
		L_1 = GameObject_GetComponent_TisRosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839_mA6D9F57D295E0247914848496E379541A1FA0F86(L_0, /*hidden argument*/GameObject_GetComponent_TisRosConnector_t7A0CEFD357333B171126B8A970FEF8482079C839_mA6D9F57D295E0247914848496E379541A1FA0F86_RuntimeMethod_var);
		__this->set_ros_connector_script_10(L_1);
		// hl2_camera_script = ros_connector.GetComponent<HL2CameraPublisher>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_ros_connector_4();
		NullCheck(L_2);
		HL2CameraPublisher_tB1C84964EE7CB72118B83EC8FEB0695B63EA6F6D * L_3;
		L_3 = GameObject_GetComponent_TisHL2CameraPublisher_tB1C84964EE7CB72118B83EC8FEB0695B63EA6F6D_m623C6F56A657F7D4B1E644C36FF05F153869F631(L_2, /*hidden argument*/GameObject_GetComponent_TisHL2CameraPublisher_tB1C84964EE7CB72118B83EC8FEB0695B63EA6F6D_m623C6F56A657F7D4B1E644C36FF05F153869F631_RuntimeMethod_var);
		__this->set_hl2_camera_script_11(L_3);
		// publish_controller.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_publish_controller_6();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ros_connector_enable::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ros_connector_enable_Update_mFB77A25E34144190E4A97976C901C79303B896CA (ros_connector_enable_tCEA6FEF1FEBFD7DF90CBAF4A0177F8E3664A821C * __this, const RuntimeMethod* method)
{
	{
		// void Update() {}
		return;
	}
}
// System.Void ros_connector_enable::onClick_ROSConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ros_connector_enable_onClick_ROSConnect_m48D60ED5C320C340F5ABB06A76757A8EF5DE8986 (ros_connector_enable_tCEA6FEF1FEBFD7DF90CBAF4A0177F8E3664A821C * __this, const RuntimeMethod* method)
{
	{
		// if (click_count == 1)
		int32_t L_0 = __this->get_click_count_7();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_002d;
		}
	}
	{
		// ros_connector.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_ros_connector_4();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// publish_controller.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_publish_controller_6();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// ros_connector_button_controller.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_ros_connector_button_controller_5();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void ros_connector_enable::onClick_HL2CameraActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ros_connector_enable_onClick_HL2CameraActive_mFEB61D104D071A81455792CE968C25E99A08335F (ros_connector_enable_tCEA6FEF1FEBFD7DF90CBAF4A0177F8E3664A821C * __this, const RuntimeMethod* method)
{
	{
		// hl2_camera_script.enabled = true;
		HL2CameraPublisher_tB1C84964EE7CB72118B83EC8FEB0695B63EA6F6D * L_0 = __this->get_hl2_camera_script_11();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)1, /*hidden argument*/NULL);
		// publish_controller.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_publish_controller_6();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ros_connector_enable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ros_connector_enable__ctor_m09B3B06F83CB002B955E5E1A62C629496F70043A (ros_connector_enable_tCEA6FEF1FEBFD7DF90CBAF4A0177F8E3664A821C * __this, const RuntimeMethod* method)
{
	{
		// private int click_count = 1;
		__this->set_click_count_7(1);
		// private int click_pose_count = 1;
		__this->set_click_pose_count_8(1);
		// private int click_contacted_count = 1;
		__this->set_click_contacted_count_9(1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void HLCameraAccess/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDFDBDE95E8F3226256F027791BB21E35BF053335 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3DEC1919CA9119C41BDEAE3A6FFE290111D57AD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3DEC1919CA9119C41BDEAE3A6FFE290111D57AD8 * L_0 = (U3CU3Ec_t3DEC1919CA9119C41BDEAE3A6FFE290111D57AD8 *)il2cpp_codegen_object_new(U3CU3Ec_t3DEC1919CA9119C41BDEAE3A6FFE290111D57AD8_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8D7D66FF8931B3F5DE2832861EFA2CD4A52BD1CA(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3DEC1919CA9119C41BDEAE3A6FFE290111D57AD8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3DEC1919CA9119C41BDEAE3A6FFE290111D57AD8_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void HLCameraAccess/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8D7D66FF8931B3F5DE2832861EFA2CD4A52BD1CA (U3CU3Ec_t3DEC1919CA9119C41BDEAE3A6FFE290111D57AD8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 HLCameraAccess/<>c::<OnPhotoCaptureCreated>b__3_0(UnityEngine.Resolution)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3COnPhotoCaptureCreatedU3Eb__3_0_m960AF95922C86849CC17B90443F7147699CEBAD4 (U3CU3Ec_t3DEC1919CA9119C41BDEAE3A6FFE290111D57AD8 * __this, Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767  ___res0, const RuntimeMethod* method)
{
	{
		// Resolution cameraResolution = PhotoCapture.SupportedResolutions.OrderByDescending((res) => res.width * res.height).First();
		int32_t L_0;
		L_0 = Resolution_get_width_mDD9DCC89D65057B64C413AF15BEE2E37E9892065((Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 *)(&___res0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Resolution_get_height_mB90F24337D7B96A288F8BE1D0F2F3599B785AD27((Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 *)(&___res0), /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1));
	}
}
// System.Int32 HLCameraAccess/<>c::<OnCapturedPhotoToMemory>b__5_0(UnityEngine.Resolution)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3COnCapturedPhotoToMemoryU3Eb__5_0_mDC9A19AC38B1AB9ADBCECAFFA1A32DD4632FB872 (U3CU3Ec_t3DEC1919CA9119C41BDEAE3A6FFE290111D57AD8 * __this, Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767  ___res0, const RuntimeMethod* method)
{
	{
		// Resolution cameraResolution = PhotoCapture.SupportedResolutions.OrderByDescending((res) => res.width * res.height).First();
		int32_t L_0;
		L_0 = Resolution_get_width_mDD9DCC89D65057B64C413AF15BEE2E37E9892065((Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 *)(&___res0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Resolution_get_height_mB90F24337D7B96A288F8BE1D0F2F3599B785AD27((Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 *)(&___res0), /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1));
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
// System.Void TCPClient/<SendSpatialImageAsync>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendSpatialImageAsyncU3Ed__16_MoveNext_m963DB74C70D3C8EA41E172146F6CC0BF384B6A82 (U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A_m56B82019D4EFF61B2E908A4E967F79755C69E2AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A_m25EA64C2B1A70948690905AB812B8B2AEE48C06E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB07613CE857075BEAD679A7DF37A6C99100AC47D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mABBAB86FD9F33AA30FCEA00286EBB81DB7937D84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * V_1 = NULL;
	TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 7> __leave_targets;
	String_t* G_B18_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)1))))
			{
				goto IL_0026;
			}
		}

IL_0012:
		{
			// if (!lastMessageSent) return;
			TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = L_3->get_lastMessageSent_11();
			if (L_4)
			{
				goto IL_001f;
			}
		}

IL_001a:
		{
			// if (!lastMessageSent) return;
			goto IL_01d6;
		}

IL_001f:
		{
			// lastMessageSent = false;
			TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_5 = V_1;
			NullCheck(L_5);
			L_5->set_lastMessageSent_11((bool)0);
		}

IL_0026:
		{
		}

IL_0027:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_00e2;
				}
			}

IL_002d:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0143;
				}
			}

IL_0034:
			{
				// dw.WriteString("f"); // header "f"
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_8 = V_1;
				NullCheck(L_8);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_9 = L_8->get_dw_9();
				NullCheck(L_9);
				uint32_t L_10;
				L_10 = DataWriter_WriteString_m37D3000CE2655C1E9179B4EC7B736BF73D320D03(L_9, _stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0, /*hidden argument*/NULL);
				// dw.WriteInt32(LFImage.Length + RFImage.Length);
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_11 = V_1;
				NullCheck(L_11);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_12 = L_11->get_dw_9();
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = __this->get_LFImage_3();
				NullCheck(L_13);
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = __this->get_RFImage_4();
				NullCheck(L_14);
				NullCheck(L_12);
				DataWriter_WriteInt32_m5D96F1EA9585FF7CF685775D5394B8F1799423C9(L_12, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))), (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))), /*hidden argument*/NULL);
				// dw.WriteInt64(ts_left);
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_15 = V_1;
				NullCheck(L_15);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_16 = L_15->get_dw_9();
				int64_t L_17 = __this->get_ts_left_5();
				NullCheck(L_16);
				DataWriter_WriteInt64_mA3731579C00D7269B6DBA0DC3329F5383B0D0CE4(L_16, L_17, /*hidden argument*/NULL);
				// dw.WriteInt64(ts_right);
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_18 = V_1;
				NullCheck(L_18);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_19 = L_18->get_dw_9();
				int64_t L_20 = __this->get_ts_right_6();
				NullCheck(L_19);
				DataWriter_WriteInt64_mA3731579C00D7269B6DBA0DC3329F5383B0D0CE4(L_19, L_20, /*hidden argument*/NULL);
				// dw.WriteBytes(LFImage);
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_21 = V_1;
				NullCheck(L_21);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_22 = L_21->get_dw_9();
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = __this->get_LFImage_3();
				NullCheck(L_22);
				DataWriter_WriteBytes_mADCDD5B8F9F6AEC47315350EB524A5FE007B74FE(L_22, L_23, /*hidden argument*/NULL);
				// dw.WriteBytes(RFImage);
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_24 = V_1;
				NullCheck(L_24);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_25 = L_24->get_dw_9();
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = __this->get_RFImage_4();
				NullCheck(L_25);
				DataWriter_WriteBytes_mADCDD5B8F9F6AEC47315350EB524A5FE007B74FE(L_25, L_26, /*hidden argument*/NULL);
				// await dw.StoreAsync();
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_27 = V_1;
				NullCheck(L_27);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_28 = L_27->get_dw_9();
				NullCheck(L_28);
				DataWriterStoreOperation_tAB8CDEF471A0A5F5354E753953E1510E142C827C * L_29;
				L_29 = DataWriter_StoreAsync_m6377506DB362DDD4CE31FD9530A16873D4473AA4(L_28, /*hidden argument*/NULL);
				TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  L_30;
				L_30 = WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mABBAB86FD9F33AA30FCEA00286EBB81DB7937D84(L_29, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mABBAB86FD9F33AA30FCEA00286EBB81DB7937D84_RuntimeMethod_var);
				V_2 = L_30;
				bool L_31;
				L_31 = TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD((TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD_RuntimeMethod_var);
				if (L_31)
				{
					goto IL_00fe;
				}
			}

IL_00bf:
			{
				int32_t L_32 = 0;
				V_0 = L_32;
				__this->set_U3CU3E1__state_0(L_32);
				TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  L_33 = V_2;
				__this->set_U3CU3Eu__1_7(L_33);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_34 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A_m56B82019D4EFF61B2E908A4E967F79755C69E2AD((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_34, (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *)(&V_2), (U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A_m56B82019D4EFF61B2E908A4E967F79755C69E2AD_RuntimeMethod_var);
				goto IL_01e9;
			}

IL_00e2:
			{
				TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  L_35 = __this->get_U3CU3Eu__1_7();
				V_2 = L_35;
				TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * L_36 = __this->get_address_of_U3CU3Eu__1_7();
				il2cpp_codegen_initobj(L_36, sizeof(TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 ));
				int32_t L_37 = (-1);
				V_0 = L_37;
				__this->set_U3CU3E1__state_0(L_37);
			}

IL_00fe:
			{
				uint32_t L_38;
				L_38 = TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C((TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C_RuntimeMethod_var);
				// await dw.FlushAsync();
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_39 = V_1;
				NullCheck(L_39);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_40 = L_39->get_dw_9();
				NullCheck(L_40);
				RuntimeObject* L_41;
				L_41 = DataWriter_FlushAsync_mBEF87BDA2121D90A25DC8A7AB180CA6CB8B3330B(L_40, /*hidden argument*/NULL);
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_42;
				L_42 = WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB07613CE857075BEAD679A7DF37A6C99100AC47D(L_41, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB07613CE857075BEAD679A7DF37A6C99100AC47D_RuntimeMethod_var);
				V_3 = L_42;
				bool L_43;
				L_43 = TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var);
				if (L_43)
				{
					goto IL_015f;
				}
			}

IL_0120:
			{
				int32_t L_44 = 1;
				V_0 = L_44;
				__this->set_U3CU3E1__state_0(L_44);
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_45 = V_3;
				__this->set_U3CU3Eu__2_8(L_45);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_46 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A_m25EA64C2B1A70948690905AB812B8B2AEE48C06E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_46, (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), (U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A_m25EA64C2B1A70948690905AB812B8B2AEE48C06E_RuntimeMethod_var);
				goto IL_01e9;
			}

IL_0143:
			{
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_47 = __this->get_U3CU3Eu__2_8();
				V_3 = L_47;
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * L_48 = __this->get_address_of_U3CU3Eu__2_8();
				il2cpp_codegen_initobj(L_48, sizeof(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C ));
				int32_t L_49 = (-1);
				V_0 = L_49;
				__this->set_U3CU3E1__state_0(L_49);
			}

IL_015f:
			{
				bool L_50;
				L_50 = TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var);
				// }
				goto IL_01b4;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0169;
			}
			throw e;
		}

CATCH_0169:
		{ // begin catch(System.Exception)
			{
				// catch (Exception ex)
				V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
				// SocketErrorStatus webErrorStatus = SocketError.GetStatus(ex.GetBaseException().HResult);
				Exception_t * L_51 = V_4;
				NullCheck(L_51);
				Exception_t * L_52;
				L_52 = VirtFuncInvoker0< Exception_t * >::Invoke(7 /* System.Exception System.Exception::GetBaseException() */, L_51);
				NullCheck(L_52);
				int32_t L_53;
				L_53 = Exception_get_HResult_mAF0FE56C31C3C7D5567539FB46BE80D6B9D1AD42_inline(L_52, /*hidden argument*/NULL);
				int32_t L_54;
				L_54 = SocketError_GetStatus_m4E09DAB6C550036CD4C64C51195DDAA03D8669D8(L_53, /*hidden argument*/NULL);
				V_5 = L_54;
				// Debug.Log(webErrorStatus.ToString() != "Unknown" ? webErrorStatus.ToString() : ex.Message);
				RuntimeObject * L_55 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketErrorStatus_tACE77FB3A6ABF51D62DD9B95BF3AD084E3CA8612_il2cpp_TypeInfo_var)), (&V_5));
				NullCheck(L_55);
				String_t* L_56;
				L_56 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_55);
				V_5 = *(int32_t*)UnBox(L_55);
				bool L_57;
				L_57 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_56, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C)), /*hidden argument*/NULL);
				if (L_57)
				{
					goto IL_01a0;
				}
			}

IL_0197:
			{
				Exception_t * L_58 = V_4;
				NullCheck(L_58);
				String_t* L_59;
				L_59 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_58);
				G_B18_0 = L_59;
				goto IL_01ad;
			}

IL_01a0:
			{
				RuntimeObject * L_60 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketErrorStatus_tACE77FB3A6ABF51D62DD9B95BF3AD084E3CA8612_il2cpp_TypeInfo_var)), (&V_5));
				NullCheck(L_60);
				String_t* L_61;
				L_61 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_60);
				V_5 = *(int32_t*)UnBox(L_60);
				G_B18_0 = L_61;
			}

IL_01ad:
			{
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
				Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(G_B18_0, /*hidden argument*/NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_01b4;
			}
		} // end catch (depth: 2)

IL_01b4:
		{
			// lastMessageSent = true;
			TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_62 = V_1;
			NullCheck(L_62);
			L_62->set_lastMessageSent_11((bool)1);
			goto IL_01d6;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01bd;
		}
		throw e;
	}

CATCH_01bd:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_63 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_64 = V_6;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_63, L_64, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01e9;
	} // end catch (depth: 1)

IL_01d6:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_65 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_65, /*hidden argument*/NULL);
	}

IL_01e9:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendSpatialImageAsyncU3Ed__16_MoveNext_m963DB74C70D3C8EA41E172146F6CC0BF384B6A82_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A * _thisAdjusted = reinterpret_cast<U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A *>(__this + _offset);
	U3CSendSpatialImageAsyncU3Ed__16_MoveNext_m963DB74C70D3C8EA41E172146F6CC0BF384B6A82(_thisAdjusted, method);
}
// System.Void TCPClient/<SendSpatialImageAsync>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendSpatialImageAsyncU3Ed__16_SetStateMachine_m9F285F6E713D9490F44B568F30D599D9BB29743A (U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendSpatialImageAsyncU3Ed__16_SetStateMachine_m9F285F6E713D9490F44B568F30D599D9BB29743A_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A * _thisAdjusted = reinterpret_cast<U3CSendSpatialImageAsyncU3Ed__16_tAFC65582E029537E6525C1E1E032C6623092948A *>(__this + _offset);
	U3CSendSpatialImageAsyncU3Ed__16_SetStateMachine_m9F285F6E713D9490F44B568F30D599D9BB29743A(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TCPClient/<SendSpatialImageAsync>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendSpatialImageAsyncU3Ed__17_MoveNext_mF3C0F92989BFA46A6125CE2B9E314A26F7B6E698 (U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B_m7DF35F3D0F349A08FF672EFCBFCFDE330A5C8322_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B_m3D3F36E875DC1EF5271CF9620D06143E7B81118D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB07613CE857075BEAD679A7DF37A6C99100AC47D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mABBAB86FD9F33AA30FCEA00286EBB81DB7937D84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * V_1 = NULL;
	TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 7> __leave_targets;
	String_t* G_B18_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)1))))
			{
				goto IL_0026;
			}
		}

IL_0012:
		{
			// if (!lastMessageSent) return;
			TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = L_3->get_lastMessageSent_11();
			if (L_4)
			{
				goto IL_001f;
			}
		}

IL_001a:
		{
			// if (!lastMessageSent) return;
			goto IL_01bc;
		}

IL_001f:
		{
			// lastMessageSent = false;
			TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_5 = V_1;
			NullCheck(L_5);
			L_5->set_lastMessageSent_11((bool)0);
		}

IL_0026:
		{
		}

IL_0027:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_00c8;
				}
			}

IL_002d:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0129;
				}
			}

IL_0034:
			{
				// dw.WriteString("f"); // header "f"
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_8 = V_1;
				NullCheck(L_8);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_9 = L_8->get_dw_9();
				NullCheck(L_9);
				uint32_t L_10;
				L_10 = DataWriter_WriteString_m37D3000CE2655C1E9179B4EC7B736BF73D320D03(L_9, _stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0, /*hidden argument*/NULL);
				// dw.WriteInt32(LRFImage.Length);
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_11 = V_1;
				NullCheck(L_11);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_12 = L_11->get_dw_9();
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = __this->get_LRFImage_3();
				NullCheck(L_13);
				NullCheck(L_12);
				DataWriter_WriteInt32_m5D96F1EA9585FF7CF685775D5394B8F1799423C9(L_12, ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))), /*hidden argument*/NULL);
				// dw.WriteInt64(ts_left);
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_14 = V_1;
				NullCheck(L_14);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_15 = L_14->get_dw_9();
				int64_t L_16 = __this->get_ts_left_4();
				NullCheck(L_15);
				DataWriter_WriteInt64_mA3731579C00D7269B6DBA0DC3329F5383B0D0CE4(L_15, L_16, /*hidden argument*/NULL);
				// dw.WriteInt64(ts_right);
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_17 = V_1;
				NullCheck(L_17);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_18 = L_17->get_dw_9();
				int64_t L_19 = __this->get_ts_right_5();
				NullCheck(L_18);
				DataWriter_WriteInt64_mA3731579C00D7269B6DBA0DC3329F5383B0D0CE4(L_18, L_19, /*hidden argument*/NULL);
				// dw.WriteBytes(LRFImage);
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_20 = V_1;
				NullCheck(L_20);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_21 = L_20->get_dw_9();
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = __this->get_LRFImage_3();
				NullCheck(L_21);
				DataWriter_WriteBytes_mADCDD5B8F9F6AEC47315350EB524A5FE007B74FE(L_21, L_22, /*hidden argument*/NULL);
				// await dw.StoreAsync();
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_23 = V_1;
				NullCheck(L_23);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_24 = L_23->get_dw_9();
				NullCheck(L_24);
				DataWriterStoreOperation_tAB8CDEF471A0A5F5354E753953E1510E142C827C * L_25;
				L_25 = DataWriter_StoreAsync_m6377506DB362DDD4CE31FD9530A16873D4473AA4(L_24, /*hidden argument*/NULL);
				TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  L_26;
				L_26 = WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mABBAB86FD9F33AA30FCEA00286EBB81DB7937D84(L_25, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mABBAB86FD9F33AA30FCEA00286EBB81DB7937D84_RuntimeMethod_var);
				V_2 = L_26;
				bool L_27;
				L_27 = TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD((TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_00e4;
				}
			}

IL_00a5:
			{
				int32_t L_28 = 0;
				V_0 = L_28;
				__this->set_U3CU3E1__state_0(L_28);
				TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  L_29 = V_2;
				__this->set_U3CU3Eu__1_6(L_29);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_30 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B_m7DF35F3D0F349A08FF672EFCBFCFDE330A5C8322((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_30, (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *)(&V_2), (U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B_m7DF35F3D0F349A08FF672EFCBFCFDE330A5C8322_RuntimeMethod_var);
				goto IL_01cf;
			}

IL_00c8:
			{
				TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  L_31 = __this->get_U3CU3Eu__1_6();
				V_2 = L_31;
				TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * L_32 = __this->get_address_of_U3CU3Eu__1_6();
				il2cpp_codegen_initobj(L_32, sizeof(TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 ));
				int32_t L_33 = (-1);
				V_0 = L_33;
				__this->set_U3CU3E1__state_0(L_33);
			}

IL_00e4:
			{
				uint32_t L_34;
				L_34 = TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C((TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C_RuntimeMethod_var);
				// await dw.FlushAsync();
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_35 = V_1;
				NullCheck(L_35);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_36 = L_35->get_dw_9();
				NullCheck(L_36);
				RuntimeObject* L_37;
				L_37 = DataWriter_FlushAsync_mBEF87BDA2121D90A25DC8A7AB180CA6CB8B3330B(L_36, /*hidden argument*/NULL);
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_38;
				L_38 = WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB07613CE857075BEAD679A7DF37A6C99100AC47D(L_37, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB07613CE857075BEAD679A7DF37A6C99100AC47D_RuntimeMethod_var);
				V_3 = L_38;
				bool L_39;
				L_39 = TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var);
				if (L_39)
				{
					goto IL_0145;
				}
			}

IL_0106:
			{
				int32_t L_40 = 1;
				V_0 = L_40;
				__this->set_U3CU3E1__state_0(L_40);
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_41 = V_3;
				__this->set_U3CU3Eu__2_7(L_41);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_42 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B_m3D3F36E875DC1EF5271CF9620D06143E7B81118D((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_42, (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), (U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B_m3D3F36E875DC1EF5271CF9620D06143E7B81118D_RuntimeMethod_var);
				goto IL_01cf;
			}

IL_0129:
			{
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_43 = __this->get_U3CU3Eu__2_7();
				V_3 = L_43;
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * L_44 = __this->get_address_of_U3CU3Eu__2_7();
				il2cpp_codegen_initobj(L_44, sizeof(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C ));
				int32_t L_45 = (-1);
				V_0 = L_45;
				__this->set_U3CU3E1__state_0(L_45);
			}

IL_0145:
			{
				bool L_46;
				L_46 = TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var);
				// }
				goto IL_019a;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_014f;
			}
			throw e;
		}

CATCH_014f:
		{ // begin catch(System.Exception)
			{
				// catch (Exception ex)
				V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
				// SocketErrorStatus webErrorStatus = SocketError.GetStatus(ex.GetBaseException().HResult);
				Exception_t * L_47 = V_4;
				NullCheck(L_47);
				Exception_t * L_48;
				L_48 = VirtFuncInvoker0< Exception_t * >::Invoke(7 /* System.Exception System.Exception::GetBaseException() */, L_47);
				NullCheck(L_48);
				int32_t L_49;
				L_49 = Exception_get_HResult_mAF0FE56C31C3C7D5567539FB46BE80D6B9D1AD42_inline(L_48, /*hidden argument*/NULL);
				int32_t L_50;
				L_50 = SocketError_GetStatus_m4E09DAB6C550036CD4C64C51195DDAA03D8669D8(L_49, /*hidden argument*/NULL);
				V_5 = L_50;
				// Debug.Log(webErrorStatus.ToString() != "Unknown" ? webErrorStatus.ToString() : ex.Message);
				RuntimeObject * L_51 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketErrorStatus_tACE77FB3A6ABF51D62DD9B95BF3AD084E3CA8612_il2cpp_TypeInfo_var)), (&V_5));
				NullCheck(L_51);
				String_t* L_52;
				L_52 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_51);
				V_5 = *(int32_t*)UnBox(L_51);
				bool L_53;
				L_53 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_52, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C)), /*hidden argument*/NULL);
				if (L_53)
				{
					goto IL_0186;
				}
			}

IL_017d:
			{
				Exception_t * L_54 = V_4;
				NullCheck(L_54);
				String_t* L_55;
				L_55 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_54);
				G_B18_0 = L_55;
				goto IL_0193;
			}

IL_0186:
			{
				RuntimeObject * L_56 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketErrorStatus_tACE77FB3A6ABF51D62DD9B95BF3AD084E3CA8612_il2cpp_TypeInfo_var)), (&V_5));
				NullCheck(L_56);
				String_t* L_57;
				L_57 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_56);
				V_5 = *(int32_t*)UnBox(L_56);
				G_B18_0 = L_57;
			}

IL_0193:
			{
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
				Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(G_B18_0, /*hidden argument*/NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_019a;
			}
		} // end catch (depth: 2)

IL_019a:
		{
			// lastMessageSent = true;
			TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_58 = V_1;
			NullCheck(L_58);
			L_58->set_lastMessageSent_11((bool)1);
			goto IL_01bc;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01a3;
		}
		throw e;
	}

CATCH_01a3:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_59 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_60 = V_6;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_59, L_60, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01cf;
	} // end catch (depth: 1)

IL_01bc:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_61 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_61, /*hidden argument*/NULL);
	}

IL_01cf:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendSpatialImageAsyncU3Ed__17_MoveNext_mF3C0F92989BFA46A6125CE2B9E314A26F7B6E698_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B * _thisAdjusted = reinterpret_cast<U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B *>(__this + _offset);
	U3CSendSpatialImageAsyncU3Ed__17_MoveNext_mF3C0F92989BFA46A6125CE2B9E314A26F7B6E698(_thisAdjusted, method);
}
// System.Void TCPClient/<SendSpatialImageAsync>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendSpatialImageAsyncU3Ed__17_SetStateMachine_m819550350939F054A3432EEACCEF9745B4CC3307 (U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendSpatialImageAsyncU3Ed__17_SetStateMachine_m819550350939F054A3432EEACCEF9745B4CC3307_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B * _thisAdjusted = reinterpret_cast<U3CSendSpatialImageAsyncU3Ed__17_t15318853184505A63F834F7108F74E41496DD72B *>(__this + _offset);
	U3CSendSpatialImageAsyncU3Ed__17_SetStateMachine_m819550350939F054A3432EEACCEF9745B4CC3307(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TCPClient/<SendUINT16Async>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUINT16AsyncU3Ed__14_MoveNext_m923619CB32678B83A16D1FE0316948074A41E1B2 (U3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC_mEB1393223D11C43B561AED9783FB1F619EDB9389_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC_mF30B99097F976CFC61FF0ED5AF4A99351EC7E9B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB07613CE857075BEAD679A7DF37A6C99100AC47D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mABBAB86FD9F33AA30FCEA00286EBB81DB7937D84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * V_1 = NULL;
	TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 7> __leave_targets;
	String_t* G_B18_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)1))))
			{
				goto IL_0026;
			}
		}

IL_0012:
		{
			// if (!lastMessageSent) return;
			TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = L_3->get_lastMessageSent_11();
			if (L_4)
			{
				goto IL_001f;
			}
		}

IL_001a:
		{
			// if (!lastMessageSent) return;
			goto IL_019d;
		}

IL_001f:
		{
			// lastMessageSent = false;
			TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_5 = V_1;
			NullCheck(L_5);
			L_5->set_lastMessageSent_11((bool)0);
		}

IL_0026:
		{
		}

IL_0027:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_00a9;
				}
			}

IL_002a:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_010a;
				}
			}

IL_0031:
			{
				// dw.WriteString("s"); // header "s"
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_8 = V_1;
				NullCheck(L_8);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_9 = L_8->get_dw_9();
				NullCheck(L_9);
				uint32_t L_10;
				L_10 = DataWriter_WriteString_m37D3000CE2655C1E9179B4EC7B736BF73D320D03(L_9, _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, /*hidden argument*/NULL);
				// dw.WriteInt32(data.Length);
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_11 = V_1;
				NullCheck(L_11);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_12 = L_11->get_dw_9();
				UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_13 = __this->get_data_3();
				NullCheck(L_13);
				NullCheck(L_12);
				DataWriter_WriteInt32_m5D96F1EA9585FF7CF685775D5394B8F1799423C9(L_12, ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))), /*hidden argument*/NULL);
				// dw.WriteBytes(UINT16ToBytes(data));
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_14 = V_1;
				NullCheck(L_14);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_15 = L_14->get_dw_9();
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_16 = V_1;
				UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_17 = __this->get_data_3();
				NullCheck(L_16);
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18;
				L_18 = TCPClient_UINT16ToBytes_m0B9B88D62CDD7F0D2550B9979A16025EFE059460(L_16, L_17, /*hidden argument*/NULL);
				NullCheck(L_15);
				DataWriter_WriteBytes_mADCDD5B8F9F6AEC47315350EB524A5FE007B74FE(L_15, L_18, /*hidden argument*/NULL);
				// await dw.StoreAsync();
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_19 = V_1;
				NullCheck(L_19);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_20 = L_19->get_dw_9();
				NullCheck(L_20);
				DataWriterStoreOperation_tAB8CDEF471A0A5F5354E753953E1510E142C827C * L_21;
				L_21 = DataWriter_StoreAsync_m6377506DB362DDD4CE31FD9530A16873D4473AA4(L_20, /*hidden argument*/NULL);
				TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  L_22;
				L_22 = WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mABBAB86FD9F33AA30FCEA00286EBB81DB7937D84(L_21, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mABBAB86FD9F33AA30FCEA00286EBB81DB7937D84_RuntimeMethod_var);
				V_2 = L_22;
				bool L_23;
				L_23 = TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD((TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_00c5;
				}
			}

IL_0086:
			{
				int32_t L_24 = 0;
				V_0 = L_24;
				__this->set_U3CU3E1__state_0(L_24);
				TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  L_25 = V_2;
				__this->set_U3CU3Eu__1_4(L_25);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_26 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC_mEB1393223D11C43B561AED9783FB1F619EDB9389((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_26, (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *)(&V_2), (U3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC_mEB1393223D11C43B561AED9783FB1F619EDB9389_RuntimeMethod_var);
				goto IL_01b0;
			}

IL_00a9:
			{
				TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  L_27 = __this->get_U3CU3Eu__1_4();
				V_2 = L_27;
				TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * L_28 = __this->get_address_of_U3CU3Eu__1_4();
				il2cpp_codegen_initobj(L_28, sizeof(TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 ));
				int32_t L_29 = (-1);
				V_0 = L_29;
				__this->set_U3CU3E1__state_0(L_29);
			}

IL_00c5:
			{
				uint32_t L_30;
				L_30 = TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C((TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C_RuntimeMethod_var);
				// await dw.FlushAsync();
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_31 = V_1;
				NullCheck(L_31);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_32 = L_31->get_dw_9();
				NullCheck(L_32);
				RuntimeObject* L_33;
				L_33 = DataWriter_FlushAsync_mBEF87BDA2121D90A25DC8A7AB180CA6CB8B3330B(L_32, /*hidden argument*/NULL);
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_34;
				L_34 = WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB07613CE857075BEAD679A7DF37A6C99100AC47D(L_33, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB07613CE857075BEAD679A7DF37A6C99100AC47D_RuntimeMethod_var);
				V_3 = L_34;
				bool L_35;
				L_35 = TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var);
				if (L_35)
				{
					goto IL_0126;
				}
			}

IL_00e7:
			{
				int32_t L_36 = 1;
				V_0 = L_36;
				__this->set_U3CU3E1__state_0(L_36);
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_37 = V_3;
				__this->set_U3CU3Eu__2_5(L_37);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_38 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC_mF30B99097F976CFC61FF0ED5AF4A99351EC7E9B3((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_38, (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), (U3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC_mF30B99097F976CFC61FF0ED5AF4A99351EC7E9B3_RuntimeMethod_var);
				goto IL_01b0;
			}

IL_010a:
			{
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_39 = __this->get_U3CU3Eu__2_5();
				V_3 = L_39;
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * L_40 = __this->get_address_of_U3CU3Eu__2_5();
				il2cpp_codegen_initobj(L_40, sizeof(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C ));
				int32_t L_41 = (-1);
				V_0 = L_41;
				__this->set_U3CU3E1__state_0(L_41);
			}

IL_0126:
			{
				bool L_42;
				L_42 = TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var);
				// }
				goto IL_017b;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0130;
			}
			throw e;
		}

CATCH_0130:
		{ // begin catch(System.Exception)
			{
				// catch (Exception ex)
				V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
				// SocketErrorStatus webErrorStatus = SocketError.GetStatus(ex.GetBaseException().HResult);
				Exception_t * L_43 = V_4;
				NullCheck(L_43);
				Exception_t * L_44;
				L_44 = VirtFuncInvoker0< Exception_t * >::Invoke(7 /* System.Exception System.Exception::GetBaseException() */, L_43);
				NullCheck(L_44);
				int32_t L_45;
				L_45 = Exception_get_HResult_mAF0FE56C31C3C7D5567539FB46BE80D6B9D1AD42_inline(L_44, /*hidden argument*/NULL);
				int32_t L_46;
				L_46 = SocketError_GetStatus_m4E09DAB6C550036CD4C64C51195DDAA03D8669D8(L_45, /*hidden argument*/NULL);
				V_5 = L_46;
				// Debug.Log(webErrorStatus.ToString() != "Unknown" ? webErrorStatus.ToString() : ex.Message);
				RuntimeObject * L_47 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketErrorStatus_tACE77FB3A6ABF51D62DD9B95BF3AD084E3CA8612_il2cpp_TypeInfo_var)), (&V_5));
				NullCheck(L_47);
				String_t* L_48;
				L_48 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_47);
				V_5 = *(int32_t*)UnBox(L_47);
				bool L_49;
				L_49 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_48, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C)), /*hidden argument*/NULL);
				if (L_49)
				{
					goto IL_0167;
				}
			}

IL_015e:
			{
				Exception_t * L_50 = V_4;
				NullCheck(L_50);
				String_t* L_51;
				L_51 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_50);
				G_B18_0 = L_51;
				goto IL_0174;
			}

IL_0167:
			{
				RuntimeObject * L_52 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketErrorStatus_tACE77FB3A6ABF51D62DD9B95BF3AD084E3CA8612_il2cpp_TypeInfo_var)), (&V_5));
				NullCheck(L_52);
				String_t* L_53;
				L_53 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_52);
				V_5 = *(int32_t*)UnBox(L_52);
				G_B18_0 = L_53;
			}

IL_0174:
			{
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
				Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(G_B18_0, /*hidden argument*/NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_017b;
			}
		} // end catch (depth: 2)

IL_017b:
		{
			// lastMessageSent = true;
			TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_54 = V_1;
			NullCheck(L_54);
			L_54->set_lastMessageSent_11((bool)1);
			goto IL_019d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0184;
		}
		throw e;
	}

CATCH_0184:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_55 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_56 = V_6;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_55, L_56, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01b0;
	} // end catch (depth: 1)

IL_019d:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_57 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_57, /*hidden argument*/NULL);
	}

IL_01b0:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendUINT16AsyncU3Ed__14_MoveNext_m923619CB32678B83A16D1FE0316948074A41E1B2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC * _thisAdjusted = reinterpret_cast<U3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC *>(__this + _offset);
	U3CSendUINT16AsyncU3Ed__14_MoveNext_m923619CB32678B83A16D1FE0316948074A41E1B2(_thisAdjusted, method);
}
// System.Void TCPClient/<SendUINT16Async>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUINT16AsyncU3Ed__14_SetStateMachine_mC3B6759950EB2C7571F27B89FA3D8AF3E9D11432 (U3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendUINT16AsyncU3Ed__14_SetStateMachine_mC3B6759950EB2C7571F27B89FA3D8AF3E9D11432_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC * _thisAdjusted = reinterpret_cast<U3CSendUINT16AsyncU3Ed__14_tDEC21984C4AF149DC285BC6F055614ED13DA32FC *>(__this + _offset);
	U3CSendUINT16AsyncU3Ed__14_SetStateMachine_mC3B6759950EB2C7571F27B89FA3D8AF3E9D11432(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TCPClient/<SendUINT16Async>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUINT16AsyncU3Ed__15_MoveNext_mB107D978A34B58F01831FB70516C3F90FEAB0190 (U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141_mBBF077C2AF315B25009BB8DB7B4D7980DBC374D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141_mC8FDA1134E403C8AD6A0ECB6397EED37A2882AAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB07613CE857075BEAD679A7DF37A6C99100AC47D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mABBAB86FD9F33AA30FCEA00286EBB81DB7937D84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * V_1 = NULL;
	TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 7> __leave_targets;
	String_t* G_B18_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)1))))
			{
				goto IL_0026;
			}
		}

IL_0012:
		{
			// if (!lastMessageSent) return;
			TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = L_3->get_lastMessageSent_11();
			if (L_4)
			{
				goto IL_001f;
			}
		}

IL_001a:
		{
			// if (!lastMessageSent) return;
			goto IL_01c0;
		}

IL_001f:
		{
			// lastMessageSent = false;
			TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_5 = V_1;
			NullCheck(L_5);
			L_5->set_lastMessageSent_11((bool)0);
		}

IL_0026:
		{
		}

IL_0027:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_00cc;
				}
			}

IL_002d:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_012d;
				}
			}

IL_0034:
			{
				// dw.WriteString("s"); // header "s" stands for it is ushort array (uint16)
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_8 = V_1;
				NullCheck(L_8);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_9 = L_8->get_dw_9();
				NullCheck(L_9);
				uint32_t L_10;
				L_10 = DataWriter_WriteString_m37D3000CE2655C1E9179B4EC7B736BF73D320D03(L_9, _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, /*hidden argument*/NULL);
				// dw.WriteInt32(data1.Length + data2.Length);
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_11 = V_1;
				NullCheck(L_11);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_12 = L_11->get_dw_9();
				UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_13 = __this->get_data1_3();
				NullCheck(L_13);
				UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_14 = __this->get_data2_4();
				NullCheck(L_14);
				NullCheck(L_12);
				DataWriter_WriteInt32_m5D96F1EA9585FF7CF685775D5394B8F1799423C9(L_12, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))), (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))), /*hidden argument*/NULL);
				// dw.WriteBytes(UINT16ToBytes(data1));
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_15 = V_1;
				NullCheck(L_15);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_16 = L_15->get_dw_9();
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_17 = V_1;
				UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_18 = __this->get_data1_3();
				NullCheck(L_17);
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19;
				L_19 = TCPClient_UINT16ToBytes_m0B9B88D62CDD7F0D2550B9979A16025EFE059460(L_17, L_18, /*hidden argument*/NULL);
				NullCheck(L_16);
				DataWriter_WriteBytes_mADCDD5B8F9F6AEC47315350EB524A5FE007B74FE(L_16, L_19, /*hidden argument*/NULL);
				// dw.WriteBytes(UINT16ToBytes(data2));
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_20 = V_1;
				NullCheck(L_20);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_21 = L_20->get_dw_9();
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_22 = V_1;
				UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_23 = __this->get_data2_4();
				NullCheck(L_22);
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24;
				L_24 = TCPClient_UINT16ToBytes_m0B9B88D62CDD7F0D2550B9979A16025EFE059460(L_22, L_23, /*hidden argument*/NULL);
				NullCheck(L_21);
				DataWriter_WriteBytes_mADCDD5B8F9F6AEC47315350EB524A5FE007B74FE(L_21, L_24, /*hidden argument*/NULL);
				// await dw.StoreAsync();
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_25 = V_1;
				NullCheck(L_25);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_26 = L_25->get_dw_9();
				NullCheck(L_26);
				DataWriterStoreOperation_tAB8CDEF471A0A5F5354E753953E1510E142C827C * L_27;
				L_27 = DataWriter_StoreAsync_m6377506DB362DDD4CE31FD9530A16873D4473AA4(L_26, /*hidden argument*/NULL);
				TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  L_28;
				L_28 = WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mABBAB86FD9F33AA30FCEA00286EBB81DB7937D84(L_27, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mABBAB86FD9F33AA30FCEA00286EBB81DB7937D84_RuntimeMethod_var);
				V_2 = L_28;
				bool L_29;
				L_29 = TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD((TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_00e8;
				}
			}

IL_00a9:
			{
				int32_t L_30 = 0;
				V_0 = L_30;
				__this->set_U3CU3E1__state_0(L_30);
				TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  L_31 = V_2;
				__this->set_U3CU3Eu__1_5(L_31);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_32 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141_mBBF077C2AF315B25009BB8DB7B4D7980DBC374D9((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_32, (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *)(&V_2), (U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141_mBBF077C2AF315B25009BB8DB7B4D7980DBC374D9_RuntimeMethod_var);
				goto IL_01d3;
			}

IL_00cc:
			{
				TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  L_33 = __this->get_U3CU3Eu__1_5();
				V_2 = L_33;
				TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * L_34 = __this->get_address_of_U3CU3Eu__1_5();
				il2cpp_codegen_initobj(L_34, sizeof(TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 ));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->set_U3CU3E1__state_0(L_35);
			}

IL_00e8:
			{
				uint32_t L_36;
				L_36 = TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C((TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C_RuntimeMethod_var);
				// await dw.FlushAsync();
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_37 = V_1;
				NullCheck(L_37);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_38 = L_37->get_dw_9();
				NullCheck(L_38);
				RuntimeObject* L_39;
				L_39 = DataWriter_FlushAsync_mBEF87BDA2121D90A25DC8A7AB180CA6CB8B3330B(L_38, /*hidden argument*/NULL);
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_40;
				L_40 = WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB07613CE857075BEAD679A7DF37A6C99100AC47D(L_39, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB07613CE857075BEAD679A7DF37A6C99100AC47D_RuntimeMethod_var);
				V_3 = L_40;
				bool L_41;
				L_41 = TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_0149;
				}
			}

IL_010a:
			{
				int32_t L_42 = 1;
				V_0 = L_42;
				__this->set_U3CU3E1__state_0(L_42);
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_43 = V_3;
				__this->set_U3CU3Eu__2_6(L_43);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_44 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141_mC8FDA1134E403C8AD6A0ECB6397EED37A2882AAC((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_44, (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), (U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141_mC8FDA1134E403C8AD6A0ECB6397EED37A2882AAC_RuntimeMethod_var);
				goto IL_01d3;
			}

IL_012d:
			{
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_45 = __this->get_U3CU3Eu__2_6();
				V_3 = L_45;
				TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * L_46 = __this->get_address_of_U3CU3Eu__2_6();
				il2cpp_codegen_initobj(L_46, sizeof(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C ));
				int32_t L_47 = (-1);
				V_0 = L_47;
				__this->set_U3CU3E1__state_0(L_47);
			}

IL_0149:
			{
				bool L_48;
				L_48 = TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var);
				// }
				goto IL_019e;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0153;
			}
			throw e;
		}

CATCH_0153:
		{ // begin catch(System.Exception)
			{
				// catch (Exception ex)
				V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
				// SocketErrorStatus webErrorStatus = SocketError.GetStatus(ex.GetBaseException().HResult);
				Exception_t * L_49 = V_4;
				NullCheck(L_49);
				Exception_t * L_50;
				L_50 = VirtFuncInvoker0< Exception_t * >::Invoke(7 /* System.Exception System.Exception::GetBaseException() */, L_49);
				NullCheck(L_50);
				int32_t L_51;
				L_51 = Exception_get_HResult_mAF0FE56C31C3C7D5567539FB46BE80D6B9D1AD42_inline(L_50, /*hidden argument*/NULL);
				int32_t L_52;
				L_52 = SocketError_GetStatus_m4E09DAB6C550036CD4C64C51195DDAA03D8669D8(L_51, /*hidden argument*/NULL);
				V_5 = L_52;
				// Debug.Log(webErrorStatus.ToString() != "Unknown" ? webErrorStatus.ToString() : ex.Message);
				RuntimeObject * L_53 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketErrorStatus_tACE77FB3A6ABF51D62DD9B95BF3AD084E3CA8612_il2cpp_TypeInfo_var)), (&V_5));
				NullCheck(L_53);
				String_t* L_54;
				L_54 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_53);
				V_5 = *(int32_t*)UnBox(L_53);
				bool L_55;
				L_55 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_54, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C)), /*hidden argument*/NULL);
				if (L_55)
				{
					goto IL_018a;
				}
			}

IL_0181:
			{
				Exception_t * L_56 = V_4;
				NullCheck(L_56);
				String_t* L_57;
				L_57 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_56);
				G_B18_0 = L_57;
				goto IL_0197;
			}

IL_018a:
			{
				RuntimeObject * L_58 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketErrorStatus_tACE77FB3A6ABF51D62DD9B95BF3AD084E3CA8612_il2cpp_TypeInfo_var)), (&V_5));
				NullCheck(L_58);
				String_t* L_59;
				L_59 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_58);
				V_5 = *(int32_t*)UnBox(L_58);
				G_B18_0 = L_59;
			}

IL_0197:
			{
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
				Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(G_B18_0, /*hidden argument*/NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_019e;
			}
		} // end catch (depth: 2)

IL_019e:
		{
			// lastMessageSent = true;
			TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_60 = V_1;
			NullCheck(L_60);
			L_60->set_lastMessageSent_11((bool)1);
			goto IL_01c0;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01a7;
		}
		throw e;
	}

CATCH_01a7:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_61 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_62 = V_6;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_61, L_62, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01d3;
	} // end catch (depth: 1)

IL_01c0:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_63 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_63, /*hidden argument*/NULL);
	}

IL_01d3:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendUINT16AsyncU3Ed__15_MoveNext_mB107D978A34B58F01831FB70516C3F90FEAB0190_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141 * _thisAdjusted = reinterpret_cast<U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141 *>(__this + _offset);
	U3CSendUINT16AsyncU3Ed__15_MoveNext_mB107D978A34B58F01831FB70516C3F90FEAB0190(_thisAdjusted, method);
}
// System.Void TCPClient/<SendUINT16Async>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUINT16AsyncU3Ed__15_SetStateMachine_m6F0958663D358A62D3FF7B3FB272F8442EABE823 (U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendUINT16AsyncU3Ed__15_SetStateMachine_m6F0958663D358A62D3FF7B3FB272F8442EABE823_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141 * _thisAdjusted = reinterpret_cast<U3CSendUINT16AsyncU3Ed__15_t087C741479B2E895D56D57AFAAD26B7DFE146141 *>(__this + _offset);
	U3CSendUINT16AsyncU3Ed__15_SetStateMachine_m6F0958663D358A62D3FF7B3FB272F8442EABE823(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TCPClient/<StartCoonection>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCoonectionU3Ed__11_MoveNext_mB193A8FC158A571ECE4FA3A6F3ACDBD9009258C7 (U3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E_mEA42F36DF36FCF285682790D48DEC001E07490F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * V_1 = NULL;
	HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5 * V_2 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	String_t* G_B13_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0024;
			}
		}

IL_0011:
		{
			// if (socket != null) socket.Dispose();
			TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_3 = V_1;
			NullCheck(L_3);
			StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * L_4 = L_3->get_socket_8();
			if (!L_4)
			{
				goto IL_0024;
			}
		}

IL_0019:
		{
			// if (socket != null) socket.Dispose();
			TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_5 = V_1;
			NullCheck(L_5);
			StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * L_6 = L_5->get_socket_8();
			NullCheck(L_6);
			StreamSocket_Dispose_m49BB98678857BA758A033329A39462904D10B228(L_6, /*hidden argument*/NULL);
		}

IL_0024:
		{
		}

IL_0025:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0083;
				}
			}

IL_0028:
			{
				// socket = new StreamSocket();
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_8 = V_1;
				StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * L_9 = (StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 *)il2cpp_codegen_object_new(StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921_il2cpp_TypeInfo_var);
				StreamSocket__ctor_m0ADAF625EE434F52F6CD1F539F961AAB95876533(L_9, /*hidden argument*/NULL);
				NullCheck(L_8);
				L_8->set_socket_8(L_9);
				// var hostName = new Windows.Networking.HostName(hostIPAddress);
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_10 = V_1;
				NullCheck(L_10);
				String_t* L_11 = L_10->get_hostIPAddress_4();
				HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5 * L_12 = (HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5 *)il2cpp_codegen_object_new(HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5_il2cpp_TypeInfo_var);
				HostName__ctor_mB6DD447379F5F9BAC0C2B672318FEF41463856A7(L_12, L_11, /*hidden argument*/NULL);
				V_2 = L_12;
				// await socket.ConnectAsync(hostName, port);
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_13 = V_1;
				NullCheck(L_13);
				StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * L_14 = L_13->get_socket_8();
				HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5 * L_15 = V_2;
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_16 = V_1;
				NullCheck(L_16);
				String_t* L_17 = L_16->get_port_5();
				NullCheck(L_14);
				RuntimeObject* L_18;
				L_18 = StreamSocket_ConnectAsync_mD79B5CF30BDBA1A492F5818DF172075FEF4913EE(L_14, L_15, L_17, /*hidden argument*/NULL);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_19;
				L_19 = WindowsRuntimeSystemExtensions_GetAwaiter_m0218FEA730C2DAD8311AA5A6BAE767DC7BB5D58B(L_18, /*hidden argument*/NULL);
				V_3 = L_19;
				bool L_20;
				L_20 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
				if (L_20)
				{
					goto IL_009f;
				}
			}

IL_0060:
			{
				int32_t L_21 = 0;
				V_0 = L_21;
				__this->set_U3CU3E1__state_0(L_21);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_22 = V_3;
				__this->set_U3CU3Eu__1_3(L_22);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_23 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E_mEA42F36DF36FCF285682790D48DEC001E07490F4((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_23, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E_mEA42F36DF36FCF285682790D48DEC001E07490F4_RuntimeMethod_var);
				goto IL_0175;
			}

IL_0083:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_24 = __this->get_U3CU3Eu__1_3();
				V_3 = L_24;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_25 = __this->get_address_of_U3CU3Eu__1_3();
				il2cpp_codegen_initobj(L_25, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_26 = (-1);
				V_0 = L_26;
				__this->set_U3CU3E1__state_0(L_26);
			}

IL_009f:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
				// dw = new DataWriter(socket.OutputStream);
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_27 = V_1;
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_28 = V_1;
				NullCheck(L_28);
				StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * L_29 = L_28->get_socket_8();
				NullCheck(L_29);
				RuntimeObject* L_30;
				L_30 = StreamSocket_get_OutputStream_mDE216F07C1125E7971BEB545FF36F0C52AF2AA44(L_29, /*hidden argument*/NULL);
				DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 * L_31 = (DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21 *)il2cpp_codegen_object_new(DataWriter_t345EFA0A28E377010454ABCB4653A740B1A7DF21_il2cpp_TypeInfo_var);
				DataWriter__ctor_mFCB1F83900A0D1AC0F038BCC9D01383099FBD27E(L_31, L_30, /*hidden argument*/NULL);
				NullCheck(L_27);
				L_27->set_dw_9(L_31);
				// dr = new DataReader(socket.InputStream);
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_32 = V_1;
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_33 = V_1;
				NullCheck(L_33);
				StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * L_34 = L_33->get_socket_8();
				NullCheck(L_34);
				RuntimeObject* L_35;
				L_35 = StreamSocket_get_InputStream_mE7A37722EC598466C097C7FCE06F1B9D2E27DAD4(L_34, /*hidden argument*/NULL);
				DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E * L_36 = (DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E *)il2cpp_codegen_object_new(DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E_il2cpp_TypeInfo_var);
				DataReader__ctor_mF2123BC23FC33A58A140ACB4C04B5007B4974360(L_36, L_35, /*hidden argument*/NULL);
				NullCheck(L_32);
				L_32->set_dr_10(L_36);
				// dr.InputStreamOptions = InputStreamOptions.Partial;
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_37 = V_1;
				NullCheck(L_37);
				DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E * L_38 = L_37->get_dr_10();
				NullCheck(L_38);
				DataReader_put_InputStreamOptions_m7350744D69B3834E66B34B06E4FC542601BB03DC(L_38, 1, /*hidden argument*/NULL);
				// connected = true;
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_39 = V_1;
				NullCheck(L_39);
				L_39->set_connected_7((bool)1);
				// ConnectionStatusLED.material.color = Color.green;
				TCPClient_t3EE298BE8DA8751898C261BD997B852CA26E5A30 * L_40 = V_1;
				NullCheck(L_40);
				Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_41 = L_40->get_ConnectionStatusLED_6();
				NullCheck(L_41);
				Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_42;
				L_42 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_41, /*hidden argument*/NULL);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43;
				L_43 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
				NullCheck(L_42);
				Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_42, L_43, /*hidden argument*/NULL);
				// }
				goto IL_0147;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00fc;
			}
			throw e;
		}

CATCH_00fc:
		{ // begin catch(System.Exception)
			{
				// catch (Exception ex)
				V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
				// SocketErrorStatus webErrorStatus = SocketError.GetStatus(ex.GetBaseException().HResult);
				Exception_t * L_44 = V_4;
				NullCheck(L_44);
				Exception_t * L_45;
				L_45 = VirtFuncInvoker0< Exception_t * >::Invoke(7 /* System.Exception System.Exception::GetBaseException() */, L_44);
				NullCheck(L_45);
				int32_t L_46;
				L_46 = Exception_get_HResult_mAF0FE56C31C3C7D5567539FB46BE80D6B9D1AD42_inline(L_45, /*hidden argument*/NULL);
				int32_t L_47;
				L_47 = SocketError_GetStatus_m4E09DAB6C550036CD4C64C51195DDAA03D8669D8(L_46, /*hidden argument*/NULL);
				V_5 = L_47;
				// Debug.Log(webErrorStatus.ToString() != "Unknown" ? webErrorStatus.ToString() : ex.Message);
				RuntimeObject * L_48 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketErrorStatus_tACE77FB3A6ABF51D62DD9B95BF3AD084E3CA8612_il2cpp_TypeInfo_var)), (&V_5));
				NullCheck(L_48);
				String_t* L_49;
				L_49 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_48);
				V_5 = *(int32_t*)UnBox(L_48);
				bool L_50;
				L_50 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_49, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C)), /*hidden argument*/NULL);
				if (L_50)
				{
					goto IL_0133;
				}
			}

IL_012a:
			{
				Exception_t * L_51 = V_4;
				NullCheck(L_51);
				String_t* L_52;
				L_52 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_51);
				G_B13_0 = L_52;
				goto IL_0140;
			}

IL_0133:
			{
				RuntimeObject * L_53 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketErrorStatus_tACE77FB3A6ABF51D62DD9B95BF3AD084E3CA8612_il2cpp_TypeInfo_var)), (&V_5));
				NullCheck(L_53);
				String_t* L_54;
				L_54 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_53);
				V_5 = *(int32_t*)UnBox(L_53);
				G_B13_0 = L_54;
			}

IL_0140:
			{
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
				Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(G_B13_0, /*hidden argument*/NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0147;
			}
		} // end catch (depth: 2)

IL_0147:
		{
			goto IL_0162;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0149;
		}
		throw e;
	}

CATCH_0149:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_55 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_56 = V_6;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_55, L_56, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0175;
	} // end catch (depth: 1)

IL_0162:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_57 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_57, /*hidden argument*/NULL);
	}

IL_0175:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartCoonectionU3Ed__11_MoveNext_mB193A8FC158A571ECE4FA3A6F3ACDBD9009258C7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E * _thisAdjusted = reinterpret_cast<U3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E *>(__this + _offset);
	U3CStartCoonectionU3Ed__11_MoveNext_mB193A8FC158A571ECE4FA3A6F3ACDBD9009258C7(_thisAdjusted, method);
}
// System.Void TCPClient/<StartCoonection>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCoonectionU3Ed__11_SetStateMachine_m17CFA4C2A56D696E0E4802E621A2323C76BABC9B (U3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartCoonectionU3Ed__11_SetStateMachine_m17CFA4C2A56D696E0E4802E621A2323C76BABC9B_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E * _thisAdjusted = reinterpret_cast<U3CStartCoonectionU3Ed__11_t7DAFEA00CCC71086EE5F93B3055501968733E85E *>(__this + _offset);
	U3CStartCoonectionU3Ed__11_SetStateMachine_m17CFA4C2A56D696E0E4802E621A2323C76BABC9B(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RosSharp.RosBridgeClient.Actionlib.UnityFibonacciActionSever/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF5A05AAE24EC6F248300F6E71DD91A7EA4942A62 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t266B799279B56E423B242D44468C18D2AC57075A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t266B799279B56E423B242D44468C18D2AC57075A * L_0 = (U3CU3Ec_t266B799279B56E423B242D44468C18D2AC57075A *)il2cpp_codegen_object_new(U3CU3Ec_t266B799279B56E423B242D44468C18D2AC57075A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5B0E1DED4BDFEF400D2768BE929BAEFE44A7B27B(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t266B799279B56E423B242D44468C18D2AC57075A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t266B799279B56E423B242D44468C18D2AC57075A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void RosSharp.RosBridgeClient.Actionlib.UnityFibonacciActionSever/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5B0E1DED4BDFEF400D2768BE929BAEFE44A7B27B (U3CU3Ec_t266B799279B56E423B242D44468C18D2AC57075A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RosSharp.RosBridgeClient.Actionlib.UnityFibonacciActionSever/<>c::<Start>b__5_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__5_0_m7AE32C9CE21D8F0252797845F7CB6CDAB40F44CB (U3CU3Ec_t266B799279B56E423B242D44468C18D2AC57075A * __this, String_t* ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fibonacciActionServer = new FibonacciActionServer(actionName, rosConnector.RosSocket, new Log(x => Debug.Log(x)));
		String_t* L_0 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_0, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RosSharp.Urdf.UrdfPlugins/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m03FBD2F0296730E0E954175AE28F72C429E16EED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862 * L_0 = (U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862 *)il2cpp_codegen_object_new(U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mDB61C170875ADF820A910BEE3239EC8C36A35CF9(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void RosSharp.Urdf.UrdfPlugins/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDB61C170875ADF820A910BEE3239EC8C36A35CF9 (U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// RosSharp.Urdf.Plugin RosSharp.Urdf.UrdfPlugins/<>c::<ExportPluginsData>b__1_0(RosSharp.Urdf.UrdfPlugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 * U3CU3Ec_U3CExportPluginsDataU3Eb__1_0_mF8AD33592A69B12C9D6DD8D0A4A2F4410D084FC4 (U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862 * __this, UrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690 * ___urdfPlugin0, const RuntimeMethod* method)
{
	{
		// .Select(urdfPlugin => urdfPlugin.ExportPluginData())
		UrdfPlugin_tDED855E463A406B5B0D5B543B114DDD780D56690 * L_0 = ___urdfPlugin0;
		NullCheck(L_0);
		Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 * L_1;
		L_1 = UrdfPlugin_ExportPluginData_m0A59A4244303EFDD21BEC86C761447709478172F(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean RosSharp.Urdf.UrdfPlugins/<>c::<ExportPluginsData>b__1_1(RosSharp.Urdf.Plugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CExportPluginsDataU3Eb__1_1_m51D2C8E264F4FAC62788169AB15EA8F131F17A95 (U3CU3Ec_t7389B89CB6B978923A1CFF405AD22DA44C56D862 * __this, Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 * ___plugin0, const RuntimeMethod* method)
{
	{
		// .Where(plugin => plugin != null)
		Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 * L_0 = ___plugin0;
		return (bool)((!(((RuntimeObject*)(Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Exception_get_HResult_mAF0FE56C31C3C7D5567539FB46BE80D6B9D1AD42_inline (Exception_t * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__HResult_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
