#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
struct VirtFuncInvoker12
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
struct VirtFuncInvoker13
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
struct GenericVirtFuncInvoker12
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
struct GenericVirtFuncInvoker13
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericVirtFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
struct InterfaceFuncInvoker12
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
struct InterfaceFuncInvoker13
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
struct GenericInterfaceFuncInvoker12
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
struct GenericInterfaceFuncInvoker13
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericInterfaceFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};

// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Substance.Platform.NativeFunctions
struct NativeFunctions_t392AC623174D54E9D6C9DD3282ADBD00FE57579B;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Substance.Platform.NativeFunctions/DLLHelpers
struct DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1;
// Substance.Platform.NativeFunctions/cppApplyPresetDelegate
struct cppApplyPresetDelegate_t0C78DE7374ADF97A9CA1CED0457E5076622F5DDD;
// Substance.Platform.NativeFunctions/cppDuplicateGraphInstanceDelegate
struct cppDuplicateGraphInstanceDelegate_t7E7635990B48BFFE1749B10C15C6329FDC482B7E;
// Substance.Platform.NativeFunctions/cppFreeMemoryDelegate
struct cppFreeMemoryDelegate_t4589A515CC653545394FBA1CB06E4A2C6FFAEAA6;
// Substance.Platform.NativeFunctions/cppGetChannelNamesDelegate
struct cppGetChannelNamesDelegate_t400B9CD13926147699DD27F112795DB88F8E3498;
// Substance.Platform.NativeFunctions/cppGetColorSpaceListDelegate
struct cppGetColorSpaceListDelegate_t576494AB09EBEA0F0E016425ABB26A39963A9996;
// Substance.Platform.NativeFunctions/cppGetEngineVersionDelegate
struct cppGetEngineVersionDelegate_t13B392C6083E0FC31AC156F8C23900F9EA473A2B;
// Substance.Platform.NativeFunctions/cppGetInput_FloatDelegate
struct cppGetInput_FloatDelegate_t221FB909D975EA7ABD8287CD1031D3B939698D2F;
// Substance.Platform.NativeFunctions/cppGetInput_IntDelegate
struct cppGetInput_IntDelegate_tE2261BA1BAB1478E9C781D857BEF240C820CD8AC;
// Substance.Platform.NativeFunctions/cppGetInput_IntsDelegate
struct cppGetInput_IntsDelegate_tCAA6271E332B52940991E6D4666833368ACB6001;
// Substance.Platform.NativeFunctions/cppGetInput_StringDelegate
struct cppGetInput_StringDelegate_t3E2EF81D92442C633BC245D9D6F34238F9B147F7;
// Substance.Platform.NativeFunctions/cppGetMComboBoxItemsDelegate
struct cppGetMComboBoxItemsDelegate_tF4F5718C0676EAED730748585BE30FADC488244D;
// Substance.Platform.NativeFunctions/cppGetMInputsDelegate
struct cppGetMInputsDelegate_t57C71B3DDC2EABBEF222B0EBFBF139A786B4880D;
// Substance.Platform.NativeFunctions/cppGetNumInputsDelegate
struct cppGetNumInputsDelegate_t13729683C1D24351E98391F54CDACC6C74BAD9A1;
// Substance.Platform.NativeFunctions/cppGetNumOutputsDelegate
struct cppGetNumOutputsDelegate_tEC58C8B60E851ADD8CCC2B0B5B4DDD4450258D9C;
// Substance.Platform.NativeFunctions/cppGetNumberOfDuplicatedGraphsDelegate
struct cppGetNumberOfDuplicatedGraphsDelegate_t79DCEF69BCD3A8DA7F6E52779E5188CC7FA6E03A;
// Substance.Platform.NativeFunctions/cppGetOldFileIdDelegate
struct cppGetOldFileIdDelegate_tFF91C0780AFFFBAC0F8FEEB180BCECCC9276FB0E;
// Substance.Platform.NativeFunctions/cppGetOutputChannelStrFromHashDelegate
struct cppGetOutputChannelStrFromHashDelegate_t1A4B5521992D275C1404FA35AC39FC903DEC7801;
// Substance.Platform.NativeFunctions/cppGetOutputHashDelegate
struct cppGetOutputHashDelegate_t35115A8C2400D889E62AB407CEA182F1B58B6C8C;
// Substance.Platform.NativeFunctions/cppGetOutputIdentifierFromHashDelegate
struct cppGetOutputIdentifierFromHashDelegate_t5B7B89C8B3B9420EE6235BB7EB2DC66840151F76;
// Substance.Platform.NativeFunctions/cppGetOutputLabelFromHashDelegate
struct cppGetOutputLabelFromHashDelegate_t333F4644517C361C40991DB87E3251DAD5200E20;
// Substance.Platform.NativeFunctions/cppGetOutputsDescDelegate
struct cppGetOutputsDescDelegate_tC6C5AA6F2ADA418834452A6C5461BE449F297478;
// Substance.Platform.NativeFunctions/cppGetPresetDelegate
struct cppGetPresetDelegate_t7566CD196CA84BD167A926F59BA9B783F761795E;
// Substance.Platform.NativeFunctions/cppGetTextureDimensionsDelegate
struct cppGetTextureDimensionsDelegate_tFCCE46F41215E38CA52FE5B6B5540C89131E7793;
// Substance.Platform.NativeFunctions/cppHelloDelegate
struct cppHelloDelegate_t388111418C0A6DA23263E82AE671690A9C4D66E8;
// Substance.Platform.NativeFunctions/cppInitSubstanceDelegate
struct cppInitSubstanceDelegate_t5061208036D13164474ABB6301D854AD7C3F27B4;
// Substance.Platform.NativeFunctions/cppIsImageOutputFromHashDelegate
struct cppIsImageOutputFromHashDelegate_t4A3A006107496BB4BA90C54E99C1E6CB1D3896AA;
// Substance.Platform.NativeFunctions/cppIsRendererBusyDelegate
struct cppIsRendererBusyDelegate_t2E1EACFB22525453D9D9D8BF37FBC036A0BCA3AF;
// Substance.Platform.NativeFunctions/cppIsValidGraphHandleDelegate
struct cppIsValidGraphHandleDelegate_t72E8F8144C8E15FD188709DB3A9739908C33E214;
// Substance.Platform.NativeFunctions/cppListAssetsDelegate
struct cppListAssetsDelegate_tCE8FE55E3B8998DDF5F8C51E8FD4D2B4933CFBF1;
// Substance.Platform.NativeFunctions/cppListInputsDelegate
struct cppListInputsDelegate_t53CEDDE532A51ABDBA2A02893E487B039F70F31D;
// Substance.Platform.NativeFunctions/cppLoadSubstanceDelegate
struct cppLoadSubstanceDelegate_t064B5235187E3C0476C02760526C786F19A85CEE;
// Substance.Platform.NativeFunctions/cppModifyTexturePackingDelegate
struct cppModifyTexturePackingDelegate_tF5AFAA7F80AB9BD8EA76D64F744DA92B36739D00;
// Substance.Platform.NativeFunctions/cppMoveAssetDelegate
struct cppMoveAssetDelegate_t4F3637A73D8E132238C79BD5154B10A1B2D42A92;
// Substance.Platform.NativeFunctions/cppOnGenerateMipMapsChangedDelegate
struct cppOnGenerateMipMapsChangedDelegate_tEF82EF11ED512D83B6FF4C53B675E4050788A379;
// Substance.Platform.NativeFunctions/cppProcessQueuedOutputsDelegate
struct cppProcessQueuedOutputsDelegate_t67859933ABBED533B3E8F71CBA2D9005BC084883;
// Substance.Platform.NativeFunctions/cppQueueSubstanceDelegate
struct cppQueueSubstanceDelegate_t575E4557E550F01EB0BB8D9F91F89E1EA0F74E82;
// Substance.Platform.NativeFunctions/cppRemoveAssetDelegate
struct cppRemoveAssetDelegate_tD52C59D0DC1BD5D051DFF11832AEDE9ED69C7146;
// Substance.Platform.NativeFunctions/cppRemoveGraphInstanceDelegate
struct cppRemoveGraphInstanceDelegate_tDD1B39D6EF74479C5A5938EBF64076DD892F9265;
// Substance.Platform.NativeFunctions/cppRenderSubstancesDelegate
struct cppRenderSubstancesDelegate_tBDBA34EA30F65643A372E619838AE6743BDD527F;
// Substance.Platform.NativeFunctions/cppSetCallbacksDelegate
struct cppSetCallbacksDelegate_tBCBFDBD47E4A8D03B4B54FCBFE4B665C640F6DBF;
// Substance.Platform.NativeFunctions/cppSetCreateSubstanceGraphCallbackEditorPtrDelegate
struct cppSetCreateSubstanceGraphCallbackEditorPtrDelegate_t3B40C905CC291FE9687AD0E4E7B3D5CC1E81E4C7;
// Substance.Platform.NativeFunctions/cppSetDirtyOutputsDelegate
struct cppSetDirtyOutputsDelegate_t5DB997E31548F8A3B8D5CBE5B0552A01C0D1F4ED;
// Substance.Platform.NativeFunctions/cppSetInput_FloatDelegate
struct cppSetInput_FloatDelegate_t484FD6CE4EA43F49B3F35A0275D8E9BAEA07144D;
// Substance.Platform.NativeFunctions/cppSetInput_IntDelegate
struct cppSetInput_IntDelegate_tA863B8C05494F48272DA2D4C084B51F23A9BA794;
// Substance.Platform.NativeFunctions/cppSetInput_StringDelegate
struct cppSetInput_StringDelegate_t85B9D05E0F89A925D39FA6DD400EB2A32746A22B;
// Substance.Platform.NativeFunctions/cppSetInput_TextureDelegate
struct cppSetInput_TextureDelegate_t3E6137FDADDC272FEE49BBD0A4779A0D69034A82;
// Substance.Platform.NativeFunctions/cppShutdownSubstanceDelegate
struct cppShutdownSubstanceDelegate_t8C97F4283C5BFAC2186EF838967C7A7F44892109;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate
struct Delegate_t;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppApplyPresetDelegate_t0C78DE7374ADF97A9CA1CED0457E5076622F5DDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppDuplicateGraphInstanceDelegate_t7E7635990B48BFFE1749B10C15C6329FDC482B7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppFreeMemoryDelegate_t4589A515CC653545394FBA1CB06E4A2C6FFAEAA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppGetChannelNamesDelegate_t400B9CD13926147699DD27F112795DB88F8E3498_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppGetColorSpaceListDelegate_t576494AB09EBEA0F0E016425ABB26A39963A9996_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppGetEngineVersionDelegate_t13B392C6083E0FC31AC156F8C23900F9EA473A2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppGetInput_FloatDelegate_t221FB909D975EA7ABD8287CD1031D3B939698D2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppGetInput_IntDelegate_tE2261BA1BAB1478E9C781D857BEF240C820CD8AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppGetInput_IntsDelegate_tCAA6271E332B52940991E6D4666833368ACB6001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppGetInput_StringDelegate_t3E2EF81D92442C633BC245D9D6F34238F9B147F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppGetMComboBoxItemsDelegate_tF4F5718C0676EAED730748585BE30FADC488244D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppGetMInputsDelegate_t57C71B3DDC2EABBEF222B0EBFBF139A786B4880D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppGetNumInputsDelegate_t13729683C1D24351E98391F54CDACC6C74BAD9A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppGetNumOutputsDelegate_tEC58C8B60E851ADD8CCC2B0B5B4DDD4450258D9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppGetNumberOfDuplicatedGraphsDelegate_t79DCEF69BCD3A8DA7F6E52779E5188CC7FA6E03A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppGetOldFileIdDelegate_tFF91C0780AFFFBAC0F8FEEB180BCECCC9276FB0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppGetOutputChannelStrFromHashDelegate_t1A4B5521992D275C1404FA35AC39FC903DEC7801_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppGetOutputHashDelegate_t35115A8C2400D889E62AB407CEA182F1B58B6C8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppGetOutputIdentifierFromHashDelegate_t5B7B89C8B3B9420EE6235BB7EB2DC66840151F76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppGetOutputLabelFromHashDelegate_t333F4644517C361C40991DB87E3251DAD5200E20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppGetOutputsDescDelegate_tC6C5AA6F2ADA418834452A6C5461BE449F297478_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppGetPresetDelegate_t7566CD196CA84BD167A926F59BA9B783F761795E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppGetTextureDimensionsDelegate_tFCCE46F41215E38CA52FE5B6B5540C89131E7793_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppHelloDelegate_t388111418C0A6DA23263E82AE671690A9C4D66E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppInitSubstanceDelegate_t5061208036D13164474ABB6301D854AD7C3F27B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppIsImageOutputFromHashDelegate_t4A3A006107496BB4BA90C54E99C1E6CB1D3896AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppIsRendererBusyDelegate_t2E1EACFB22525453D9D9D8BF37FBC036A0BCA3AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppIsValidGraphHandleDelegate_t72E8F8144C8E15FD188709DB3A9739908C33E214_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppListAssetsDelegate_tCE8FE55E3B8998DDF5F8C51E8FD4D2B4933CFBF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppListInputsDelegate_t53CEDDE532A51ABDBA2A02893E487B039F70F31D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppLoadSubstanceDelegate_t064B5235187E3C0476C02760526C786F19A85CEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppModifyTexturePackingDelegate_tF5AFAA7F80AB9BD8EA76D64F744DA92B36739D00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppMoveAssetDelegate_t4F3637A73D8E132238C79BD5154B10A1B2D42A92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppOnGenerateMipMapsChangedDelegate_tEF82EF11ED512D83B6FF4C53B675E4050788A379_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppProcessQueuedOutputsDelegate_t67859933ABBED533B3E8F71CBA2D9005BC084883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppQueueSubstanceDelegate_t575E4557E550F01EB0BB8D9F91F89E1EA0F74E82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppRemoveAssetDelegate_tD52C59D0DC1BD5D051DFF11832AEDE9ED69C7146_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppRemoveGraphInstanceDelegate_tDD1B39D6EF74479C5A5938EBF64076DD892F9265_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppRenderSubstancesDelegate_tBDBA34EA30F65643A372E619838AE6743BDD527F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppSetCallbacksDelegate_tBCBFDBD47E4A8D03B4B54FCBFE4B665C640F6DBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppSetCreateSubstanceGraphCallbackEditorPtrDelegate_t3B40C905CC291FE9687AD0E4E7B3D5CC1E81E4C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppSetDirtyOutputsDelegate_t5DB997E31548F8A3B8D5CBE5B0552A01C0D1F4ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppSetInput_FloatDelegate_t484FD6CE4EA43F49B3F35A0275D8E9BAEA07144D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppSetInput_IntDelegate_tA863B8C05494F48272DA2D4C084B51F23A9BA794_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppSetInput_StringDelegate_t85B9D05E0F89A925D39FA6DD400EB2A32746A22B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppSetInput_TextureDelegate_t3E6137FDADDC272FEE49BBD0A4779A0D69034A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cppShutdownSubstanceDelegate_t8C97F4283C5BFAC2186EF838967C7A7F44892109_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2FE81C7E153DC5EB28F1D5FBC05D22A4D0059925;
IL2CPP_EXTERN_C String_t* _stringLiteral4974AF465ABF9744179F55BDF50CA097A4E5656F;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8FDBCAF16E510B340E2A2215DBFCC0E665B66B;
IL2CPP_EXTERN_C String_t* _stringLiteral548EF31C1BF4F84F21BE48C60813ABA567BBC59D;
IL2CPP_EXTERN_C String_t* _stringLiteral5BB74AFD2F95CC72E2776E67F774C6D7B2842ECB;
IL2CPP_EXTERN_C String_t* _stringLiteralE4461BD4AA23FCFB38A024B997B86CCE4F0DEFCE;
IL2CPP_EXTERN_C String_t* _stringLiteralF96FD4DB7FB84C27965C15E58B0D37005FA518E6;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisRuntimeObject_m6F70613DBB973872E27DFD9A42F7653C55337A64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppApplyPreset_mCF8798AFD3276B8889A0E36DC3CE495425DDFA96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppComputeOldFileID_mB64280C12A4DD868C3AC92F4208A446C912E093E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppDuplicateGraphInstance_m7FB6837B160CA61D218F5FDE56E66A02233A9085_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppFreeMemory_mDDF52CBC19652524ADAA6A0D99463C94C5D192FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppGetChannelNames_m40BD9846F02777E0DE701C761693FDAC43707799_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppGetColorSpaceList_m8B1DF227AE914F7CCD59D8A121BBF3F9D5E827F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppGetEngineVersion_mE10F291EA5E1BC98C84FDF95A0CE91F76B607457_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppGetInput_Float_m524DD51080D392154738D0D812270AE603673987_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppGetInput_Int_m7C67758D71A6E0CB0BDCBDE7D1DE6BD11FC508B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppGetInput_Ints_mBC66E751A8DE6E220ADEECFA6EDE9E68B34194AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppGetInput_String_mFB98B36F0F4229896DCEECC18BE73DCDEFC3688A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppGetMComboBoxItems_mBD889125F0C6D4A22581605F067590A4ED93B18B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppGetMInputs_m912E1805AAFAF1793927D7F32F6ABEACF9A4B839_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppGetNumInputs_m56A8BF95507C0EB75A3ED29EE0051DF9BAA28250_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppGetNumOutputs_m4F0C3B14CCEB60A4DF8975C164DA9FC60B6D2CB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppGetNumberOfDuplicatedGraphs_m9614B5F9C8B6476AFCC76E90D984E3D53B8DEA7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppGetOutputChannelStrFromHash_mB29E89DBCE3EA966009ADC5C488FAB09F673D61A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppGetOutputHash_mC909DB5C2E90FDD42EE9DA0E6D8653D58BC8E01E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppGetOutputIdentifierFromHash_mEF44B84681F8A2899EC5A3F347963231B83079CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppGetOutputLabelFromHash_m4BF48DF27CDB871F6F14CD62DB086C6F42F5B69D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppGetOutputsDesc_mEB9EC39921274128A4C61D7749512C8C7D7D6279_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppGetPreset_mFFFA4C4CB8F60424798CCC917001FF48E1BB6123_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppGetTextureDimensions_mA2E9BB18D0B6119DE4F23555B838FA1E7CFC9CD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppHello_m14431448CA8B405CC6FEDDA9EB839CE7140F1466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppInitSubstance_m3F705CA737A73D30898E9E4A722F4F5C7ED5242A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppIsImageOutputFromHash_mA2ABD264A294567F12DBF6F971C349F450A876B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppIsRendererBusy_m079D5B71641DC910E57CD8AE971B4777843D025C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppIsValidGraphHandle_m522A0C74F84FBA5104599F856AF028639DE8C139_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppListAssets_m99284565A94D6D44AB793AA6792DDD9E1BDB86D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppListInputs_m192605C4D5B8953C58BBB630FC58748BEC464921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppLoadSubstance_mCD3B0E182505DBEB94397868731409B390A1BAC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppModifyTexturePacking_m4F863347D305BEE987F362D53CB4A8F7CA663260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppMoveAsset_m4031665D54A763C97A391127D094E7400FAAE36D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppOnGenerateMipMapsChanged_mC627C4DF878ACDBAC55501A8720B112972ABE6AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppProcessQueuedOutputs_mDB10C54B736A67EA7660FCD26D5CCAE41C666492_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppQueueSubstance_mBE8427F22C0B90C5724F832D348A8DE14D578084_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppRemoveAsset_m76906CD76105846A8D2F5A26EF4B30BAF5CD948F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppRemoveGraphInstance_m4FBDE3B74DA27467A96DB296824B15EBC4D2E9CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppRenderSubstances_m704369721E769C140235408804B7D6C9D9D7E4C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppSetCallbacks_m31788E27DDFE50D2212B621B1DFE9CFDDB348EA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppSetCreateSubstanceGraphCallbackEditorPtr_m87CE1D7EC3CFB42DED4D075592E010A8076392EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppSetDirtyOutputs_mE3D7C82C67769B1A371B2307EBF8269547A6B005_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppSetInput_Float_m151D0C07CC165A5253D4621D5C3EE9E891FCCAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppSetInput_Int_m74CCF6224CC615E8C8D4668B0320E0B434A4E2E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppSetInput_String_m0EE3A794F787B77C531CC8FA0BA8F88E70F7EA5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppSetInput_Texture_m539E800B17128D49A70BEC8C579AB892F4B87439_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeFunctions_cppShutdownSubstance_mC4FE9F68F7BBC54A014EC2830FD053EF29EA9254_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* cppApplyPresetDelegate_t0C78DE7374ADF97A9CA1CED0457E5076622F5DDD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppDuplicateGraphInstanceDelegate_t7E7635990B48BFFE1749B10C15C6329FDC482B7E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppFreeMemoryDelegate_t4589A515CC653545394FBA1CB06E4A2C6FFAEAA6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppGetChannelNamesDelegate_t400B9CD13926147699DD27F112795DB88F8E3498_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppGetColorSpaceListDelegate_t576494AB09EBEA0F0E016425ABB26A39963A9996_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppGetEngineVersionDelegate_t13B392C6083E0FC31AC156F8C23900F9EA473A2B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppGetInput_FloatDelegate_t221FB909D975EA7ABD8287CD1031D3B939698D2F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppGetInput_IntDelegate_tE2261BA1BAB1478E9C781D857BEF240C820CD8AC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppGetInput_IntsDelegate_tCAA6271E332B52940991E6D4666833368ACB6001_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppGetInput_StringDelegate_t3E2EF81D92442C633BC245D9D6F34238F9B147F7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppGetMComboBoxItemsDelegate_tF4F5718C0676EAED730748585BE30FADC488244D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppGetMInputsDelegate_t57C71B3DDC2EABBEF222B0EBFBF139A786B4880D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppGetNumInputsDelegate_t13729683C1D24351E98391F54CDACC6C74BAD9A1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppGetNumOutputsDelegate_tEC58C8B60E851ADD8CCC2B0B5B4DDD4450258D9C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppGetNumberOfDuplicatedGraphsDelegate_t79DCEF69BCD3A8DA7F6E52779E5188CC7FA6E03A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppGetOldFileIdDelegate_tFF91C0780AFFFBAC0F8FEEB180BCECCC9276FB0E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppGetOutputChannelStrFromHashDelegate_t1A4B5521992D275C1404FA35AC39FC903DEC7801_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppGetOutputHashDelegate_t35115A8C2400D889E62AB407CEA182F1B58B6C8C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppGetOutputIdentifierFromHashDelegate_t5B7B89C8B3B9420EE6235BB7EB2DC66840151F76_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppGetOutputLabelFromHashDelegate_t333F4644517C361C40991DB87E3251DAD5200E20_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppGetOutputsDescDelegate_tC6C5AA6F2ADA418834452A6C5461BE449F297478_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppGetPresetDelegate_t7566CD196CA84BD167A926F59BA9B783F761795E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppGetTextureDimensionsDelegate_tFCCE46F41215E38CA52FE5B6B5540C89131E7793_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppHelloDelegate_t388111418C0A6DA23263E82AE671690A9C4D66E8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppInitSubstanceDelegate_t5061208036D13164474ABB6301D854AD7C3F27B4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppIsImageOutputFromHashDelegate_t4A3A006107496BB4BA90C54E99C1E6CB1D3896AA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppIsRendererBusyDelegate_t2E1EACFB22525453D9D9D8BF37FBC036A0BCA3AF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppIsValidGraphHandleDelegate_t72E8F8144C8E15FD188709DB3A9739908C33E214_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppListAssetsDelegate_tCE8FE55E3B8998DDF5F8C51E8FD4D2B4933CFBF1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppListInputsDelegate_t53CEDDE532A51ABDBA2A02893E487B039F70F31D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppLoadSubstanceDelegate_t064B5235187E3C0476C02760526C786F19A85CEE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppModifyTexturePackingDelegate_tF5AFAA7F80AB9BD8EA76D64F744DA92B36739D00_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppMoveAssetDelegate_t4F3637A73D8E132238C79BD5154B10A1B2D42A92_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppOnGenerateMipMapsChangedDelegate_tEF82EF11ED512D83B6FF4C53B675E4050788A379_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppProcessQueuedOutputsDelegate_t67859933ABBED533B3E8F71CBA2D9005BC084883_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppQueueSubstanceDelegate_t575E4557E550F01EB0BB8D9F91F89E1EA0F74E82_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppRemoveAssetDelegate_tD52C59D0DC1BD5D051DFF11832AEDE9ED69C7146_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppRemoveGraphInstanceDelegate_tDD1B39D6EF74479C5A5938EBF64076DD892F9265_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppRenderSubstancesDelegate_tBDBA34EA30F65643A372E619838AE6743BDD527F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppSetCallbacksDelegate_tBCBFDBD47E4A8D03B4B54FCBFE4B665C640F6DBF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppSetCreateSubstanceGraphCallbackEditorPtrDelegate_t3B40C905CC291FE9687AD0E4E7B3D5CC1E81E4C7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppSetDirtyOutputsDelegate_t5DB997E31548F8A3B8D5CBE5B0552A01C0D1F4ED_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppSetInput_FloatDelegate_t484FD6CE4EA43F49B3F35A0275D8E9BAEA07144D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppSetInput_IntDelegate_tA863B8C05494F48272DA2D4C084B51F23A9BA794_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppSetInput_StringDelegate_t85B9D05E0F89A925D39FA6DD400EB2A32746A22B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppSetInput_TextureDelegate_t3E6137FDADDC272FEE49BBD0A4779A0D69034A82_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* cppShutdownSubstanceDelegate_t8C97F4283C5BFAC2186EF838967C7A7F44892109_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DLLHelpers_GetParams_mC108CD40EF2081A658CDA50A3E5D2EF2ED7A5893_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DLLHelpers_LoadDLL_mE69BD704DAC35F9063529104E83FE9D981691B74_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DLLHelpers_UnloadDLL_mF470A25B98D913F2A0AF3CEBA93CD284B28BCD41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DLLHelpers__cctor_m8BD763331E9E5728DDA308BAB1C8E2D1AD825EDD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_GetBuildTargetString_m2C4A923F9DEA2C3729E5922CCAF1D515739F45E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_GetMobileTextureFormat_m68DCD475B7EBC84B9D5B89EA5FEF0E578CE3A8CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppApplyPreset_mCF8798AFD3276B8889A0E36DC3CE495425DDFA96_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppComputeOldFileID_mB64280C12A4DD868C3AC92F4208A446C912E093E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppDuplicateGraphInstance_m7FB6837B160CA61D218F5FDE56E66A02233A9085_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppFreeMemory_mDDF52CBC19652524ADAA6A0D99463C94C5D192FE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppGetChannelNames_m40BD9846F02777E0DE701C761693FDAC43707799_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppGetColorSpaceList_m8B1DF227AE914F7CCD59D8A121BBF3F9D5E827F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppGetEngineVersion_mE10F291EA5E1BC98C84FDF95A0CE91F76B607457_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppGetInput_Float_m524DD51080D392154738D0D812270AE603673987_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppGetInput_Int_m7C67758D71A6E0CB0BDCBDE7D1DE6BD11FC508B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppGetInput_Ints_mBC66E751A8DE6E220ADEECFA6EDE9E68B34194AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppGetInput_String_mFB98B36F0F4229896DCEECC18BE73DCDEFC3688A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppGetMComboBoxItems_mBD889125F0C6D4A22581605F067590A4ED93B18B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppGetMInputs_m912E1805AAFAF1793927D7F32F6ABEACF9A4B839_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppGetNumInputs_m56A8BF95507C0EB75A3ED29EE0051DF9BAA28250_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppGetNumOutputs_m4F0C3B14CCEB60A4DF8975C164DA9FC60B6D2CB9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppGetNumberOfDuplicatedGraphs_m9614B5F9C8B6476AFCC76E90D984E3D53B8DEA7D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppGetOutputChannelStrFromHash_mB29E89DBCE3EA966009ADC5C488FAB09F673D61A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppGetOutputHash_mC909DB5C2E90FDD42EE9DA0E6D8653D58BC8E01E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppGetOutputIdentifierFromHash_mEF44B84681F8A2899EC5A3F347963231B83079CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppGetOutputLabelFromHash_m4BF48DF27CDB871F6F14CD62DB086C6F42F5B69D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppGetOutputsDesc_mEB9EC39921274128A4C61D7749512C8C7D7D6279_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppGetPreset_mFFFA4C4CB8F60424798CCC917001FF48E1BB6123_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppGetTextureDimensions_mA2E9BB18D0B6119DE4F23555B838FA1E7CFC9CD4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppHello_m14431448CA8B405CC6FEDDA9EB839CE7140F1466_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppInitSubstance_m3F705CA737A73D30898E9E4A722F4F5C7ED5242A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppIsImageOutputFromHash_mA2ABD264A294567F12DBF6F971C349F450A876B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppIsRendererBusy_m079D5B71641DC910E57CD8AE971B4777843D025C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppIsValidGraphHandle_m522A0C74F84FBA5104599F856AF028639DE8C139_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppListAssets_m99284565A94D6D44AB793AA6792DDD9E1BDB86D1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppListInputs_m192605C4D5B8953C58BBB630FC58748BEC464921_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppLoadSubstance_mCD3B0E182505DBEB94397868731409B390A1BAC8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppModifyTexturePacking_m4F863347D305BEE987F362D53CB4A8F7CA663260_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppMoveAsset_m4031665D54A763C97A391127D094E7400FAAE36D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppOnGenerateMipMapsChanged_mC627C4DF878ACDBAC55501A8720B112972ABE6AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppProcessQueuedOutputs_mDB10C54B736A67EA7660FCD26D5CCAE41C666492_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppQueueSubstance_mBE8427F22C0B90C5724F832D348A8DE14D578084_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppRemoveAsset_m76906CD76105846A8D2F5A26EF4B30BAF5CD948F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppRemoveGraphInstance_m4FBDE3B74DA27467A96DB296824B15EBC4D2E9CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppRenderSubstances_m704369721E769C140235408804B7D6C9D9D7E4C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppSetCallbacks_m31788E27DDFE50D2212B621B1DFE9CFDDB348EA4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppSetCreateSubstanceGraphCallbackEditorPtr_m87CE1D7EC3CFB42DED4D075592E010A8076392EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppSetDirtyOutputs_mE3D7C82C67769B1A371B2307EBF8269547A6B005_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppSetInput_Float_m151D0C07CC165A5253D4621D5C3EE9E891FCCAD3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppSetInput_Int_m74CCF6224CC615E8C8D4668B0320E0B434A4E2E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppSetInput_String_m0EE3A794F787B77C531CC8FA0BA8F88E70F7EA5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppSetInput_Texture_m539E800B17128D49A70BEC8C579AB892F4B87439_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeFunctions_cppShutdownSubstance_mC4FE9F68F7BBC54A014EC2830FD053EF29EA9254_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppApplyPresetDelegate_BeginInvoke_m8CC9DB7B01564180333DCC6557EE00E926E7B71E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppDuplicateGraphInstanceDelegate_BeginInvoke_mB35B9826D8F0BC135FE7892D04AB160CCFE1E6D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppFreeMemoryDelegate_BeginInvoke_m935E0781C7DA62A9317852BA48E614A794584FD4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppGetColorSpaceListDelegate_BeginInvoke_mE3761587FE349611F68B10FF4F5F9BF7430BBE1F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppGetInput_FloatDelegate_BeginInvoke_m28B158A93172C052C822B8DBFE6C443B3C1175E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppGetInput_IntDelegate_BeginInvoke_mEA70C90B34A581B43AA02A2B8522E9D70453ED00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppGetInput_IntsDelegate_BeginInvoke_m8337EDA88F4DEC2D73ED186D8BD4BE789B430B6E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppGetInput_StringDelegate_BeginInvoke_m2FE0A545E4FDE769EF11314D016E818EC9B07B3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppGetMComboBoxItemsDelegate_BeginInvoke_m8FBAD1567099919EF7BDB68AF8266EF8C4A28944_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppGetMInputsDelegate_BeginInvoke_m28F972E28DA87803E645315D6FF1F46582016A74_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppGetNumInputsDelegate_BeginInvoke_m103456A0CFA6CB4584BF17001D7A6D1B3CD66C85_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppGetNumOutputsDelegate_BeginInvoke_m10E44819C11059D3C342EA972EF23478BCB5E37F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppGetNumberOfDuplicatedGraphsDelegate_BeginInvoke_mD31EA6EE46257DBF5BEE9499F5B8BA889DC5D885_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppGetOldFileIdDelegate_BeginInvoke_m121CEDCB7C15D1A0F95A8E95AD50D6738ACC1021_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppGetOutputChannelStrFromHashDelegate_BeginInvoke_m7255E3797D509B0FC100E3CCA92C1D7D16328EE7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppGetOutputHashDelegate_BeginInvoke_m4C5113EF2DD88AB6EA8684F58843BD47BD3B90B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppGetOutputIdentifierFromHashDelegate_BeginInvoke_mAC753F38D5206628D63157DDACBEBC0A03CEF7DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppGetOutputLabelFromHashDelegate_BeginInvoke_m3F9211E829258ADD5B2DA577F47277FB23E0D7CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppGetOutputsDescDelegate_BeginInvoke_mCC05799DE0C41CDA438E707367DC7F741EE4D281_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppGetPresetDelegate_BeginInvoke_m1080910DAC0DDCC4F125D66B207BF9A76A983765_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppGetTextureDimensionsDelegate_BeginInvoke_m28475D7C70F40FA4B5CE5A03136E1DB1A27CFCBE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppInitSubstanceDelegate_BeginInvoke_m7B33058A355BF7E3165617114A367402F7F84D3D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppIsImageOutputFromHashDelegate_BeginInvoke_m639B264ABC99A556D64FF261B17B727D5DB65006_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppIsRendererBusyDelegate_BeginInvoke_m2DD70D3A79BCA2F438D1C1731F965A4F1C7A445A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppIsValidGraphHandleDelegate_BeginInvoke_m39BF60B2192F6FB883E76597FBBB87B8207D7BAB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppListInputsDelegate_BeginInvoke_m9E5164A6FBD5CF557568E81059C417E870D60768_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppLoadSubstanceDelegate_BeginInvoke_mB4CFE06E2C7BAB13DD2323454A9B21C353A84026_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppModifyTexturePackingDelegate_BeginInvoke_m1F07B875B8F0206775DFAD87B9344435039D46AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppOnGenerateMipMapsChangedDelegate_BeginInvoke_mA1DFC51F3F424A4EEC4550B64CC574BDB3D0B2D1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppQueueSubstanceDelegate_BeginInvoke_mD4E7EED40F44D3EB272224876BABBEC4D8367AF2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppRemoveGraphInstanceDelegate_BeginInvoke_mFE5E6A1E0276927A92A4465C1C6034DA02E5D674_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppRenderSubstancesDelegate_BeginInvoke_m365F0CC668BB57E17E4329829C416A80C1F788E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppSetCallbacksDelegate_BeginInvoke_m46DCD608E99957061C40AE5093A179D350F79CDF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppSetCreateSubstanceGraphCallbackEditorPtrDelegate_BeginInvoke_m8290D20A62E88B936FFF4B3F0F952967737D65A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppSetDirtyOutputsDelegate_BeginInvoke_m05767EBC4F9E5E9FA117329F46A561B358421CB2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppSetInput_FloatDelegate_BeginInvoke_m5F3AA048C46AA275661190ED96D5DBBD2D241B95_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppSetInput_IntDelegate_BeginInvoke_mE7D71C468B6F56D8B65C28B8FC4017557861EAF2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppSetInput_StringDelegate_BeginInvoke_m120E9EE29840813235222DD602CF23C68DF6BF2E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cppSetInput_TextureDelegate_BeginInvoke_m26E169BC4C40BA80DBED414CADCDEE03FDC61CCF_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2416F7F41078C62679B72FA5A0B49306FAA9E46A 
{
public:

public:
};


// System.Object


// Substance.Platform.NativeFunctions
struct  NativeFunctions_t392AC623174D54E9D6C9DD3282ADBD00FE57579B  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
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


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// Substance.Platform.NativeFunctions_BuildTarget
struct  BuildTarget_t7369414451F9355C5B81965075AAEA75F12F53D9 
{
public:
	// System.Int32 Substance.Platform.NativeFunctions_BuildTarget::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BuildTarget_t7369414451F9355C5B81965075AAEA75F12F53D9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Substance.Platform.NativeFunctions_DLLHelpers
struct  DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1  : public RuntimeObject
{
public:

public:
};

struct DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields
{
public:
	// System.IntPtr Substance.Platform.NativeFunctions_DLLHelpers::DllHandle
	intptr_t ___DllHandle_0;
	// System.Object[] Substance.Platform.NativeFunctions_DLLHelpers::mParams
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___mParams_1;

public:
	inline static int32_t get_offset_of_DllHandle_0() { return static_cast<int32_t>(offsetof(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields, ___DllHandle_0)); }
	inline intptr_t get_DllHandle_0() const { return ___DllHandle_0; }
	inline intptr_t* get_address_of_DllHandle_0() { return &___DllHandle_0; }
	inline void set_DllHandle_0(intptr_t value)
	{
		___DllHandle_0 = value;
	}

	inline static int32_t get_offset_of_mParams_1() { return static_cast<int32_t>(offsetof(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields, ___mParams_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_mParams_1() const { return ___mParams_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_mParams_1() { return &___mParams_1; }
	inline void set_mParams_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___mParams_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mParams_1), (void*)value);
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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

// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct  TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Substance.Platform.NativeFunctions_cppApplyPresetDelegate
struct  cppApplyPresetDelegate_t0C78DE7374ADF97A9CA1CED0457E5076622F5DDD  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppDuplicateGraphInstanceDelegate
struct  cppDuplicateGraphInstanceDelegate_t7E7635990B48BFFE1749B10C15C6329FDC482B7E  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppFreeMemoryDelegate
struct  cppFreeMemoryDelegate_t4589A515CC653545394FBA1CB06E4A2C6FFAEAA6  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppGetChannelNamesDelegate
struct  cppGetChannelNamesDelegate_t400B9CD13926147699DD27F112795DB88F8E3498  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppGetColorSpaceListDelegate
struct  cppGetColorSpaceListDelegate_t576494AB09EBEA0F0E016425ABB26A39963A9996  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppGetEngineVersionDelegate
struct  cppGetEngineVersionDelegate_t13B392C6083E0FC31AC156F8C23900F9EA473A2B  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppGetInput_FloatDelegate
struct  cppGetInput_FloatDelegate_t221FB909D975EA7ABD8287CD1031D3B939698D2F  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppGetInput_IntDelegate
struct  cppGetInput_IntDelegate_tE2261BA1BAB1478E9C781D857BEF240C820CD8AC  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppGetInput_IntsDelegate
struct  cppGetInput_IntsDelegate_tCAA6271E332B52940991E6D4666833368ACB6001  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppGetInput_StringDelegate
struct  cppGetInput_StringDelegate_t3E2EF81D92442C633BC245D9D6F34238F9B147F7  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppGetMComboBoxItemsDelegate
struct  cppGetMComboBoxItemsDelegate_tF4F5718C0676EAED730748585BE30FADC488244D  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppGetMInputsDelegate
struct  cppGetMInputsDelegate_t57C71B3DDC2EABBEF222B0EBFBF139A786B4880D  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppGetNumInputsDelegate
struct  cppGetNumInputsDelegate_t13729683C1D24351E98391F54CDACC6C74BAD9A1  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppGetNumOutputsDelegate
struct  cppGetNumOutputsDelegate_tEC58C8B60E851ADD8CCC2B0B5B4DDD4450258D9C  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppGetNumberOfDuplicatedGraphsDelegate
struct  cppGetNumberOfDuplicatedGraphsDelegate_t79DCEF69BCD3A8DA7F6E52779E5188CC7FA6E03A  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppGetOldFileIdDelegate
struct  cppGetOldFileIdDelegate_tFF91C0780AFFFBAC0F8FEEB180BCECCC9276FB0E  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppGetOutputChannelStrFromHashDelegate
struct  cppGetOutputChannelStrFromHashDelegate_t1A4B5521992D275C1404FA35AC39FC903DEC7801  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppGetOutputHashDelegate
struct  cppGetOutputHashDelegate_t35115A8C2400D889E62AB407CEA182F1B58B6C8C  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppGetOutputIdentifierFromHashDelegate
struct  cppGetOutputIdentifierFromHashDelegate_t5B7B89C8B3B9420EE6235BB7EB2DC66840151F76  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppGetOutputLabelFromHashDelegate
struct  cppGetOutputLabelFromHashDelegate_t333F4644517C361C40991DB87E3251DAD5200E20  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppGetOutputsDescDelegate
struct  cppGetOutputsDescDelegate_tC6C5AA6F2ADA418834452A6C5461BE449F297478  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppGetPresetDelegate
struct  cppGetPresetDelegate_t7566CD196CA84BD167A926F59BA9B783F761795E  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppGetTextureDimensionsDelegate
struct  cppGetTextureDimensionsDelegate_tFCCE46F41215E38CA52FE5B6B5540C89131E7793  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppHelloDelegate
struct  cppHelloDelegate_t388111418C0A6DA23263E82AE671690A9C4D66E8  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppInitSubstanceDelegate
struct  cppInitSubstanceDelegate_t5061208036D13164474ABB6301D854AD7C3F27B4  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppIsImageOutputFromHashDelegate
struct  cppIsImageOutputFromHashDelegate_t4A3A006107496BB4BA90C54E99C1E6CB1D3896AA  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppIsRendererBusyDelegate
struct  cppIsRendererBusyDelegate_t2E1EACFB22525453D9D9D8BF37FBC036A0BCA3AF  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppIsValidGraphHandleDelegate
struct  cppIsValidGraphHandleDelegate_t72E8F8144C8E15FD188709DB3A9739908C33E214  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppListAssetsDelegate
struct  cppListAssetsDelegate_tCE8FE55E3B8998DDF5F8C51E8FD4D2B4933CFBF1  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppListInputsDelegate
struct  cppListInputsDelegate_t53CEDDE532A51ABDBA2A02893E487B039F70F31D  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppLoadSubstanceDelegate
struct  cppLoadSubstanceDelegate_t064B5235187E3C0476C02760526C786F19A85CEE  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppModifyTexturePackingDelegate
struct  cppModifyTexturePackingDelegate_tF5AFAA7F80AB9BD8EA76D64F744DA92B36739D00  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppMoveAssetDelegate
struct  cppMoveAssetDelegate_t4F3637A73D8E132238C79BD5154B10A1B2D42A92  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppOnGenerateMipMapsChangedDelegate
struct  cppOnGenerateMipMapsChangedDelegate_tEF82EF11ED512D83B6FF4C53B675E4050788A379  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppProcessQueuedOutputsDelegate
struct  cppProcessQueuedOutputsDelegate_t67859933ABBED533B3E8F71CBA2D9005BC084883  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppQueueSubstanceDelegate
struct  cppQueueSubstanceDelegate_t575E4557E550F01EB0BB8D9F91F89E1EA0F74E82  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppRemoveAssetDelegate
struct  cppRemoveAssetDelegate_tD52C59D0DC1BD5D051DFF11832AEDE9ED69C7146  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppRemoveGraphInstanceDelegate
struct  cppRemoveGraphInstanceDelegate_tDD1B39D6EF74479C5A5938EBF64076DD892F9265  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppRenderSubstancesDelegate
struct  cppRenderSubstancesDelegate_tBDBA34EA30F65643A372E619838AE6743BDD527F  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppSetCallbacksDelegate
struct  cppSetCallbacksDelegate_tBCBFDBD47E4A8D03B4B54FCBFE4B665C640F6DBF  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppSetCreateSubstanceGraphCallbackEditorPtrDelegate
struct  cppSetCreateSubstanceGraphCallbackEditorPtrDelegate_t3B40C905CC291FE9687AD0E4E7B3D5CC1E81E4C7  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppSetDirtyOutputsDelegate
struct  cppSetDirtyOutputsDelegate_t5DB997E31548F8A3B8D5CBE5B0552A01C0D1F4ED  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppSetInput_FloatDelegate
struct  cppSetInput_FloatDelegate_t484FD6CE4EA43F49B3F35A0275D8E9BAEA07144D  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppSetInput_IntDelegate
struct  cppSetInput_IntDelegate_tA863B8C05494F48272DA2D4C084B51F23A9BA794  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppSetInput_StringDelegate
struct  cppSetInput_StringDelegate_t85B9D05E0F89A925D39FA6DD400EB2A32746A22B  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppSetInput_TextureDelegate
struct  cppSetInput_TextureDelegate_t3E6137FDADDC272FEE49BBD0A4779A0D69034A82  : public MulticastDelegate_t
{
public:

public:
};


// Substance.Platform.NativeFunctions_cppShutdownSubstanceDelegate
struct  cppShutdownSubstanceDelegate_t8C97F4283C5BFAC2186EF838967C7A7F44892109  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_m6F70613DBB973872E27DFD9A42F7653C55337A64_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** ___array0, int32_t ___newSize1, const RuntimeMethod* method);

// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Delegate Substance.Platform.NativeFunctions/DLLHelpers::GetFunction(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96 (String_t* ___funcname0, Type_t * ___t1, const RuntimeMethod* method);
// System.IntPtr Substance.Platform.NativeFunctions/cppHelloDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppHelloDelegate_Invoke_m73534897AD7BB1542B77CCBB52A9DFA407467887 (cppHelloDelegate_t388111418C0A6DA23263E82AE671690A9C4D66E8 * __this, const RuntimeMethod* method);
// System.Void Substance.Platform.NativeFunctions/DLLHelpers::LoadDLL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLLHelpers_LoadDLL_mE69BD704DAC35F9063529104E83FE9D981691B74 (String_t* ___dataPath0, const RuntimeMethod* method);
// System.Void Substance.Platform.NativeFunctions/cppInitSubstanceDelegate::Invoke(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppInitSubstanceDelegate_Invoke_m226CA7ED25F9BD33FBB7766592157FD3B0E3D66D (cppInitSubstanceDelegate_t5061208036D13164474ABB6301D854AD7C3F27B4 * __this, String_t* ___applicationDataPath0, int32_t ___pTextureClampExposant1, const RuntimeMethod* method);
// System.Void Substance.Platform.NativeFunctions/cppSetCallbacksDelegate::Invoke(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppSetCallbacksDelegate_Invoke_m39CF565D5331C66C9F25EC6AF55EFF7B6C77BA6A (cppSetCallbacksDelegate_tBCBFDBD47E4A8D03B4B54FCBFE4B665C640F6DBF * __this, intptr_t ___log0, intptr_t ___texture1, intptr_t ___numerical2, intptr_t ___graphInitialized3, const RuntimeMethod* method);
// System.Boolean Substance.Platform.NativeFunctions/cppIsValidGraphHandleDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool cppIsValidGraphHandleDelegate_Invoke_m058FC65A90C729D4DFFBF1C56666426381938DCD (cppIsValidGraphHandleDelegate_t72E8F8144C8E15FD188709DB3A9739908C33E214 * __this, intptr_t ___pGraphHandle0, const RuntimeMethod* method);
// System.Void Substance.Platform.NativeFunctions/cppApplyPresetDelegate::Invoke(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppApplyPresetDelegate_Invoke_mB8E57A174A670F7C0356D4511F02830F586BD78B (cppApplyPresetDelegate_t0C78DE7374ADF97A9CA1CED0457E5076622F5DDD * __this, intptr_t ___graphHandle0, String_t* ___presetStr1, const RuntimeMethod* method);
// System.IntPtr Substance.Platform.NativeFunctions/cppGetPresetDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetPresetDelegate_Invoke_m11BB0FA39FFA1F5B29A064EA0D000BA3A19D6219 (cppGetPresetDelegate_t7566CD196CA84BD167A926F59BA9B783F761795E * __this, intptr_t ___graphHandle0, const RuntimeMethod* method);
// System.IntPtr Substance.Platform.NativeFunctions/cppListAssetsDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppListAssetsDelegate_Invoke_mC77922D1E97000F071C6A7A230D9EE242CFC4B3A (cppListAssetsDelegate_tCE8FE55E3B8998DDF5F8C51E8FD4D2B4933CFBF1 * __this, const RuntimeMethod* method);
// System.Int32 Substance.Platform.NativeFunctions/cppGetNumOutputsDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppGetNumOutputsDelegate_Invoke_m32646953593D656B6A31FFE326ADB9171E733033 (cppGetNumOutputsDelegate_tEC58C8B60E851ADD8CCC2B0B5B4DDD4450258D9C * __this, intptr_t ___graphHandle0, const RuntimeMethod* method);
// System.IntPtr Substance.Platform.NativeFunctions/cppGetColorSpaceListDelegate::Invoke(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetColorSpaceListDelegate_Invoke_m8921E191DC9A859099B1A1B3CA0DF11D86AE401C (cppGetColorSpaceListDelegate_t576494AB09EBEA0F0E016425ABB26A39963A9996 * __this, intptr_t ___graphHandle0, int32_t ___numOutputs1, const RuntimeMethod* method);
// System.Void Substance.Platform.NativeFunctions/cppFreeMemoryDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppFreeMemoryDelegate_Invoke_m1D7502E18108C8403359765FFDA1C7EFE2C3F719 (cppFreeMemoryDelegate_t4589A515CC653545394FBA1CB06E4A2C6FFAEAA6 * __this, intptr_t ___pointer0, const RuntimeMethod* method);
// System.Void Substance.Platform.NativeFunctions/cppSetCreateSubstanceGraphCallbackEditorPtrDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppSetCreateSubstanceGraphCallbackEditorPtrDelegate_Invoke_m7657EC0B31BC6897EC1E353D5DB9E4D4ABF21B8D (cppSetCreateSubstanceGraphCallbackEditorPtrDelegate_t3B40C905CC291FE9687AD0E4E7B3D5CC1E81E4C7 * __this, intptr_t ___fp0, const RuntimeMethod* method);
// System.IntPtr Substance.Platform.NativeFunctions/cppGetMInputsDelegate::Invoke(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetMInputsDelegate_Invoke_m8C8E35BDE756B5D96E34FAD5802BB2E29BE04C17 (cppGetMInputsDelegate_t57C71B3DDC2EABBEF222B0EBFBF139A786B4880D * __this, intptr_t ___graphHandle0, int32_t ___pNumInputs1, const RuntimeMethod* method);
// System.IntPtr Substance.Platform.NativeFunctions/cppGetOutputsDescDelegate::Invoke(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetOutputsDescDelegate_Invoke_m49F63451C974CA494D4225BE4389BDE4A98B65EB (cppGetOutputsDescDelegate_tC6C5AA6F2ADA418834452A6C5461BE449F297478 * __this, intptr_t ___graphHandle0, int32_t* ___pNumOutputs1, const RuntimeMethod* method);
// System.Int32 Substance.Platform.NativeFunctions/cppShutdownSubstanceDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppShutdownSubstanceDelegate_Invoke_m122F11C86D099451997656FFE198F16A05597953 (cppShutdownSubstanceDelegate_t8C97F4283C5BFAC2186EF838967C7A7F44892109 * __this, const RuntimeMethod* method);
// System.Void Substance.Platform.NativeFunctions/DLLHelpers::UnloadDLL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLLHelpers_UnloadDLL_mF470A25B98D913F2A0AF3CEBA93CD284B28BCD41 (const RuntimeMethod* method);
// System.Int32 Substance.Platform.NativeFunctions/cppRemoveAssetDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppRemoveAssetDelegate_Invoke_m6D0062B8A69ED07E0E9599D24D0C6A07A77F2CCD (cppRemoveAssetDelegate_tD52C59D0DC1BD5D051DFF11832AEDE9ED69C7146 * __this, String_t* ___pAssetPath0, const RuntimeMethod* method);
// System.Int32 Substance.Platform.NativeFunctions/cppMoveAssetDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppMoveAssetDelegate_Invoke_mAE00B82ACA564C2B4E64DE41363EC1528B1D427C (cppMoveAssetDelegate_t4F3637A73D8E132238C79BD5154B10A1B2D42A92 * __this, String_t* ___pFromAssetPath0, String_t* ___pToAssetPath1, const RuntimeMethod* method);
// System.Int32 Substance.Platform.NativeFunctions/cppLoadSubstanceDelegate::Invoke(System.String,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.UInt32[],System.String[],System.String[],System.Int32[],System.Int32[],System.UInt32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppLoadSubstanceDelegate_Invoke_mDCE857F3555C6FE6EBC294BCF7FDD9D29E59F99C (cppLoadSubstanceDelegate_t064B5235187E3C0476C02760526C786F19A85CEE * __this, String_t* ___pAssetPath0, intptr_t ___array1, int32_t ___size2, intptr_t ___assetCtx3, intptr_t ___substanceObject4, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___graphIndices5, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___graphPrototypeNames6, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___graphLabels7, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___graphFormats8, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___normalFormats9, uint32_t ___numGraphIndices10, int32_t ___rawOverride11, int32_t ___pPipeline12, const RuntimeMethod* method);
// System.Void Substance.Platform.NativeFunctions/cppQueueSubstanceDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppQueueSubstanceDelegate_Invoke_m7881711BE6AFCE0A70E76C4E71CBFE2AF9708454 (cppQueueSubstanceDelegate_t575E4557E550F01EB0BB8D9F91F89E1EA0F74E82 * __this, intptr_t ___graphHandle0, const RuntimeMethod* method);
// System.UInt32 Substance.Platform.NativeFunctions/cppRenderSubstancesDelegate::Invoke(System.Boolean,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t cppRenderSubstancesDelegate_Invoke_mA27D1CBF45E26CCC17CED11D29B43EB2E7BB2E5E (cppRenderSubstancesDelegate_tBDBA34EA30F65643A372E619838AE6743BDD527F * __this, bool ___bAsync0, intptr_t ___preComputeCallback1, const RuntimeMethod* method);
// System.Boolean Substance.Platform.NativeFunctions/cppIsRendererBusyDelegate::Invoke(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool cppIsRendererBusyDelegate_Invoke_mAA4D186D55AA984865E5F910CBC01D9B91D4263B (cppIsRendererBusyDelegate_t2E1EACFB22525453D9D9D8BF37FBC036A0BCA3AF * __this, uint32_t ___runid0, const RuntimeMethod* method);
// System.Void Substance.Platform.NativeFunctions/cppSetDirtyOutputsDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppSetDirtyOutputsDelegate_Invoke_m2C46976DD166ED7091F27291B3F37C78F4B103FB (cppSetDirtyOutputsDelegate_t5DB997E31548F8A3B8D5CBE5B0552A01C0D1F4ED * __this, intptr_t ___graphHandle0, const RuntimeMethod* method);
// System.Int32 Substance.Platform.NativeFunctions/cppGetNumInputsDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppGetNumInputsDelegate_Invoke_m7EBEDC3D9BBC6479C6156E5AB81464B598471DF6 (cppGetNumInputsDelegate_t13729683C1D24351E98391F54CDACC6C74BAD9A1 * __this, intptr_t ___graphHandle0, const RuntimeMethod* method);
// System.IntPtr Substance.Platform.NativeFunctions/cppGetInput_IntsDelegate::Invoke(System.IntPtr,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetInput_IntsDelegate_Invoke_mDCD7185EA506AFF23EF3F1402450D47250C7E236 (cppGetInput_IntsDelegate_tCAA6271E332B52940991E6D4666833368ACB6001 * __this, intptr_t ___graphHandle0, String_t* ___pFieldName1, int32_t ___pNumInputs2, const RuntimeMethod* method);
// System.IntPtr Substance.Platform.NativeFunctions/cppGetMComboBoxItemsDelegate::Invoke(System.IntPtr,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetMComboBoxItemsDelegate_Invoke_m6C2096EB88839B128581651726AE4D23B418F2FE (cppGetMComboBoxItemsDelegate_tF4F5718C0676EAED730748585BE30FADC488244D * __this, intptr_t ___graphHandle0, String_t* ___pIdentifier1, int32_t* ___pNumValues2, const RuntimeMethod* method);
// System.Void Substance.Platform.NativeFunctions/cppGetInput_FloatDelegate::Invoke(System.IntPtr,System.String,System.Single[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetInput_FloatDelegate_Invoke_m72DACAA7CDEDD88A93FE250A551B2CF303E94C80 (cppGetInput_FloatDelegate_t221FB909D975EA7ABD8287CD1031D3B939698D2F * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values2, uint32_t ___numValues3, const RuntimeMethod* method);
// System.Int32 Substance.Platform.NativeFunctions/cppSetInput_FloatDelegate::Invoke(System.IntPtr,System.String,System.Single[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppSetInput_FloatDelegate_Invoke_mA33885B89DA4EC60A791F8DB8D22AFAC75CB5641 (cppSetInput_FloatDelegate_t484FD6CE4EA43F49B3F35A0275D8E9BAEA07144D * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values2, uint32_t ___numValues3, const RuntimeMethod* method);
// System.Void Substance.Platform.NativeFunctions/cppGetInput_IntDelegate::Invoke(System.IntPtr,System.String,System.Int32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetInput_IntDelegate_Invoke_mF82C112EA99827DA7BE01EC7E8002F7B04E8F6F3 (cppGetInput_IntDelegate_tE2261BA1BAB1478E9C781D857BEF240C820CD8AC * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___values2, uint32_t ___numValues3, const RuntimeMethod* method);
// System.Void Substance.Platform.NativeFunctions/cppSetInput_IntDelegate::Invoke(System.IntPtr,System.String,System.Int32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppSetInput_IntDelegate_Invoke_mF5423EC645F29713B5206D525456542FCB5A6C25 (cppSetInput_IntDelegate_tA863B8C05494F48272DA2D4C084B51F23A9BA794 * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___values2, uint32_t ___numValues3, const RuntimeMethod* method);
// System.Int32 Substance.Platform.NativeFunctions/cppSetInput_StringDelegate::Invoke(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppSetInput_StringDelegate_Invoke_mCAF71C456B4572A72E495C8B8637C4476F03D587 (cppSetInput_StringDelegate_t85B9D05E0F89A925D39FA6DD400EB2A32746A22B * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, String_t* ___value2, const RuntimeMethod* method);
// System.IntPtr Substance.Platform.NativeFunctions/cppGetInput_StringDelegate::Invoke(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetInput_StringDelegate_Invoke_mAA2F00244E0C7A705413CE476FB616B5BFFE28BB (cppGetInput_StringDelegate_t3E2EF81D92442C633BC245D9D6F34238F9B147F7 * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, const RuntimeMethod* method);
// System.Int32 Substance.Platform.NativeFunctions/cppSetInput_TextureDelegate::Invoke(System.IntPtr,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppSetInput_TextureDelegate_Invoke_m0DC3736E7B9B486DFA2FF19D8F5102D134ABF12D (cppSetInput_TextureDelegate_t3E6137FDADDC272FEE49BBD0A4779A0D69034A82 * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, int32_t ___format2, int32_t ___mipCount3, int32_t ___width4, int32_t ___height5, intptr_t ___pixels6, const RuntimeMethod* method);
// System.Int32 Substance.Platform.NativeFunctions/cppProcessQueuedOutputsDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppProcessQueuedOutputsDelegate_Invoke_m15516A052734389A6238791549FEC2C5730F4480 (cppProcessQueuedOutputsDelegate_t67859933ABBED533B3E8F71CBA2D9005BC084883 * __this, const RuntimeMethod* method);
// System.IntPtr Substance.Platform.NativeFunctions/cppGetOutputLabelFromHashDelegate::Invoke(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetOutputLabelFromHashDelegate_Invoke_m0E5C809804AAEDABB89A044261861EC2AEACE83C (cppGetOutputLabelFromHashDelegate_t333F4644517C361C40991DB87E3251DAD5200E20 * __this, String_t* ___pAssetPath0, uint32_t ___outputHash1, const RuntimeMethod* method);
// System.IntPtr Substance.Platform.NativeFunctions/cppGetOutputIdentifierFromHashDelegate::Invoke(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetOutputIdentifierFromHashDelegate_Invoke_m7C6EDFEEC4C876F14289A9FF9302A028B340054B (cppGetOutputIdentifierFromHashDelegate_t5B7B89C8B3B9420EE6235BB7EB2DC66840151F76 * __this, String_t* ___pAssetPath0, uint32_t ___outputHash1, const RuntimeMethod* method);
// System.Boolean Substance.Platform.NativeFunctions/cppIsImageOutputFromHashDelegate::Invoke(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool cppIsImageOutputFromHashDelegate_Invoke_mFE60F253BFB31DA499C0EDFCD8F79184A02A61C2 (cppIsImageOutputFromHashDelegate_t4A3A006107496BB4BA90C54E99C1E6CB1D3896AA * __this, String_t* ___pAssetPath0, uint32_t ___outputHash1, const RuntimeMethod* method);
// System.IntPtr Substance.Platform.NativeFunctions/cppGetOutputChannelStrFromHashDelegate::Invoke(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetOutputChannelStrFromHashDelegate_Invoke_m6678AA819236E63F982A6B01B9325B35DD2373EF (cppGetOutputChannelStrFromHashDelegate_t1A4B5521992D275C1404FA35AC39FC903DEC7801 * __this, String_t* ___pAssetPath0, uint32_t ___outputHash1, const RuntimeMethod* method);
// System.Void Substance.Platform.NativeFunctions/cppOnGenerateMipMapsChangedDelegate::Invoke(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppOnGenerateMipMapsChangedDelegate_Invoke_m3BA28D1FD97DE354CFFDCD793ED82BFB98D1956A (cppOnGenerateMipMapsChangedDelegate_tEF82EF11ED512D83B6FF4C53B675E4050788A379 * __this, intptr_t ___graphHandle0, bool ___bGenerateMipMaps1, const RuntimeMethod* method);
// System.Void Substance.Platform.NativeFunctions/cppModifyTexturePackingDelegate::Invoke(System.IntPtr,System.String,System.Int32[],System.String,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppModifyTexturePackingDelegate_Invoke_m167D0258DF3C9C5BDC0827A4D3BF206135F3965B (cppModifyTexturePackingDelegate_tF5AFAA7F80AB9BD8EA76D64F744DA92B36739D00 * __this, intptr_t ___graphHandle0, String_t* ___pSourceNames1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___pSourceComponents2, String_t* ___pTargetName3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___pTargetComponents4, int32_t ___pNumComponents5, const RuntimeMethod* method);
// System.Void Substance.Platform.NativeFunctions/cppGetTextureDimensionsDelegate::Invoke(System.IntPtr,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetTextureDimensionsDelegate_Invoke_mD3C920C662DB51022C74A5DE5ADB0B7A8EEA6020 (cppGetTextureDimensionsDelegate_tFCCE46F41215E38CA52FE5B6B5540C89131E7793 * __this, intptr_t ___graphHandle0, int32_t* ___pWidth1, int32_t* ___pHeight2, const RuntimeMethod* method);
// System.IntPtr Substance.Platform.NativeFunctions/cppDuplicateGraphInstanceDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppDuplicateGraphInstanceDelegate_Invoke_m2E0604EAAAE5989CA62F26CAE795051C30306D2F (cppDuplicateGraphInstanceDelegate_t7E7635990B48BFFE1749B10C15C6329FDC482B7E * __this, intptr_t ___graphHandle0, const RuntimeMethod* method);
// System.Void Substance.Platform.NativeFunctions/cppRemoveGraphInstanceDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppRemoveGraphInstanceDelegate_Invoke_m247F0F5F55F682BD20AC304525951CE2E67436AA (cppRemoveGraphInstanceDelegate_tDD1B39D6EF74479C5A5938EBF64076DD892F9265 * __this, intptr_t ___graphHandle0, const RuntimeMethod* method);
// System.Int32 Substance.Platform.NativeFunctions/cppListInputsDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppListInputsDelegate_Invoke_m0D39FA850E5354C968FC0E4BE56B2AB3B76B7720 (cppListInputsDelegate_t53CEDDE532A51ABDBA2A02893E487B039F70F31D * __this, intptr_t ___graphHandle0, const RuntimeMethod* method);
// System.IntPtr Substance.Platform.NativeFunctions/cppGetChannelNamesDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetChannelNamesDelegate_Invoke_mE3B40AC757FAC0FDDAF397088455B0169BF4B977 (cppGetChannelNamesDelegate_t400B9CD13926147699DD27F112795DB88F8E3498 * __this, const RuntimeMethod* method);
// System.UInt32 Substance.Platform.NativeFunctions/cppGetOutputHashDelegate::Invoke(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t cppGetOutputHashDelegate_Invoke_mA5E06916FA1305322ADF360FECCE96FA046FF5BD (cppGetOutputHashDelegate_t35115A8C2400D889E62AB407CEA182F1B58B6C8C * __this, intptr_t ___graphHandle0, int32_t ___pOutputIndex1, const RuntimeMethod* method);
// System.IntPtr Substance.Platform.NativeFunctions/cppGetEngineVersionDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetEngineVersionDelegate_Invoke_m751EDDFC1E6D6D49DC3DACC43D9B61A4146553D4 (cppGetEngineVersionDelegate_t13B392C6083E0FC31AC156F8C23900F9EA473A2B * __this, const RuntimeMethod* method);
// System.Int32 Substance.Platform.NativeFunctions/cppGetNumberOfDuplicatedGraphsDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppGetNumberOfDuplicatedGraphsDelegate_Invoke_m145927C729F6C2B080BB4C9293C6798E794636F0 (cppGetNumberOfDuplicatedGraphsDelegate_t79DCEF69BCD3A8DA7F6E52779E5188CC7FA6E03A * __this, intptr_t ___graphHandle0, const RuntimeMethod* method);
// System.Int32 Substance.Platform.NativeFunctions/cppGetOldFileIdDelegate::Invoke(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppGetOldFileIdDelegate_Invoke_mE23AB779A72348A019EBF2446937A5380CC65E4E (cppGetOldFileIdDelegate_tFF91C0780AFFFBAC0F8FEEB180BCECCC9276FB0E * __this, String_t* ___pCharArray0, int32_t ___pTypeConstant1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
inline void Array_Resize_TisRuntimeObject_m6F70613DBB973872E27DFD9A42F7653C55337A64 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_m6F70613DBB973872E27DFD9A42F7653C55337A64_gshared)(___array0, ___newSize1, method);
}
// System.Boolean Substance.Platform.NativeFunctions/DLLHelpers::IsWindows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DLLHelpers_IsWindows_m10F3B4C3B65F72876ECE7540B2F5CA176C3A3933 (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.IntPtr Substance.Platform.NativeFunctions/DLLHelpers::LoadLibrary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DLLHelpers_LoadLibrary_m48F6E1B5DAF1FEBE1E1F064FB448F452CE5310D2 (String_t* ___filename0, const RuntimeMethod* method);
// System.Boolean Substance.Platform.NativeFunctions/DLLHelpers::IsMac()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DLLHelpers_IsMac_m3206ED2DEDE681E1283077CE17812F7DE52F8CDF (const RuntimeMethod* method);
// System.IntPtr Substance.Platform.NativeFunctions/DLLHelpers::dlopen(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DLLHelpers_dlopen_m1D8A1C48A193F733D43B2C15E133E94B008F54E6 (String_t* ___filename0, int32_t ___flags1, const RuntimeMethod* method);
// System.Boolean Substance.Platform.NativeFunctions/DLLHelpers::IsLinux()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DLLHelpers_IsLinux_mDEC21DA751A17AFA3124984CA218D1BF9509FCFA (const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Boolean Substance.Platform.NativeFunctions/DLLHelpers::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DLLHelpers_FreeLibrary_mB59713430F74AA6BC896A1C1A3B46FB2089AD211 (intptr_t ___hModule0, const RuntimeMethod* method);
// System.Int32 Substance.Platform.NativeFunctions/DLLHelpers::dlclose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DLLHelpers_dlclose_m080A3106CCAD4450776BF9A0F577F86B6DE627B9 (intptr_t ___handle0, const RuntimeMethod* method);
// System.IntPtr Substance.Platform.NativeFunctions/DLLHelpers::GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DLLHelpers_GetProcAddress_m8791A3BD2232AE3873C5FA87FC4CD37A20C337B4 (intptr_t ___hModule0, String_t* ___procname1, const RuntimeMethod* method);
// System.IntPtr Substance.Platform.NativeFunctions/DLLHelpers::dlsym(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DLLHelpers_dlsym_m30D8BA31F2E3A687FF1EB8EA534CC8781FE42AD8 (intptr_t ___handle0, String_t* ___symbol1, const RuntimeMethod* method);
// System.Delegate System.Runtime.InteropServices.Marshal::GetDelegateForFunctionPointer(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Marshal_GetDelegateForFunctionPointer_mF849209E9D1A0B4735D48FE4CD2E15DEDEB92EC8 (intptr_t ___ptr0, Type_t * ___t1, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL LoadLibrary(Il2CppChar*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetProcAddress(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FreeLibrary(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL dlopen(char*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL dlsym(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL dlerror();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL dlclose(intptr_t);
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
// Substance.Platform.NativeFunctions_BuildTarget Substance.Platform.NativeFunctions::GetBuildTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFunctions_GetBuildTarget_mF9D7CA07119C640C6D65281B438C096D85B41928 (const RuntimeMethod* method)
{
	{
		// buildTarget = BuildTarget.StandAlone;
		// return buildTarget;
		return (int32_t)(1);
	}
}
// System.String Substance.Platform.NativeFunctions::GetBuildTargetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeFunctions_GetBuildTargetString_m2C4A923F9DEA2C3729E5922CCAF1D515739F45E9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_GetBuildTargetString_m2C4A923F9DEA2C3729E5922CCAF1D515739F45E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buildTarget = "StandAlone";
		// return buildTarget;
		return _stringLiteral5BB74AFD2F95CC72E2776E67F774C6D7B2842ECB;
	}
}
// System.Boolean Substance.Platform.NativeFunctions::IsMobile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeFunctions_IsMobile_mDE975F5322B1711194D1EFF090A15CD5B069375C (const RuntimeMethod* method)
{
	{
		// bool bMobile = false;
		// return bMobile;
		return (bool)0;
	}
}
// UnityEngine.TextureFormat Substance.Platform.NativeFunctions::GetMobileTextureFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFunctions_GetMobileTextureFormat_m68DCD475B7EBC84B9D5B89EA5FEF0E578CE3A8CF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_GetMobileTextureFormat_m68DCD475B7EBC84B9D5B89EA5FEF0E578CE3A8CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TextureFormat format = TextureFormat.RGBA32;
		// Debug.LogError("The current build target is NOT for a modbile platform!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral4974AF465ABF9744179F55BDF50CA097A4E5656F, /*hidden argument*/NULL);
		// return format;
		return (int32_t)(4);
	}
}
// System.IntPtr Substance.Platform.NativeFunctions::cppHello()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeFunctions_cppHello_m14431448CA8B405CC6FEDDA9EB839CE7140F1466 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppHello_m14431448CA8B405CC6FEDDA9EB839CE7140F1466_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppHello_m14431448CA8B405CC6FEDDA9EB839CE7140F1466_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}

IL_0022:
	{
		// cppHelloDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppHelloDelegate)) as cppHelloDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppHelloDelegate_t388111418C0A6DA23263E82AE671690A9C4D66E8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (IntPtr)function.Invoke();
		NullCheck(((cppHelloDelegate_t388111418C0A6DA23263E82AE671690A9C4D66E8 *)IsInstSealed((RuntimeObject*)L_7, cppHelloDelegate_t388111418C0A6DA23263E82AE671690A9C4D66E8_il2cpp_TypeInfo_var)));
		intptr_t L_8 = cppHelloDelegate_Invoke_m73534897AD7BB1542B77CCBB52A9DFA407467887(((cppHelloDelegate_t388111418C0A6DA23263E82AE671690A9C4D66E8 *)IsInstSealed((RuntimeObject*)L_7, cppHelloDelegate_t388111418C0A6DA23263E82AE671690A9C4D66E8_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return (intptr_t)L_8;
	}
}
// System.Void Substance.Platform.NativeFunctions::cppInitSubstance(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFunctions_cppInitSubstance_m3F705CA737A73D30898E9E4A722F4F5C7ED5242A (String_t* ___applicationDataPath0, int32_t ___pTextureClampExposant1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppInitSubstance_m3F705CA737A73D30898E9E4A722F4F5C7ED5242A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppInitSubstance_m3F705CA737A73D30898E9E4A722F4F5C7ED5242A_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// DLLHelpers.LoadDLL(applicationDataPath);
		String_t* L_2 = ___applicationDataPath0;
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		DLLHelpers_LoadDLL_mE69BD704DAC35F9063529104E83FE9D981691B74(L_2, /*hidden argument*/NULL);
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		intptr_t L_3 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_4 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// return;
		return;
	}

IL_0023:
	{
		// cppInitSubstanceDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppInitSubstanceDelegate)) as cppInitSubstanceDelegate;
		String_t* L_5 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (cppInitSubstanceDelegate_t5061208036D13164474ABB6301D854AD7C3F27B4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_8 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_5, L_7, /*hidden argument*/NULL);
		// function.Invoke(applicationDataPath, pTextureClampExposant);
		String_t* L_9 = ___applicationDataPath0;
		int32_t L_10 = ___pTextureClampExposant1;
		NullCheck(((cppInitSubstanceDelegate_t5061208036D13164474ABB6301D854AD7C3F27B4 *)IsInstSealed((RuntimeObject*)L_8, cppInitSubstanceDelegate_t5061208036D13164474ABB6301D854AD7C3F27B4_il2cpp_TypeInfo_var)));
		cppInitSubstanceDelegate_Invoke_m226CA7ED25F9BD33FBB7766592157FD3B0E3D66D(((cppInitSubstanceDelegate_t5061208036D13164474ABB6301D854AD7C3F27B4 *)IsInstSealed((RuntimeObject*)L_8, cppInitSubstanceDelegate_t5061208036D13164474ABB6301D854AD7C3F27B4_il2cpp_TypeInfo_var)), L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Substance.Platform.NativeFunctions::cppSetCallbacks(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFunctions_cppSetCallbacks_m31788E27DDFE50D2212B621B1DFE9CFDDB348EA4 (intptr_t ___log0, intptr_t ___texture1, intptr_t ___numerical2, intptr_t ___graphInitialized3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppSetCallbacks_m31788E27DDFE50D2212B621B1DFE9CFDDB348EA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppSetCallbacks_m31788E27DDFE50D2212B621B1DFE9CFDDB348EA4_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// cppSetCallbacksDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppSetCallbacksDelegate)) as cppSetCallbacksDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppSetCallbacksDelegate_tBCBFDBD47E4A8D03B4B54FCBFE4B665C640F6DBF_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// function.Invoke(log, texture, numerical, graphInitialized);
		intptr_t L_8 = ___log0;
		intptr_t L_9 = ___texture1;
		intptr_t L_10 = ___numerical2;
		intptr_t L_11 = ___graphInitialized3;
		NullCheck(((cppSetCallbacksDelegate_tBCBFDBD47E4A8D03B4B54FCBFE4B665C640F6DBF *)IsInstSealed((RuntimeObject*)L_7, cppSetCallbacksDelegate_tBCBFDBD47E4A8D03B4B54FCBFE4B665C640F6DBF_il2cpp_TypeInfo_var)));
		cppSetCallbacksDelegate_Invoke_m39CF565D5331C66C9F25EC6AF55EFF7B6C77BA6A(((cppSetCallbacksDelegate_tBCBFDBD47E4A8D03B4B54FCBFE4B665C640F6DBF *)IsInstSealed((RuntimeObject*)L_7, cppSetCallbacksDelegate_tBCBFDBD47E4A8D03B4B54FCBFE4B665C640F6DBF_il2cpp_TypeInfo_var)), (intptr_t)L_8, (intptr_t)L_9, (intptr_t)L_10, (intptr_t)L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Substance.Platform.NativeFunctions::cppIsValidGraphHandle(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeFunctions_cppIsValidGraphHandle_m522A0C74F84FBA5104599F856AF028639DE8C139 (intptr_t ___pGraphHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppIsValidGraphHandle_m522A0C74F84FBA5104599F856AF028639DE8C139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppIsValidGraphHandle_m522A0C74F84FBA5104599F856AF028639DE8C139_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001e:
	{
		// cppIsValidGraphHandleDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppIsValidGraphHandleDelegate)) as cppIsValidGraphHandleDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppIsValidGraphHandleDelegate_t72E8F8144C8E15FD188709DB3A9739908C33E214_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return function.Invoke(pGraphHandle);
		intptr_t L_8 = ___pGraphHandle0;
		NullCheck(((cppIsValidGraphHandleDelegate_t72E8F8144C8E15FD188709DB3A9739908C33E214 *)IsInstSealed((RuntimeObject*)L_7, cppIsValidGraphHandleDelegate_t72E8F8144C8E15FD188709DB3A9739908C33E214_il2cpp_TypeInfo_var)));
		bool L_9 = cppIsValidGraphHandleDelegate_Invoke_m058FC65A90C729D4DFFBF1C56666426381938DCD(((cppIsValidGraphHandleDelegate_t72E8F8144C8E15FD188709DB3A9739908C33E214 *)IsInstSealed((RuntimeObject*)L_7, cppIsValidGraphHandleDelegate_t72E8F8144C8E15FD188709DB3A9739908C33E214_il2cpp_TypeInfo_var)), (intptr_t)L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void Substance.Platform.NativeFunctions::cppApplyPreset(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFunctions_cppApplyPreset_mCF8798AFD3276B8889A0E36DC3CE495425DDFA96 (intptr_t ___graphHandle0, String_t* ___presetStr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppApplyPreset_mCF8798AFD3276B8889A0E36DC3CE495425DDFA96_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppApplyPreset_mCF8798AFD3276B8889A0E36DC3CE495425DDFA96_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// cppApplyPresetDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppApplyPresetDelegate)) as cppApplyPresetDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppApplyPresetDelegate_t0C78DE7374ADF97A9CA1CED0457E5076622F5DDD_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// function.Invoke(graphHandle, presetStr);
		intptr_t L_8 = ___graphHandle0;
		String_t* L_9 = ___presetStr1;
		NullCheck(((cppApplyPresetDelegate_t0C78DE7374ADF97A9CA1CED0457E5076622F5DDD *)IsInstSealed((RuntimeObject*)L_7, cppApplyPresetDelegate_t0C78DE7374ADF97A9CA1CED0457E5076622F5DDD_il2cpp_TypeInfo_var)));
		cppApplyPresetDelegate_Invoke_mB8E57A174A670F7C0356D4511F02830F586BD78B(((cppApplyPresetDelegate_t0C78DE7374ADF97A9CA1CED0457E5076622F5DDD *)IsInstSealed((RuntimeObject*)L_7, cppApplyPresetDelegate_t0C78DE7374ADF97A9CA1CED0457E5076622F5DDD_il2cpp_TypeInfo_var)), (intptr_t)L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr Substance.Platform.NativeFunctions::cppGetPreset(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeFunctions_cppGetPreset_mFFFA4C4CB8F60424798CCC917001FF48E1BB6123 (intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppGetPreset_mFFFA4C4CB8F60424798CCC917001FF48E1BB6123_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppGetPreset_mFFFA4C4CB8F60424798CCC917001FF48E1BB6123_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}

IL_0022:
	{
		// cppGetPresetDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppGetPresetDelegate)) as cppGetPresetDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppGetPresetDelegate_t7566CD196CA84BD167A926F59BA9B783F761795E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (IntPtr)function.Invoke(graphHandle);
		intptr_t L_8 = ___graphHandle0;
		NullCheck(((cppGetPresetDelegate_t7566CD196CA84BD167A926F59BA9B783F761795E *)IsInstSealed((RuntimeObject*)L_7, cppGetPresetDelegate_t7566CD196CA84BD167A926F59BA9B783F761795E_il2cpp_TypeInfo_var)));
		intptr_t L_9 = cppGetPresetDelegate_Invoke_m11BB0FA39FFA1F5B29A064EA0D000BA3A19D6219(((cppGetPresetDelegate_t7566CD196CA84BD167A926F59BA9B783F761795E *)IsInstSealed((RuntimeObject*)L_7, cppGetPresetDelegate_t7566CD196CA84BD167A926F59BA9B783F761795E_il2cpp_TypeInfo_var)), (intptr_t)L_8, /*hidden argument*/NULL);
		return (intptr_t)L_9;
	}
}
// System.IntPtr Substance.Platform.NativeFunctions::cppListAssets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeFunctions_cppListAssets_m99284565A94D6D44AB793AA6792DDD9E1BDB86D1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppListAssets_m99284565A94D6D44AB793AA6792DDD9E1BDB86D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppListAssets_m99284565A94D6D44AB793AA6792DDD9E1BDB86D1_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}

IL_0022:
	{
		// cppListAssetsDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppListAssetsDelegate)) as cppListAssetsDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppListAssetsDelegate_tCE8FE55E3B8998DDF5F8C51E8FD4D2B4933CFBF1_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (IntPtr)function.Invoke();
		NullCheck(((cppListAssetsDelegate_tCE8FE55E3B8998DDF5F8C51E8FD4D2B4933CFBF1 *)IsInstSealed((RuntimeObject*)L_7, cppListAssetsDelegate_tCE8FE55E3B8998DDF5F8C51E8FD4D2B4933CFBF1_il2cpp_TypeInfo_var)));
		intptr_t L_8 = cppListAssetsDelegate_Invoke_mC77922D1E97000F071C6A7A230D9EE242CFC4B3A(((cppListAssetsDelegate_tCE8FE55E3B8998DDF5F8C51E8FD4D2B4933CFBF1 *)IsInstSealed((RuntimeObject*)L_7, cppListAssetsDelegate_tCE8FE55E3B8998DDF5F8C51E8FD4D2B4933CFBF1_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return (intptr_t)L_8;
	}
}
// System.Int32 Substance.Platform.NativeFunctions::cppGetNumOutputs(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFunctions_cppGetNumOutputs_m4F0C3B14CCEB60A4DF8975C164DA9FC60B6D2CB9 (intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppGetNumOutputs_m4F0C3B14CCEB60A4DF8975C164DA9FC60B6D2CB9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppGetNumOutputs_m4F0C3B14CCEB60A4DF8975C164DA9FC60B6D2CB9_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_001e:
	{
		// cppGetNumOutputsDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppGetNumOutputsDelegate)) as cppGetNumOutputsDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppGetNumOutputsDelegate_tEC58C8B60E851ADD8CCC2B0B5B4DDD4450258D9C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (int)function.Invoke(graphHandle);
		intptr_t L_8 = ___graphHandle0;
		NullCheck(((cppGetNumOutputsDelegate_tEC58C8B60E851ADD8CCC2B0B5B4DDD4450258D9C *)IsInstSealed((RuntimeObject*)L_7, cppGetNumOutputsDelegate_tEC58C8B60E851ADD8CCC2B0B5B4DDD4450258D9C_il2cpp_TypeInfo_var)));
		int32_t L_9 = cppGetNumOutputsDelegate_Invoke_m32646953593D656B6A31FFE326ADB9171E733033(((cppGetNumOutputsDelegate_tEC58C8B60E851ADD8CCC2B0B5B4DDD4450258D9C *)IsInstSealed((RuntimeObject*)L_7, cppGetNumOutputsDelegate_tEC58C8B60E851ADD8CCC2B0B5B4DDD4450258D9C_il2cpp_TypeInfo_var)), (intptr_t)L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.IntPtr Substance.Platform.NativeFunctions::cppGetColorSpaceList(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeFunctions_cppGetColorSpaceList_m8B1DF227AE914F7CCD59D8A121BBF3F9D5E827F2 (intptr_t ___graphHandle0, int32_t ___numOutputs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppGetColorSpaceList_m8B1DF227AE914F7CCD59D8A121BBF3F9D5E827F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppGetColorSpaceList_m8B1DF227AE914F7CCD59D8A121BBF3F9D5E827F2_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}

IL_0022:
	{
		// cppGetColorSpaceListDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppGetColorSpaceListDelegate)) as cppGetColorSpaceListDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppGetColorSpaceListDelegate_t576494AB09EBEA0F0E016425ABB26A39963A9996_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (IntPtr)function.Invoke(graphHandle, numOutputs);
		intptr_t L_8 = ___graphHandle0;
		int32_t L_9 = ___numOutputs1;
		NullCheck(((cppGetColorSpaceListDelegate_t576494AB09EBEA0F0E016425ABB26A39963A9996 *)IsInstSealed((RuntimeObject*)L_7, cppGetColorSpaceListDelegate_t576494AB09EBEA0F0E016425ABB26A39963A9996_il2cpp_TypeInfo_var)));
		intptr_t L_10 = cppGetColorSpaceListDelegate_Invoke_m8921E191DC9A859099B1A1B3CA0DF11D86AE401C(((cppGetColorSpaceListDelegate_t576494AB09EBEA0F0E016425ABB26A39963A9996 *)IsInstSealed((RuntimeObject*)L_7, cppGetColorSpaceListDelegate_t576494AB09EBEA0F0E016425ABB26A39963A9996_il2cpp_TypeInfo_var)), (intptr_t)L_8, L_9, /*hidden argument*/NULL);
		return (intptr_t)L_10;
	}
}
// System.Void Substance.Platform.NativeFunctions::cppFreeMemory(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFunctions_cppFreeMemory_mDDF52CBC19652524ADAA6A0D99463C94C5D192FE (intptr_t ___pointer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppFreeMemory_mDDF52CBC19652524ADAA6A0D99463C94C5D192FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppFreeMemory_mDDF52CBC19652524ADAA6A0D99463C94C5D192FE_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// cppFreeMemoryDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppFreeMemoryDelegate)) as cppFreeMemoryDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppFreeMemoryDelegate_t4589A515CC653545394FBA1CB06E4A2C6FFAEAA6_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// function.Invoke(pointer);
		intptr_t L_8 = ___pointer0;
		NullCheck(((cppFreeMemoryDelegate_t4589A515CC653545394FBA1CB06E4A2C6FFAEAA6 *)IsInstSealed((RuntimeObject*)L_7, cppFreeMemoryDelegate_t4589A515CC653545394FBA1CB06E4A2C6FFAEAA6_il2cpp_TypeInfo_var)));
		cppFreeMemoryDelegate_Invoke_m1D7502E18108C8403359765FFDA1C7EFE2C3F719(((cppFreeMemoryDelegate_t4589A515CC653545394FBA1CB06E4A2C6FFAEAA6 *)IsInstSealed((RuntimeObject*)L_7, cppFreeMemoryDelegate_t4589A515CC653545394FBA1CB06E4A2C6FFAEAA6_il2cpp_TypeInfo_var)), (intptr_t)L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Substance.Platform.NativeFunctions::cppSetCreateSubstanceGraphCallbackEditorPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFunctions_cppSetCreateSubstanceGraphCallbackEditorPtr_m87CE1D7EC3CFB42DED4D075592E010A8076392EB (intptr_t ___fp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppSetCreateSubstanceGraphCallbackEditorPtr_m87CE1D7EC3CFB42DED4D075592E010A8076392EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppSetCreateSubstanceGraphCallbackEditorPtr_m87CE1D7EC3CFB42DED4D075592E010A8076392EB_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// cppSetCreateSubstanceGraphCallbackEditorPtrDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppSetCreateSubstanceGraphCallbackEditorPtrDelegate)) as cppSetCreateSubstanceGraphCallbackEditorPtrDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppSetCreateSubstanceGraphCallbackEditorPtrDelegate_t3B40C905CC291FE9687AD0E4E7B3D5CC1E81E4C7_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// function.Invoke(fp);
		intptr_t L_8 = ___fp0;
		NullCheck(((cppSetCreateSubstanceGraphCallbackEditorPtrDelegate_t3B40C905CC291FE9687AD0E4E7B3D5CC1E81E4C7 *)IsInstSealed((RuntimeObject*)L_7, cppSetCreateSubstanceGraphCallbackEditorPtrDelegate_t3B40C905CC291FE9687AD0E4E7B3D5CC1E81E4C7_il2cpp_TypeInfo_var)));
		cppSetCreateSubstanceGraphCallbackEditorPtrDelegate_Invoke_m7657EC0B31BC6897EC1E353D5DB9E4D4ABF21B8D(((cppSetCreateSubstanceGraphCallbackEditorPtrDelegate_t3B40C905CC291FE9687AD0E4E7B3D5CC1E81E4C7 *)IsInstSealed((RuntimeObject*)L_7, cppSetCreateSubstanceGraphCallbackEditorPtrDelegate_t3B40C905CC291FE9687AD0E4E7B3D5CC1E81E4C7_il2cpp_TypeInfo_var)), (intptr_t)L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr Substance.Platform.NativeFunctions::cppGetMInputs(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeFunctions_cppGetMInputs_m912E1805AAFAF1793927D7F32F6ABEACF9A4B839 (intptr_t ___graphHandle0, int32_t ___pNumInputs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppGetMInputs_m912E1805AAFAF1793927D7F32F6ABEACF9A4B839_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppGetMInputs_m912E1805AAFAF1793927D7F32F6ABEACF9A4B839_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}

IL_0022:
	{
		// cppGetMInputsDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppGetMInputsDelegate)) as cppGetMInputsDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppGetMInputsDelegate_t57C71B3DDC2EABBEF222B0EBFBF139A786B4880D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (IntPtr)function.Invoke(graphHandle, pNumInputs);
		intptr_t L_8 = ___graphHandle0;
		int32_t L_9 = ___pNumInputs1;
		NullCheck(((cppGetMInputsDelegate_t57C71B3DDC2EABBEF222B0EBFBF139A786B4880D *)IsInstSealed((RuntimeObject*)L_7, cppGetMInputsDelegate_t57C71B3DDC2EABBEF222B0EBFBF139A786B4880D_il2cpp_TypeInfo_var)));
		intptr_t L_10 = cppGetMInputsDelegate_Invoke_m8C8E35BDE756B5D96E34FAD5802BB2E29BE04C17(((cppGetMInputsDelegate_t57C71B3DDC2EABBEF222B0EBFBF139A786B4880D *)IsInstSealed((RuntimeObject*)L_7, cppGetMInputsDelegate_t57C71B3DDC2EABBEF222B0EBFBF139A786B4880D_il2cpp_TypeInfo_var)), (intptr_t)L_8, L_9, /*hidden argument*/NULL);
		return (intptr_t)L_10;
	}
}
// System.IntPtr Substance.Platform.NativeFunctions::cppGetOutputsDesc(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeFunctions_cppGetOutputsDesc_mEB9EC39921274128A4C61D7749512C8C7D7D6279 (intptr_t ___graphHandle0, int32_t* ___pNumOutputs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppGetOutputsDesc_mEB9EC39921274128A4C61D7749512C8C7D7D6279_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppGetOutputsDesc_mEB9EC39921274128A4C61D7749512C8C7D7D6279_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}

IL_0022:
	{
		// cppGetOutputsDescDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppGetOutputsDescDelegate)) as cppGetOutputsDescDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppGetOutputsDescDelegate_tC6C5AA6F2ADA418834452A6C5461BE449F297478_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (IntPtr)function.Invoke(graphHandle, ref pNumOutputs);
		intptr_t L_8 = ___graphHandle0;
		int32_t* L_9 = ___pNumOutputs1;
		NullCheck(((cppGetOutputsDescDelegate_tC6C5AA6F2ADA418834452A6C5461BE449F297478 *)IsInstSealed((RuntimeObject*)L_7, cppGetOutputsDescDelegate_tC6C5AA6F2ADA418834452A6C5461BE449F297478_il2cpp_TypeInfo_var)));
		intptr_t L_10 = cppGetOutputsDescDelegate_Invoke_m49F63451C974CA494D4225BE4389BDE4A98B65EB(((cppGetOutputsDescDelegate_tC6C5AA6F2ADA418834452A6C5461BE449F297478 *)IsInstSealed((RuntimeObject*)L_7, cppGetOutputsDescDelegate_tC6C5AA6F2ADA418834452A6C5461BE449F297478_il2cpp_TypeInfo_var)), (intptr_t)L_8, (int32_t*)L_9, /*hidden argument*/NULL);
		return (intptr_t)L_10;
	}
}
// System.Int32 Substance.Platform.NativeFunctions::cppShutdownSubstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFunctions_cppShutdownSubstance_mC4FE9F68F7BBC54A014EC2830FD053EF29EA9254 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppShutdownSubstance_mC4FE9F68F7BBC54A014EC2830FD053EF29EA9254_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppShutdownSubstance_mC4FE9F68F7BBC54A014EC2830FD053EF29EA9254_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_001e:
	{
		// cppShutdownSubstanceDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppShutdownSubstanceDelegate)) as cppShutdownSubstanceDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppShutdownSubstanceDelegate_t8C97F4283C5BFAC2186EF838967C7A7F44892109_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// int result = (int)function.Invoke();
		NullCheck(((cppShutdownSubstanceDelegate_t8C97F4283C5BFAC2186EF838967C7A7F44892109 *)IsInstSealed((RuntimeObject*)L_7, cppShutdownSubstanceDelegate_t8C97F4283C5BFAC2186EF838967C7A7F44892109_il2cpp_TypeInfo_var)));
		int32_t L_8 = cppShutdownSubstanceDelegate_Invoke_m122F11C86D099451997656FFE198F16A05597953(((cppShutdownSubstanceDelegate_t8C97F4283C5BFAC2186EF838967C7A7F44892109 *)IsInstSealed((RuntimeObject*)L_7, cppShutdownSubstanceDelegate_t8C97F4283C5BFAC2186EF838967C7A7F44892109_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// DLLHelpers.UnloadDLL();
		DLLHelpers_UnloadDLL_mF470A25B98D913F2A0AF3CEBA93CD284B28BCD41(/*hidden argument*/NULL);
		// return result;
		return L_8;
	}
}
// System.Int32 Substance.Platform.NativeFunctions::cppRemoveAsset(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFunctions_cppRemoveAsset_m76906CD76105846A8D2F5A26EF4B30BAF5CD948F (String_t* ___pAssetPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppRemoveAsset_m76906CD76105846A8D2F5A26EF4B30BAF5CD948F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppRemoveAsset_m76906CD76105846A8D2F5A26EF4B30BAF5CD948F_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_001e:
	{
		// cppRemoveAssetDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppRemoveAssetDelegate)) as cppRemoveAssetDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppRemoveAssetDelegate_tD52C59D0DC1BD5D051DFF11832AEDE9ED69C7146_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (int)function.Invoke(pAssetPath);
		String_t* L_8 = ___pAssetPath0;
		NullCheck(((cppRemoveAssetDelegate_tD52C59D0DC1BD5D051DFF11832AEDE9ED69C7146 *)IsInstSealed((RuntimeObject*)L_7, cppRemoveAssetDelegate_tD52C59D0DC1BD5D051DFF11832AEDE9ED69C7146_il2cpp_TypeInfo_var)));
		int32_t L_9 = cppRemoveAssetDelegate_Invoke_m6D0062B8A69ED07E0E9599D24D0C6A07A77F2CCD(((cppRemoveAssetDelegate_tD52C59D0DC1BD5D051DFF11832AEDE9ED69C7146 *)IsInstSealed((RuntimeObject*)L_7, cppRemoveAssetDelegate_tD52C59D0DC1BD5D051DFF11832AEDE9ED69C7146_il2cpp_TypeInfo_var)), L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Int32 Substance.Platform.NativeFunctions::cppMoveAsset(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFunctions_cppMoveAsset_m4031665D54A763C97A391127D094E7400FAAE36D (String_t* ___pFromAssetPath0, String_t* ___pToAssetPath1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppMoveAsset_m4031665D54A763C97A391127D094E7400FAAE36D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppMoveAsset_m4031665D54A763C97A391127D094E7400FAAE36D_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_001e:
	{
		// cppMoveAssetDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppMoveAssetDelegate)) as cppMoveAssetDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppMoveAssetDelegate_t4F3637A73D8E132238C79BD5154B10A1B2D42A92_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (int)function.Invoke(pFromAssetPath, pToAssetPath);
		String_t* L_8 = ___pFromAssetPath0;
		String_t* L_9 = ___pToAssetPath1;
		NullCheck(((cppMoveAssetDelegate_t4F3637A73D8E132238C79BD5154B10A1B2D42A92 *)IsInstSealed((RuntimeObject*)L_7, cppMoveAssetDelegate_t4F3637A73D8E132238C79BD5154B10A1B2D42A92_il2cpp_TypeInfo_var)));
		int32_t L_10 = cppMoveAssetDelegate_Invoke_mAE00B82ACA564C2B4E64DE41363EC1528B1D427C(((cppMoveAssetDelegate_t4F3637A73D8E132238C79BD5154B10A1B2D42A92 *)IsInstSealed((RuntimeObject*)L_7, cppMoveAssetDelegate_t4F3637A73D8E132238C79BD5154B10A1B2D42A92_il2cpp_TypeInfo_var)), L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Int32 Substance.Platform.NativeFunctions::cppLoadSubstance(System.String,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.UInt32[],System.String[],System.String[],System.Int32[],System.Int32[],System.UInt32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFunctions_cppLoadSubstance_mCD3B0E182505DBEB94397868731409B390A1BAC8 (String_t* ___pAssetPath0, intptr_t ___array1, int32_t ___size2, intptr_t ___assetCtx3, intptr_t ___substanceObject4, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___graphIndices5, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___graphPrototypeNames6, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___graphLabels7, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___graphFormats8, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___normalFormats9, uint32_t ___numGraphIndices10, int32_t ___rawOverride11, int32_t ___pPipeline12, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppLoadSubstance_mCD3B0E182505DBEB94397868731409B390A1BAC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppLoadSubstance_mCD3B0E182505DBEB94397868731409B390A1BAC8_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_001e:
	{
		// cppLoadSubstanceDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppLoadSubstanceDelegate)) as cppLoadSubstanceDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppLoadSubstanceDelegate_t064B5235187E3C0476C02760526C786F19A85CEE_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (int)function.Invoke(pAssetPath, array, size, assetCtx, substanceObject,
		//                             graphIndices, graphPrototypeNames, graphLabels,
		//                             graphFormats, normalFormats, numGraphIndices,
		//                             rawOverride, pPipeline);
		String_t* L_8 = ___pAssetPath0;
		intptr_t L_9 = ___array1;
		int32_t L_10 = ___size2;
		intptr_t L_11 = ___assetCtx3;
		intptr_t L_12 = ___substanceObject4;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_13 = ___graphIndices5;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = ___graphPrototypeNames6;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = ___graphLabels7;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = ___graphFormats8;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = ___normalFormats9;
		uint32_t L_18 = ___numGraphIndices10;
		int32_t L_19 = ___rawOverride11;
		int32_t L_20 = ___pPipeline12;
		NullCheck(((cppLoadSubstanceDelegate_t064B5235187E3C0476C02760526C786F19A85CEE *)IsInstSealed((RuntimeObject*)L_7, cppLoadSubstanceDelegate_t064B5235187E3C0476C02760526C786F19A85CEE_il2cpp_TypeInfo_var)));
		int32_t L_21 = cppLoadSubstanceDelegate_Invoke_mDCE857F3555C6FE6EBC294BCF7FDD9D29E59F99C(((cppLoadSubstanceDelegate_t064B5235187E3C0476C02760526C786F19A85CEE *)IsInstSealed((RuntimeObject*)L_7, cppLoadSubstanceDelegate_t064B5235187E3C0476C02760526C786F19A85CEE_il2cpp_TypeInfo_var)), L_8, (intptr_t)L_9, L_10, (intptr_t)L_11, (intptr_t)L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Void Substance.Platform.NativeFunctions::cppQueueSubstance(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFunctions_cppQueueSubstance_mBE8427F22C0B90C5724F832D348A8DE14D578084 (intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppQueueSubstance_mBE8427F22C0B90C5724F832D348A8DE14D578084_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppQueueSubstance_mBE8427F22C0B90C5724F832D348A8DE14D578084_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// cppQueueSubstanceDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppQueueSubstanceDelegate)) as cppQueueSubstanceDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppQueueSubstanceDelegate_t575E4557E550F01EB0BB8D9F91F89E1EA0F74E82_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// function.Invoke(graphHandle);
		intptr_t L_8 = ___graphHandle0;
		NullCheck(((cppQueueSubstanceDelegate_t575E4557E550F01EB0BB8D9F91F89E1EA0F74E82 *)IsInstSealed((RuntimeObject*)L_7, cppQueueSubstanceDelegate_t575E4557E550F01EB0BB8D9F91F89E1EA0F74E82_il2cpp_TypeInfo_var)));
		cppQueueSubstanceDelegate_Invoke_m7881711BE6AFCE0A70E76C4E71CBFE2AF9708454(((cppQueueSubstanceDelegate_t575E4557E550F01EB0BB8D9F91F89E1EA0F74E82 *)IsInstSealed((RuntimeObject*)L_7, cppQueueSubstanceDelegate_t575E4557E550F01EB0BB8D9F91F89E1EA0F74E82_il2cpp_TypeInfo_var)), (intptr_t)L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.UInt32 Substance.Platform.NativeFunctions::cppRenderSubstances(System.Boolean,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeFunctions_cppRenderSubstances_m704369721E769C140235408804B7D6C9D9D7E4C4 (bool ___bAsync0, intptr_t ___preComputeCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppRenderSubstances_m704369721E769C140235408804B7D6C9D9D7E4C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppRenderSubstances_m704369721E769C140235408804B7D6C9D9D7E4C4_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_001e:
	{
		// cppRenderSubstancesDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppRenderSubstancesDelegate)) as cppRenderSubstancesDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppRenderSubstancesDelegate_tBDBA34EA30F65643A372E619838AE6743BDD527F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (uint)function.Invoke(bAsync, preComputeCallback);
		bool L_8 = ___bAsync0;
		intptr_t L_9 = ___preComputeCallback1;
		NullCheck(((cppRenderSubstancesDelegate_tBDBA34EA30F65643A372E619838AE6743BDD527F *)IsInstSealed((RuntimeObject*)L_7, cppRenderSubstancesDelegate_tBDBA34EA30F65643A372E619838AE6743BDD527F_il2cpp_TypeInfo_var)));
		uint32_t L_10 = cppRenderSubstancesDelegate_Invoke_mA27D1CBF45E26CCC17CED11D29B43EB2E7BB2E5E(((cppRenderSubstancesDelegate_tBDBA34EA30F65643A372E619838AE6743BDD527F *)IsInstSealed((RuntimeObject*)L_7, cppRenderSubstancesDelegate_tBDBA34EA30F65643A372E619838AE6743BDD527F_il2cpp_TypeInfo_var)), L_8, (intptr_t)L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Boolean Substance.Platform.NativeFunctions::cppIsRendererBusy(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeFunctions_cppIsRendererBusy_m079D5B71641DC910E57CD8AE971B4777843D025C (uint32_t ___runid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppIsRendererBusy_m079D5B71641DC910E57CD8AE971B4777843D025C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppIsRendererBusy_m079D5B71641DC910E57CD8AE971B4777843D025C_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001e:
	{
		// cppIsRendererBusyDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppIsRendererBusyDelegate)) as cppIsRendererBusyDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppIsRendererBusyDelegate_t2E1EACFB22525453D9D9D8BF37FBC036A0BCA3AF_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (bool)function.Invoke(runid);
		uint32_t L_8 = ___runid0;
		NullCheck(((cppIsRendererBusyDelegate_t2E1EACFB22525453D9D9D8BF37FBC036A0BCA3AF *)IsInstSealed((RuntimeObject*)L_7, cppIsRendererBusyDelegate_t2E1EACFB22525453D9D9D8BF37FBC036A0BCA3AF_il2cpp_TypeInfo_var)));
		bool L_9 = cppIsRendererBusyDelegate_Invoke_mAA4D186D55AA984865E5F910CBC01D9B91D4263B(((cppIsRendererBusyDelegate_t2E1EACFB22525453D9D9D8BF37FBC036A0BCA3AF *)IsInstSealed((RuntimeObject*)L_7, cppIsRendererBusyDelegate_t2E1EACFB22525453D9D9D8BF37FBC036A0BCA3AF_il2cpp_TypeInfo_var)), L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void Substance.Platform.NativeFunctions::cppSetDirtyOutputs(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFunctions_cppSetDirtyOutputs_mE3D7C82C67769B1A371B2307EBF8269547A6B005 (intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppSetDirtyOutputs_mE3D7C82C67769B1A371B2307EBF8269547A6B005_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppSetDirtyOutputs_mE3D7C82C67769B1A371B2307EBF8269547A6B005_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// cppSetDirtyOutputsDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppSetDirtyOutputsDelegate)) as cppSetDirtyOutputsDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppSetDirtyOutputsDelegate_t5DB997E31548F8A3B8D5CBE5B0552A01C0D1F4ED_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// function.Invoke(graphHandle);
		intptr_t L_8 = ___graphHandle0;
		NullCheck(((cppSetDirtyOutputsDelegate_t5DB997E31548F8A3B8D5CBE5B0552A01C0D1F4ED *)IsInstSealed((RuntimeObject*)L_7, cppSetDirtyOutputsDelegate_t5DB997E31548F8A3B8D5CBE5B0552A01C0D1F4ED_il2cpp_TypeInfo_var)));
		cppSetDirtyOutputsDelegate_Invoke_m2C46976DD166ED7091F27291B3F37C78F4B103FB(((cppSetDirtyOutputsDelegate_t5DB997E31548F8A3B8D5CBE5B0552A01C0D1F4ED *)IsInstSealed((RuntimeObject*)L_7, cppSetDirtyOutputsDelegate_t5DB997E31548F8A3B8D5CBE5B0552A01C0D1F4ED_il2cpp_TypeInfo_var)), (intptr_t)L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Substance.Platform.NativeFunctions::cppGetNumInputs(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFunctions_cppGetNumInputs_m56A8BF95507C0EB75A3ED29EE0051DF9BAA28250 (intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppGetNumInputs_m56A8BF95507C0EB75A3ED29EE0051DF9BAA28250_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppGetNumInputs_m56A8BF95507C0EB75A3ED29EE0051DF9BAA28250_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_001e:
	{
		// cppGetNumInputsDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppGetNumInputsDelegate)) as cppGetNumInputsDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppGetNumInputsDelegate_t13729683C1D24351E98391F54CDACC6C74BAD9A1_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (int)function.Invoke(graphHandle);
		intptr_t L_8 = ___graphHandle0;
		NullCheck(((cppGetNumInputsDelegate_t13729683C1D24351E98391F54CDACC6C74BAD9A1 *)IsInstSealed((RuntimeObject*)L_7, cppGetNumInputsDelegate_t13729683C1D24351E98391F54CDACC6C74BAD9A1_il2cpp_TypeInfo_var)));
		int32_t L_9 = cppGetNumInputsDelegate_Invoke_m7EBEDC3D9BBC6479C6156E5AB81464B598471DF6(((cppGetNumInputsDelegate_t13729683C1D24351E98391F54CDACC6C74BAD9A1 *)IsInstSealed((RuntimeObject*)L_7, cppGetNumInputsDelegate_t13729683C1D24351E98391F54CDACC6C74BAD9A1_il2cpp_TypeInfo_var)), (intptr_t)L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.IntPtr Substance.Platform.NativeFunctions::cppGetInput_Ints(System.IntPtr,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeFunctions_cppGetInput_Ints_mBC66E751A8DE6E220ADEECFA6EDE9E68B34194AC (intptr_t ___graphHandle0, String_t* ___pFieldName1, int32_t ___pNumInputs2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppGetInput_Ints_mBC66E751A8DE6E220ADEECFA6EDE9E68B34194AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppGetInput_Ints_mBC66E751A8DE6E220ADEECFA6EDE9E68B34194AC_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}

IL_0022:
	{
		// cppGetInput_IntsDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppGetInput_IntsDelegate)) as cppGetInput_IntsDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppGetInput_IntsDelegate_tCAA6271E332B52940991E6D4666833368ACB6001_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (IntPtr)function.Invoke(graphHandle, pFieldName, pNumInputs);
		intptr_t L_8 = ___graphHandle0;
		String_t* L_9 = ___pFieldName1;
		int32_t L_10 = ___pNumInputs2;
		NullCheck(((cppGetInput_IntsDelegate_tCAA6271E332B52940991E6D4666833368ACB6001 *)IsInstSealed((RuntimeObject*)L_7, cppGetInput_IntsDelegate_tCAA6271E332B52940991E6D4666833368ACB6001_il2cpp_TypeInfo_var)));
		intptr_t L_11 = cppGetInput_IntsDelegate_Invoke_mDCD7185EA506AFF23EF3F1402450D47250C7E236(((cppGetInput_IntsDelegate_tCAA6271E332B52940991E6D4666833368ACB6001 *)IsInstSealed((RuntimeObject*)L_7, cppGetInput_IntsDelegate_tCAA6271E332B52940991E6D4666833368ACB6001_il2cpp_TypeInfo_var)), (intptr_t)L_8, L_9, L_10, /*hidden argument*/NULL);
		return (intptr_t)L_11;
	}
}
// System.IntPtr Substance.Platform.NativeFunctions::cppGetMComboBoxItems(System.IntPtr,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeFunctions_cppGetMComboBoxItems_mBD889125F0C6D4A22581605F067590A4ED93B18B (intptr_t ___graphHandle0, String_t* ___pIdentifier1, int32_t* ___pNumValues2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppGetMComboBoxItems_mBD889125F0C6D4A22581605F067590A4ED93B18B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppGetMComboBoxItems_mBD889125F0C6D4A22581605F067590A4ED93B18B_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// pNumValues = 0;
		int32_t* L_4 = ___pNumValues2;
		*((int32_t*)L_4) = (int32_t)0;
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}

IL_0025:
	{
		// cppGetMComboBoxItemsDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppGetMComboBoxItemsDelegate)) as cppGetMComboBoxItemsDelegate;
		String_t* L_5 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (cppGetMComboBoxItemsDelegate_tF4F5718C0676EAED730748585BE30FADC488244D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_8 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_5, L_7, /*hidden argument*/NULL);
		// return (IntPtr)function.Invoke(graphHandle, pIdentifier, out pNumValues);
		intptr_t L_9 = ___graphHandle0;
		String_t* L_10 = ___pIdentifier1;
		int32_t* L_11 = ___pNumValues2;
		NullCheck(((cppGetMComboBoxItemsDelegate_tF4F5718C0676EAED730748585BE30FADC488244D *)IsInstSealed((RuntimeObject*)L_8, cppGetMComboBoxItemsDelegate_tF4F5718C0676EAED730748585BE30FADC488244D_il2cpp_TypeInfo_var)));
		intptr_t L_12 = cppGetMComboBoxItemsDelegate_Invoke_m6C2096EB88839B128581651726AE4D23B418F2FE(((cppGetMComboBoxItemsDelegate_tF4F5718C0676EAED730748585BE30FADC488244D *)IsInstSealed((RuntimeObject*)L_8, cppGetMComboBoxItemsDelegate_tF4F5718C0676EAED730748585BE30FADC488244D_il2cpp_TypeInfo_var)), (intptr_t)L_9, L_10, (int32_t*)L_11, /*hidden argument*/NULL);
		return (intptr_t)L_12;
	}
}
// System.Void Substance.Platform.NativeFunctions::cppGetInput_Float(System.IntPtr,System.String,System.Single[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFunctions_cppGetInput_Float_m524DD51080D392154738D0D812270AE603673987 (intptr_t ___graphHandle0, String_t* ___pInputName1, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values2, uint32_t ___numValues3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppGetInput_Float_m524DD51080D392154738D0D812270AE603673987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppGetInput_Float_m524DD51080D392154738D0D812270AE603673987_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// cppGetInput_FloatDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppGetInput_FloatDelegate)) as cppGetInput_FloatDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppGetInput_FloatDelegate_t221FB909D975EA7ABD8287CD1031D3B939698D2F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// function.Invoke(graphHandle, pInputName, values, numValues);
		intptr_t L_8 = ___graphHandle0;
		String_t* L_9 = ___pInputName1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = ___values2;
		uint32_t L_11 = ___numValues3;
		NullCheck(((cppGetInput_FloatDelegate_t221FB909D975EA7ABD8287CD1031D3B939698D2F *)IsInstSealed((RuntimeObject*)L_7, cppGetInput_FloatDelegate_t221FB909D975EA7ABD8287CD1031D3B939698D2F_il2cpp_TypeInfo_var)));
		cppGetInput_FloatDelegate_Invoke_m72DACAA7CDEDD88A93FE250A551B2CF303E94C80(((cppGetInput_FloatDelegate_t221FB909D975EA7ABD8287CD1031D3B939698D2F *)IsInstSealed((RuntimeObject*)L_7, cppGetInput_FloatDelegate_t221FB909D975EA7ABD8287CD1031D3B939698D2F_il2cpp_TypeInfo_var)), (intptr_t)L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Substance.Platform.NativeFunctions::cppSetInput_Float(System.IntPtr,System.String,System.Single[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFunctions_cppSetInput_Float_m151D0C07CC165A5253D4621D5C3EE9E891FCCAD3 (intptr_t ___graphHandle0, String_t* ___pInputName1, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values2, uint32_t ___numValues3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppSetInput_Float_m151D0C07CC165A5253D4621D5C3EE9E891FCCAD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppSetInput_Float_m151D0C07CC165A5253D4621D5C3EE9E891FCCAD3_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// return -2;
		return ((int32_t)-2);
	}

IL_001f:
	{
		// cppSetInput_FloatDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppSetInput_FloatDelegate)) as cppSetInput_FloatDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppSetInput_FloatDelegate_t484FD6CE4EA43F49B3F35A0275D8E9BAEA07144D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (int)function.Invoke(graphHandle, pInputName, values, numValues);
		intptr_t L_8 = ___graphHandle0;
		String_t* L_9 = ___pInputName1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = ___values2;
		uint32_t L_11 = ___numValues3;
		NullCheck(((cppSetInput_FloatDelegate_t484FD6CE4EA43F49B3F35A0275D8E9BAEA07144D *)IsInstSealed((RuntimeObject*)L_7, cppSetInput_FloatDelegate_t484FD6CE4EA43F49B3F35A0275D8E9BAEA07144D_il2cpp_TypeInfo_var)));
		int32_t L_12 = cppSetInput_FloatDelegate_Invoke_mA33885B89DA4EC60A791F8DB8D22AFAC75CB5641(((cppSetInput_FloatDelegate_t484FD6CE4EA43F49B3F35A0275D8E9BAEA07144D *)IsInstSealed((RuntimeObject*)L_7, cppSetInput_FloatDelegate_t484FD6CE4EA43F49B3F35A0275D8E9BAEA07144D_il2cpp_TypeInfo_var)), (intptr_t)L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void Substance.Platform.NativeFunctions::cppGetInput_Int(System.IntPtr,System.String,System.Int32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFunctions_cppGetInput_Int_m7C67758D71A6E0CB0BDCBDE7D1DE6BD11FC508B1 (intptr_t ___graphHandle0, String_t* ___pInputName1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___values2, uint32_t ___numValues3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppGetInput_Int_m7C67758D71A6E0CB0BDCBDE7D1DE6BD11FC508B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppGetInput_Int_m7C67758D71A6E0CB0BDCBDE7D1DE6BD11FC508B1_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// cppGetInput_IntDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppGetInput_IntDelegate)) as cppGetInput_IntDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppGetInput_IntDelegate_tE2261BA1BAB1478E9C781D857BEF240C820CD8AC_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// function.Invoke(graphHandle, pInputName, values, numValues);
		intptr_t L_8 = ___graphHandle0;
		String_t* L_9 = ___pInputName1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = ___values2;
		uint32_t L_11 = ___numValues3;
		NullCheck(((cppGetInput_IntDelegate_tE2261BA1BAB1478E9C781D857BEF240C820CD8AC *)IsInstSealed((RuntimeObject*)L_7, cppGetInput_IntDelegate_tE2261BA1BAB1478E9C781D857BEF240C820CD8AC_il2cpp_TypeInfo_var)));
		cppGetInput_IntDelegate_Invoke_mF82C112EA99827DA7BE01EC7E8002F7B04E8F6F3(((cppGetInput_IntDelegate_tE2261BA1BAB1478E9C781D857BEF240C820CD8AC *)IsInstSealed((RuntimeObject*)L_7, cppGetInput_IntDelegate_tE2261BA1BAB1478E9C781D857BEF240C820CD8AC_il2cpp_TypeInfo_var)), (intptr_t)L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Substance.Platform.NativeFunctions::cppSetInput_Int(System.IntPtr,System.String,System.Int32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFunctions_cppSetInput_Int_m74CCF6224CC615E8C8D4668B0320E0B434A4E2E3 (intptr_t ___graphHandle0, String_t* ___pInputName1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___values2, uint32_t ___numValues3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppSetInput_Int_m74CCF6224CC615E8C8D4668B0320E0B434A4E2E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppSetInput_Int_m74CCF6224CC615E8C8D4668B0320E0B434A4E2E3_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// cppSetInput_IntDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppSetInput_IntDelegate)) as cppSetInput_IntDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppSetInput_IntDelegate_tA863B8C05494F48272DA2D4C084B51F23A9BA794_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// function.Invoke(graphHandle, pInputName, values, numValues);
		intptr_t L_8 = ___graphHandle0;
		String_t* L_9 = ___pInputName1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = ___values2;
		uint32_t L_11 = ___numValues3;
		NullCheck(((cppSetInput_IntDelegate_tA863B8C05494F48272DA2D4C084B51F23A9BA794 *)IsInstSealed((RuntimeObject*)L_7, cppSetInput_IntDelegate_tA863B8C05494F48272DA2D4C084B51F23A9BA794_il2cpp_TypeInfo_var)));
		cppSetInput_IntDelegate_Invoke_mF5423EC645F29713B5206D525456542FCB5A6C25(((cppSetInput_IntDelegate_tA863B8C05494F48272DA2D4C084B51F23A9BA794 *)IsInstSealed((RuntimeObject*)L_7, cppSetInput_IntDelegate_tA863B8C05494F48272DA2D4C084B51F23A9BA794_il2cpp_TypeInfo_var)), (intptr_t)L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Substance.Platform.NativeFunctions::cppSetInput_String(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFunctions_cppSetInput_String_m0EE3A794F787B77C531CC8FA0BA8F88E70F7EA5A (intptr_t ___graphHandle0, String_t* ___pInputName1, String_t* ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppSetInput_String_m0EE3A794F787B77C531CC8FA0BA8F88E70F7EA5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppSetInput_String_m0EE3A794F787B77C531CC8FA0BA8F88E70F7EA5A_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// return -2;
		return ((int32_t)-2);
	}

IL_001f:
	{
		// cppSetInput_StringDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppSetInput_StringDelegate)) as cppSetInput_StringDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppSetInput_StringDelegate_t85B9D05E0F89A925D39FA6DD400EB2A32746A22B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (int)function.Invoke(graphHandle, pInputName, value);
		intptr_t L_8 = ___graphHandle0;
		String_t* L_9 = ___pInputName1;
		String_t* L_10 = ___value2;
		NullCheck(((cppSetInput_StringDelegate_t85B9D05E0F89A925D39FA6DD400EB2A32746A22B *)IsInstSealed((RuntimeObject*)L_7, cppSetInput_StringDelegate_t85B9D05E0F89A925D39FA6DD400EB2A32746A22B_il2cpp_TypeInfo_var)));
		int32_t L_11 = cppSetInput_StringDelegate_Invoke_mCAF71C456B4572A72E495C8B8637C4476F03D587(((cppSetInput_StringDelegate_t85B9D05E0F89A925D39FA6DD400EB2A32746A22B *)IsInstSealed((RuntimeObject*)L_7, cppSetInput_StringDelegate_t85B9D05E0F89A925D39FA6DD400EB2A32746A22B_il2cpp_TypeInfo_var)), (intptr_t)L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.IntPtr Substance.Platform.NativeFunctions::cppGetInput_String(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeFunctions_cppGetInput_String_mFB98B36F0F4229896DCEECC18BE73DCDEFC3688A (intptr_t ___graphHandle0, String_t* ___pInputName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppGetInput_String_mFB98B36F0F4229896DCEECC18BE73DCDEFC3688A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppGetInput_String_mFB98B36F0F4229896DCEECC18BE73DCDEFC3688A_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}

IL_0022:
	{
		// cppGetInput_StringDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppGetInput_StringDelegate)) as cppGetInput_StringDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppGetInput_StringDelegate_t3E2EF81D92442C633BC245D9D6F34238F9B147F7_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (IntPtr)function.Invoke(graphHandle, pInputName);
		intptr_t L_8 = ___graphHandle0;
		String_t* L_9 = ___pInputName1;
		NullCheck(((cppGetInput_StringDelegate_t3E2EF81D92442C633BC245D9D6F34238F9B147F7 *)IsInstSealed((RuntimeObject*)L_7, cppGetInput_StringDelegate_t3E2EF81D92442C633BC245D9D6F34238F9B147F7_il2cpp_TypeInfo_var)));
		intptr_t L_10 = cppGetInput_StringDelegate_Invoke_mAA2F00244E0C7A705413CE476FB616B5BFFE28BB(((cppGetInput_StringDelegate_t3E2EF81D92442C633BC245D9D6F34238F9B147F7 *)IsInstSealed((RuntimeObject*)L_7, cppGetInput_StringDelegate_t3E2EF81D92442C633BC245D9D6F34238F9B147F7_il2cpp_TypeInfo_var)), (intptr_t)L_8, L_9, /*hidden argument*/NULL);
		return (intptr_t)L_10;
	}
}
// System.Int32 Substance.Platform.NativeFunctions::cppSetInput_Texture(System.IntPtr,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFunctions_cppSetInput_Texture_m539E800B17128D49A70BEC8C579AB892F4B87439 (intptr_t ___graphHandle0, String_t* ___pInputName1, int32_t ___format2, int32_t ___mipCount3, int32_t ___width4, int32_t ___height5, intptr_t ___pixels6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppSetInput_Texture_m539E800B17128D49A70BEC8C579AB892F4B87439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppSetInput_Texture_m539E800B17128D49A70BEC8C579AB892F4B87439_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// return -2;
		return ((int32_t)-2);
	}

IL_001f:
	{
		// cppSetInput_TextureDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppSetInput_TextureDelegate)) as cppSetInput_TextureDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppSetInput_TextureDelegate_t3E6137FDADDC272FEE49BBD0A4779A0D69034A82_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (int)function.Invoke(graphHandle, pInputName, format, mipCount, width, height, pixels);
		intptr_t L_8 = ___graphHandle0;
		String_t* L_9 = ___pInputName1;
		int32_t L_10 = ___format2;
		int32_t L_11 = ___mipCount3;
		int32_t L_12 = ___width4;
		int32_t L_13 = ___height5;
		intptr_t L_14 = ___pixels6;
		NullCheck(((cppSetInput_TextureDelegate_t3E6137FDADDC272FEE49BBD0A4779A0D69034A82 *)IsInstSealed((RuntimeObject*)L_7, cppSetInput_TextureDelegate_t3E6137FDADDC272FEE49BBD0A4779A0D69034A82_il2cpp_TypeInfo_var)));
		int32_t L_15 = cppSetInput_TextureDelegate_Invoke_m0DC3736E7B9B486DFA2FF19D8F5102D134ABF12D(((cppSetInput_TextureDelegate_t3E6137FDADDC272FEE49BBD0A4779A0D69034A82 *)IsInstSealed((RuntimeObject*)L_7, cppSetInput_TextureDelegate_t3E6137FDADDC272FEE49BBD0A4779A0D69034A82_il2cpp_TypeInfo_var)), (intptr_t)L_8, L_9, L_10, L_11, L_12, L_13, (intptr_t)L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Int32 Substance.Platform.NativeFunctions::cppProcessQueuedOutputs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFunctions_cppProcessQueuedOutputs_mDB10C54B736A67EA7660FCD26D5CCAE41C666492 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppProcessQueuedOutputs_mDB10C54B736A67EA7660FCD26D5CCAE41C666492_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppProcessQueuedOutputs_mDB10C54B736A67EA7660FCD26D5CCAE41C666492_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_001e:
	{
		// cppProcessQueuedOutputsDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppProcessQueuedOutputsDelegate)) as cppProcessQueuedOutputsDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppProcessQueuedOutputsDelegate_t67859933ABBED533B3E8F71CBA2D9005BC084883_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (int)function.Invoke();
		NullCheck(((cppProcessQueuedOutputsDelegate_t67859933ABBED533B3E8F71CBA2D9005BC084883 *)IsInstSealed((RuntimeObject*)L_7, cppProcessQueuedOutputsDelegate_t67859933ABBED533B3E8F71CBA2D9005BC084883_il2cpp_TypeInfo_var)));
		int32_t L_8 = cppProcessQueuedOutputsDelegate_Invoke_m15516A052734389A6238791549FEC2C5730F4480(((cppProcessQueuedOutputsDelegate_t67859933ABBED533B3E8F71CBA2D9005BC084883 *)IsInstSealed((RuntimeObject*)L_7, cppProcessQueuedOutputsDelegate_t67859933ABBED533B3E8F71CBA2D9005BC084883_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.IntPtr Substance.Platform.NativeFunctions::cppGetOutputLabelFromHash(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeFunctions_cppGetOutputLabelFromHash_m4BF48DF27CDB871F6F14CD62DB086C6F42F5B69D (String_t* ___pAssetPath0, uint32_t ___outputHash1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppGetOutputLabelFromHash_m4BF48DF27CDB871F6F14CD62DB086C6F42F5B69D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppGetOutputLabelFromHash_m4BF48DF27CDB871F6F14CD62DB086C6F42F5B69D_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}

IL_0022:
	{
		// cppGetOutputLabelFromHashDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppGetOutputLabelFromHashDelegate)) as cppGetOutputLabelFromHashDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppGetOutputLabelFromHashDelegate_t333F4644517C361C40991DB87E3251DAD5200E20_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (IntPtr)function.Invoke(pAssetPath, outputHash);
		String_t* L_8 = ___pAssetPath0;
		uint32_t L_9 = ___outputHash1;
		NullCheck(((cppGetOutputLabelFromHashDelegate_t333F4644517C361C40991DB87E3251DAD5200E20 *)IsInstSealed((RuntimeObject*)L_7, cppGetOutputLabelFromHashDelegate_t333F4644517C361C40991DB87E3251DAD5200E20_il2cpp_TypeInfo_var)));
		intptr_t L_10 = cppGetOutputLabelFromHashDelegate_Invoke_m0E5C809804AAEDABB89A044261861EC2AEACE83C(((cppGetOutputLabelFromHashDelegate_t333F4644517C361C40991DB87E3251DAD5200E20 *)IsInstSealed((RuntimeObject*)L_7, cppGetOutputLabelFromHashDelegate_t333F4644517C361C40991DB87E3251DAD5200E20_il2cpp_TypeInfo_var)), L_8, L_9, /*hidden argument*/NULL);
		return (intptr_t)L_10;
	}
}
// System.IntPtr Substance.Platform.NativeFunctions::cppGetOutputIdentifierFromHash(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeFunctions_cppGetOutputIdentifierFromHash_mEF44B84681F8A2899EC5A3F347963231B83079CA (String_t* ___pAssetPath0, uint32_t ___outputHash1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppGetOutputIdentifierFromHash_mEF44B84681F8A2899EC5A3F347963231B83079CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppGetOutputIdentifierFromHash_mEF44B84681F8A2899EC5A3F347963231B83079CA_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}

IL_0022:
	{
		// cppGetOutputIdentifierFromHashDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppGetOutputIdentifierFromHashDelegate)) as cppGetOutputIdentifierFromHashDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppGetOutputIdentifierFromHashDelegate_t5B7B89C8B3B9420EE6235BB7EB2DC66840151F76_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (IntPtr)function.Invoke(pAssetPath, outputHash);
		String_t* L_8 = ___pAssetPath0;
		uint32_t L_9 = ___outputHash1;
		NullCheck(((cppGetOutputIdentifierFromHashDelegate_t5B7B89C8B3B9420EE6235BB7EB2DC66840151F76 *)IsInstSealed((RuntimeObject*)L_7, cppGetOutputIdentifierFromHashDelegate_t5B7B89C8B3B9420EE6235BB7EB2DC66840151F76_il2cpp_TypeInfo_var)));
		intptr_t L_10 = cppGetOutputIdentifierFromHashDelegate_Invoke_m7C6EDFEEC4C876F14289A9FF9302A028B340054B(((cppGetOutputIdentifierFromHashDelegate_t5B7B89C8B3B9420EE6235BB7EB2DC66840151F76 *)IsInstSealed((RuntimeObject*)L_7, cppGetOutputIdentifierFromHashDelegate_t5B7B89C8B3B9420EE6235BB7EB2DC66840151F76_il2cpp_TypeInfo_var)), L_8, L_9, /*hidden argument*/NULL);
		return (intptr_t)L_10;
	}
}
// System.Boolean Substance.Platform.NativeFunctions::cppIsImageOutputFromHash(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeFunctions_cppIsImageOutputFromHash_mA2ABD264A294567F12DBF6F971C349F450A876B8 (String_t* ___pAssetPath0, uint32_t ___outputHash1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppIsImageOutputFromHash_mA2ABD264A294567F12DBF6F971C349F450A876B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppIsImageOutputFromHash_mA2ABD264A294567F12DBF6F971C349F450A876B8_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001e:
	{
		// cppIsImageOutputFromHashDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppIsImageOutputFromHashDelegate)) as cppIsImageOutputFromHashDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppIsImageOutputFromHashDelegate_t4A3A006107496BB4BA90C54E99C1E6CB1D3896AA_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (bool)function.Invoke(pAssetPath, outputHash);
		String_t* L_8 = ___pAssetPath0;
		uint32_t L_9 = ___outputHash1;
		NullCheck(((cppIsImageOutputFromHashDelegate_t4A3A006107496BB4BA90C54E99C1E6CB1D3896AA *)IsInstSealed((RuntimeObject*)L_7, cppIsImageOutputFromHashDelegate_t4A3A006107496BB4BA90C54E99C1E6CB1D3896AA_il2cpp_TypeInfo_var)));
		bool L_10 = cppIsImageOutputFromHashDelegate_Invoke_mFE60F253BFB31DA499C0EDFCD8F79184A02A61C2(((cppIsImageOutputFromHashDelegate_t4A3A006107496BB4BA90C54E99C1E6CB1D3896AA *)IsInstSealed((RuntimeObject*)L_7, cppIsImageOutputFromHashDelegate_t4A3A006107496BB4BA90C54E99C1E6CB1D3896AA_il2cpp_TypeInfo_var)), L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.IntPtr Substance.Platform.NativeFunctions::cppGetOutputChannelStrFromHash(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeFunctions_cppGetOutputChannelStrFromHash_mB29E89DBCE3EA966009ADC5C488FAB09F673D61A (String_t* ___pAssetPath0, uint32_t ___outputHash1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppGetOutputChannelStrFromHash_mB29E89DBCE3EA966009ADC5C488FAB09F673D61A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppGetOutputChannelStrFromHash_mB29E89DBCE3EA966009ADC5C488FAB09F673D61A_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}

IL_0022:
	{
		// cppGetOutputChannelStrFromHashDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppGetOutputChannelStrFromHashDelegate)) as cppGetOutputChannelStrFromHashDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppGetOutputChannelStrFromHashDelegate_t1A4B5521992D275C1404FA35AC39FC903DEC7801_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (IntPtr)function.Invoke(pAssetPath, outputHash);
		String_t* L_8 = ___pAssetPath0;
		uint32_t L_9 = ___outputHash1;
		NullCheck(((cppGetOutputChannelStrFromHashDelegate_t1A4B5521992D275C1404FA35AC39FC903DEC7801 *)IsInstSealed((RuntimeObject*)L_7, cppGetOutputChannelStrFromHashDelegate_t1A4B5521992D275C1404FA35AC39FC903DEC7801_il2cpp_TypeInfo_var)));
		intptr_t L_10 = cppGetOutputChannelStrFromHashDelegate_Invoke_m6678AA819236E63F982A6B01B9325B35DD2373EF(((cppGetOutputChannelStrFromHashDelegate_t1A4B5521992D275C1404FA35AC39FC903DEC7801 *)IsInstSealed((RuntimeObject*)L_7, cppGetOutputChannelStrFromHashDelegate_t1A4B5521992D275C1404FA35AC39FC903DEC7801_il2cpp_TypeInfo_var)), L_8, L_9, /*hidden argument*/NULL);
		return (intptr_t)L_10;
	}
}
// System.Void Substance.Platform.NativeFunctions::cppOnGenerateMipMapsChanged(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFunctions_cppOnGenerateMipMapsChanged_mC627C4DF878ACDBAC55501A8720B112972ABE6AA (intptr_t ___graphHandle0, bool ___bGenerateMipMaps1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppOnGenerateMipMapsChanged_mC627C4DF878ACDBAC55501A8720B112972ABE6AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppOnGenerateMipMapsChanged_mC627C4DF878ACDBAC55501A8720B112972ABE6AA_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// cppOnGenerateMipMapsChangedDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppOnGenerateMipMapsChangedDelegate)) as cppOnGenerateMipMapsChangedDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppOnGenerateMipMapsChangedDelegate_tEF82EF11ED512D83B6FF4C53B675E4050788A379_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// function.Invoke(graphHandle, bGenerateMipMaps);
		intptr_t L_8 = ___graphHandle0;
		bool L_9 = ___bGenerateMipMaps1;
		NullCheck(((cppOnGenerateMipMapsChangedDelegate_tEF82EF11ED512D83B6FF4C53B675E4050788A379 *)IsInstSealed((RuntimeObject*)L_7, cppOnGenerateMipMapsChangedDelegate_tEF82EF11ED512D83B6FF4C53B675E4050788A379_il2cpp_TypeInfo_var)));
		cppOnGenerateMipMapsChangedDelegate_Invoke_m3BA28D1FD97DE354CFFDCD793ED82BFB98D1956A(((cppOnGenerateMipMapsChangedDelegate_tEF82EF11ED512D83B6FF4C53B675E4050788A379 *)IsInstSealed((RuntimeObject*)L_7, cppOnGenerateMipMapsChangedDelegate_tEF82EF11ED512D83B6FF4C53B675E4050788A379_il2cpp_TypeInfo_var)), (intptr_t)L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Substance.Platform.NativeFunctions::cppModifyTexturePacking(System.IntPtr,System.String,System.Int32[],System.String,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFunctions_cppModifyTexturePacking_m4F863347D305BEE987F362D53CB4A8F7CA663260 (intptr_t ___graphHandle0, String_t* ___pSourceNames1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___pSourceComponents2, String_t* ___pTargetName3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___pTargetComponents4, int32_t ___pNumComponents5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppModifyTexturePacking_m4F863347D305BEE987F362D53CB4A8F7CA663260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppModifyTexturePacking_m4F863347D305BEE987F362D53CB4A8F7CA663260_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// cppModifyTexturePackingDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppModifyTexturePackingDelegate)) as cppModifyTexturePackingDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppModifyTexturePackingDelegate_tF5AFAA7F80AB9BD8EA76D64F744DA92B36739D00_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// function.Invoke(graphHandle,
		//                 pSourceNames, pSourceComponents,
		//                 pTargetName, pTargetComponents,
		//                 pNumComponents);
		intptr_t L_8 = ___graphHandle0;
		String_t* L_9 = ___pSourceNames1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = ___pSourceComponents2;
		String_t* L_11 = ___pTargetName3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = ___pTargetComponents4;
		int32_t L_13 = ___pNumComponents5;
		NullCheck(((cppModifyTexturePackingDelegate_tF5AFAA7F80AB9BD8EA76D64F744DA92B36739D00 *)IsInstSealed((RuntimeObject*)L_7, cppModifyTexturePackingDelegate_tF5AFAA7F80AB9BD8EA76D64F744DA92B36739D00_il2cpp_TypeInfo_var)));
		cppModifyTexturePackingDelegate_Invoke_m167D0258DF3C9C5BDC0827A4D3BF206135F3965B(((cppModifyTexturePackingDelegate_tF5AFAA7F80AB9BD8EA76D64F744DA92B36739D00 *)IsInstSealed((RuntimeObject*)L_7, cppModifyTexturePackingDelegate_tF5AFAA7F80AB9BD8EA76D64F744DA92B36739D00_il2cpp_TypeInfo_var)), (intptr_t)L_8, L_9, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Substance.Platform.NativeFunctions::cppGetTextureDimensions(System.IntPtr,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFunctions_cppGetTextureDimensions_mA2E9BB18D0B6119DE4F23555B838FA1E7CFC9CD4 (intptr_t ___graphHandle0, int32_t* ___pWidth1, int32_t* ___pHeight2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppGetTextureDimensions_mA2E9BB18D0B6119DE4F23555B838FA1E7CFC9CD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppGetTextureDimensions_mA2E9BB18D0B6119DE4F23555B838FA1E7CFC9CD4_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// pWidth = 256;
		int32_t* L_4 = ___pWidth1;
		*((int32_t*)L_4) = (int32_t)((int32_t)256);
		// pHeight = 256;
		int32_t* L_5 = ___pHeight2;
		*((int32_t*)L_5) = (int32_t)((int32_t)256);
		// return;
		return;
	}

IL_002b:
	{
		// cppGetTextureDimensionsDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppGetTextureDimensionsDelegate)) as cppGetTextureDimensionsDelegate;
		String_t* L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (cppGetTextureDimensionsDelegate_tFCCE46F41215E38CA52FE5B6B5540C89131E7793_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_9 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_6, L_8, /*hidden argument*/NULL);
		// function.Invoke(graphHandle, out pWidth, out pHeight);
		intptr_t L_10 = ___graphHandle0;
		int32_t* L_11 = ___pWidth1;
		int32_t* L_12 = ___pHeight2;
		NullCheck(((cppGetTextureDimensionsDelegate_tFCCE46F41215E38CA52FE5B6B5540C89131E7793 *)IsInstSealed((RuntimeObject*)L_9, cppGetTextureDimensionsDelegate_tFCCE46F41215E38CA52FE5B6B5540C89131E7793_il2cpp_TypeInfo_var)));
		cppGetTextureDimensionsDelegate_Invoke_mD3C920C662DB51022C74A5DE5ADB0B7A8EEA6020(((cppGetTextureDimensionsDelegate_tFCCE46F41215E38CA52FE5B6B5540C89131E7793 *)IsInstSealed((RuntimeObject*)L_9, cppGetTextureDimensionsDelegate_tFCCE46F41215E38CA52FE5B6B5540C89131E7793_il2cpp_TypeInfo_var)), (intptr_t)L_10, (int32_t*)L_11, (int32_t*)L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr Substance.Platform.NativeFunctions::cppDuplicateGraphInstance(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeFunctions_cppDuplicateGraphInstance_m7FB6837B160CA61D218F5FDE56E66A02233A9085 (intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppDuplicateGraphInstance_m7FB6837B160CA61D218F5FDE56E66A02233A9085_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppDuplicateGraphInstance_m7FB6837B160CA61D218F5FDE56E66A02233A9085_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}

IL_0022:
	{
		// cppDuplicateGraphInstanceDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppDuplicateGraphInstanceDelegate)) as cppDuplicateGraphInstanceDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppDuplicateGraphInstanceDelegate_t7E7635990B48BFFE1749B10C15C6329FDC482B7E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (IntPtr)function.Invoke(graphHandle);
		intptr_t L_8 = ___graphHandle0;
		NullCheck(((cppDuplicateGraphInstanceDelegate_t7E7635990B48BFFE1749B10C15C6329FDC482B7E *)IsInstSealed((RuntimeObject*)L_7, cppDuplicateGraphInstanceDelegate_t7E7635990B48BFFE1749B10C15C6329FDC482B7E_il2cpp_TypeInfo_var)));
		intptr_t L_9 = cppDuplicateGraphInstanceDelegate_Invoke_m2E0604EAAAE5989CA62F26CAE795051C30306D2F(((cppDuplicateGraphInstanceDelegate_t7E7635990B48BFFE1749B10C15C6329FDC482B7E *)IsInstSealed((RuntimeObject*)L_7, cppDuplicateGraphInstanceDelegate_t7E7635990B48BFFE1749B10C15C6329FDC482B7E_il2cpp_TypeInfo_var)), (intptr_t)L_8, /*hidden argument*/NULL);
		return (intptr_t)L_9;
	}
}
// System.Void Substance.Platform.NativeFunctions::cppRemoveGraphInstance(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFunctions_cppRemoveGraphInstance_m4FBDE3B74DA27467A96DB296824B15EBC4D2E9CF (intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppRemoveGraphInstance_m4FBDE3B74DA27467A96DB296824B15EBC4D2E9CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppRemoveGraphInstance_m4FBDE3B74DA27467A96DB296824B15EBC4D2E9CF_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// cppRemoveGraphInstanceDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppRemoveGraphInstanceDelegate)) as cppRemoveGraphInstanceDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppRemoveGraphInstanceDelegate_tDD1B39D6EF74479C5A5938EBF64076DD892F9265_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// function.Invoke(graphHandle);
		intptr_t L_8 = ___graphHandle0;
		NullCheck(((cppRemoveGraphInstanceDelegate_tDD1B39D6EF74479C5A5938EBF64076DD892F9265 *)IsInstSealed((RuntimeObject*)L_7, cppRemoveGraphInstanceDelegate_tDD1B39D6EF74479C5A5938EBF64076DD892F9265_il2cpp_TypeInfo_var)));
		cppRemoveGraphInstanceDelegate_Invoke_m247F0F5F55F682BD20AC304525951CE2E67436AA(((cppRemoveGraphInstanceDelegate_tDD1B39D6EF74479C5A5938EBF64076DD892F9265 *)IsInstSealed((RuntimeObject*)L_7, cppRemoveGraphInstanceDelegate_tDD1B39D6EF74479C5A5938EBF64076DD892F9265_il2cpp_TypeInfo_var)), (intptr_t)L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Substance.Platform.NativeFunctions::cppListInputs(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFunctions_cppListInputs_m192605C4D5B8953C58BBB630FC58748BEC464921 (intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppListInputs_m192605C4D5B8953C58BBB630FC58748BEC464921_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppListInputs_m192605C4D5B8953C58BBB630FC58748BEC464921_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// return -2;
		return ((int32_t)-2);
	}

IL_001f:
	{
		// cppListInputsDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppListInputsDelegate)) as cppListInputsDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppListInputsDelegate_t53CEDDE532A51ABDBA2A02893E487B039F70F31D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (int)function.Invoke(graphHandle);
		intptr_t L_8 = ___graphHandle0;
		NullCheck(((cppListInputsDelegate_t53CEDDE532A51ABDBA2A02893E487B039F70F31D *)IsInstSealed((RuntimeObject*)L_7, cppListInputsDelegate_t53CEDDE532A51ABDBA2A02893E487B039F70F31D_il2cpp_TypeInfo_var)));
		int32_t L_9 = cppListInputsDelegate_Invoke_m0D39FA850E5354C968FC0E4BE56B2AB3B76B7720(((cppListInputsDelegate_t53CEDDE532A51ABDBA2A02893E487B039F70F31D *)IsInstSealed((RuntimeObject*)L_7, cppListInputsDelegate_t53CEDDE532A51ABDBA2A02893E487B039F70F31D_il2cpp_TypeInfo_var)), (intptr_t)L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.IntPtr Substance.Platform.NativeFunctions::cppGetChannelNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeFunctions_cppGetChannelNames_m40BD9846F02777E0DE701C761693FDAC43707799 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppGetChannelNames_m40BD9846F02777E0DE701C761693FDAC43707799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppGetChannelNames_m40BD9846F02777E0DE701C761693FDAC43707799_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}

IL_0022:
	{
		// cppGetChannelNamesDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppGetChannelNamesDelegate)) as cppGetChannelNamesDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppGetChannelNamesDelegate_t400B9CD13926147699DD27F112795DB88F8E3498_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (IntPtr)function.Invoke();
		NullCheck(((cppGetChannelNamesDelegate_t400B9CD13926147699DD27F112795DB88F8E3498 *)IsInstSealed((RuntimeObject*)L_7, cppGetChannelNamesDelegate_t400B9CD13926147699DD27F112795DB88F8E3498_il2cpp_TypeInfo_var)));
		intptr_t L_8 = cppGetChannelNamesDelegate_Invoke_mE3B40AC757FAC0FDDAF397088455B0169BF4B977(((cppGetChannelNamesDelegate_t400B9CD13926147699DD27F112795DB88F8E3498 *)IsInstSealed((RuntimeObject*)L_7, cppGetChannelNamesDelegate_t400B9CD13926147699DD27F112795DB88F8E3498_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return (intptr_t)L_8;
	}
}
// System.UInt32 Substance.Platform.NativeFunctions::cppGetOutputHash(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeFunctions_cppGetOutputHash_mC909DB5C2E90FDD42EE9DA0E6D8653D58BC8E01E (intptr_t ___graphHandle0, int32_t ___pOutputIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppGetOutputHash_mC909DB5C2E90FDD42EE9DA0E6D8653D58BC8E01E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppGetOutputHash_mC909DB5C2E90FDD42EE9DA0E6D8653D58BC8E01E_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_001e:
	{
		// cppGetOutputHashDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppGetOutputHashDelegate)) as cppGetOutputHashDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppGetOutputHashDelegate_t35115A8C2400D889E62AB407CEA182F1B58B6C8C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (uint)function.Invoke(graphHandle, pOutputIndex);
		intptr_t L_8 = ___graphHandle0;
		int32_t L_9 = ___pOutputIndex1;
		NullCheck(((cppGetOutputHashDelegate_t35115A8C2400D889E62AB407CEA182F1B58B6C8C *)IsInstSealed((RuntimeObject*)L_7, cppGetOutputHashDelegate_t35115A8C2400D889E62AB407CEA182F1B58B6C8C_il2cpp_TypeInfo_var)));
		uint32_t L_10 = cppGetOutputHashDelegate_Invoke_mA5E06916FA1305322ADF360FECCE96FA046FF5BD(((cppGetOutputHashDelegate_t35115A8C2400D889E62AB407CEA182F1B58B6C8C *)IsInstSealed((RuntimeObject*)L_7, cppGetOutputHashDelegate_t35115A8C2400D889E62AB407CEA182F1B58B6C8C_il2cpp_TypeInfo_var)), (intptr_t)L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.IntPtr Substance.Platform.NativeFunctions::cppGetEngineVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeFunctions_cppGetEngineVersion_mE10F291EA5E1BC98C84FDF95A0CE91F76B607457 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppGetEngineVersion_mE10F291EA5E1BC98C84FDF95A0CE91F76B607457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppGetEngineVersion_mE10F291EA5E1BC98C84FDF95A0CE91F76B607457_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}

IL_0022:
	{
		// cppGetEngineVersionDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppGetEngineVersionDelegate)) as cppGetEngineVersionDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppGetEngineVersionDelegate_t13B392C6083E0FC31AC156F8C23900F9EA473A2B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (IntPtr)function.Invoke();
		NullCheck(((cppGetEngineVersionDelegate_t13B392C6083E0FC31AC156F8C23900F9EA473A2B *)IsInstSealed((RuntimeObject*)L_7, cppGetEngineVersionDelegate_t13B392C6083E0FC31AC156F8C23900F9EA473A2B_il2cpp_TypeInfo_var)));
		intptr_t L_8 = cppGetEngineVersionDelegate_Invoke_m751EDDFC1E6D6D49DC3DACC43D9B61A4146553D4(((cppGetEngineVersionDelegate_t13B392C6083E0FC31AC156F8C23900F9EA473A2B *)IsInstSealed((RuntimeObject*)L_7, cppGetEngineVersionDelegate_t13B392C6083E0FC31AC156F8C23900F9EA473A2B_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return (intptr_t)L_8;
	}
}
// System.Int32 Substance.Platform.NativeFunctions::cppGetNumberOfDuplicatedGraphs(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFunctions_cppGetNumberOfDuplicatedGraphs_m9614B5F9C8B6476AFCC76E90D984E3D53B8DEA7D (intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppGetNumberOfDuplicatedGraphs_m9614B5F9C8B6476AFCC76E90D984E3D53B8DEA7D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppGetNumberOfDuplicatedGraphs_m9614B5F9C8B6476AFCC76E90D984E3D53B8DEA7D_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_001e:
	{
		// cppGetNumberOfDuplicatedGraphsDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppGetNumberOfDuplicatedGraphsDelegate)) as cppGetNumberOfDuplicatedGraphsDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppGetNumberOfDuplicatedGraphsDelegate_t79DCEF69BCD3A8DA7F6E52779E5188CC7FA6E03A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (int)function.Invoke(graphHandle);
		intptr_t L_8 = ___graphHandle0;
		NullCheck(((cppGetNumberOfDuplicatedGraphsDelegate_t79DCEF69BCD3A8DA7F6E52779E5188CC7FA6E03A *)IsInstSealed((RuntimeObject*)L_7, cppGetNumberOfDuplicatedGraphsDelegate_t79DCEF69BCD3A8DA7F6E52779E5188CC7FA6E03A_il2cpp_TypeInfo_var)));
		int32_t L_9 = cppGetNumberOfDuplicatedGraphsDelegate_Invoke_m145927C729F6C2B080BB4C9293C6798E794636F0(((cppGetNumberOfDuplicatedGraphsDelegate_t79DCEF69BCD3A8DA7F6E52779E5188CC7FA6E03A *)IsInstSealed((RuntimeObject*)L_7, cppGetNumberOfDuplicatedGraphsDelegate_t79DCEF69BCD3A8DA7F6E52779E5188CC7FA6E03A_il2cpp_TypeInfo_var)), (intptr_t)L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Int32 Substance.Platform.NativeFunctions::cppComputeOldFileID(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFunctions_cppComputeOldFileID_mB64280C12A4DD868C3AC92F4208A446C912E093E (String_t* ___pCharArray0, int32_t ___pTypeConstant1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFunctions_cppComputeOldFileID_mB64280C12A4DD868C3AC92F4208A446C912E093E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string myName = System.Reflection.MethodBase.GetCurrentMethod().Name;
		MethodBase_t * L_0 = il2cpp_codegen_get_method_object(NativeFunctions_cppComputeOldFileID_mB64280C12A4DD868C3AC92F4208A446C912E093E_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (DLLHelpers.DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_001e:
	{
		// cppGetOldFileIdDelegate function = DLLHelpers.GetFunction(
		//     myName, typeof(cppGetOldFileIdDelegate)) as cppGetOldFileIdDelegate;
		String_t* L_4 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (cppGetOldFileIdDelegate_tFF91C0780AFFFBAC0F8FEEB180BCECCC9276FB0E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		Delegate_t * L_7 = DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96(L_4, L_6, /*hidden argument*/NULL);
		// return (int)function.Invoke(pCharArray, pTypeConstant);
		String_t* L_8 = ___pCharArray0;
		int32_t L_9 = ___pTypeConstant1;
		NullCheck(((cppGetOldFileIdDelegate_tFF91C0780AFFFBAC0F8FEEB180BCECCC9276FB0E *)IsInstSealed((RuntimeObject*)L_7, cppGetOldFileIdDelegate_tFF91C0780AFFFBAC0F8FEEB180BCECCC9276FB0E_il2cpp_TypeInfo_var)));
		int32_t L_10 = cppGetOldFileIdDelegate_Invoke_mE23AB779A72348A019EBF2446937A5380CC65E4E(((cppGetOldFileIdDelegate_tFF91C0780AFFFBAC0F8FEEB180BCECCC9276FB0E *)IsInstSealed((RuntimeObject*)L_7, cppGetOldFileIdDelegate_tFF91C0780AFFFBAC0F8FEEB180BCECCC9276FB0E_il2cpp_TypeInfo_var)), L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void Substance.Platform.NativeFunctions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFunctions__ctor_mB9781F5600C9E62631F04939DC3CBAA871797663 (NativeFunctions_t392AC623174D54E9D6C9DD3282ADBD00FE57579B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.IntPtr Substance.Platform.NativeFunctions_DLLHelpers::LoadLibrary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DLLHelpers_LoadLibrary_m48F6E1B5DAF1FEBE1E1F064FB448F452CE5310D2 (String_t* ___filename0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "LoadLibrary", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___filename0' to native representation
	Il2CppChar* ____filename0_marshaled = NULL;
	if (___filename0 != NULL)
	{
		____filename0_marshaled = ___filename0->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(LoadLibrary)(____filename0_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____filename0_marshaled);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// System.IntPtr Substance.Platform.NativeFunctions_DLLHelpers::GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DLLHelpers_GetProcAddress_m8791A3BD2232AE3873C5FA87FC4CD37A20C337B4 (intptr_t ___hModule0, String_t* ___procname1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "GetProcAddress", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___procname1' to native representation
	char* ____procname1_marshaled = NULL;
	____procname1_marshaled = il2cpp_codegen_marshal_string(___procname1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetProcAddress)(___hModule0, ____procname1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___hModule0, ____procname1_marshaled);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling cleanup of parameter '___procname1' native representation
	il2cpp_codegen_marshal_free(____procname1_marshaled);
	____procname1_marshaled = NULL;

	return returnValue;
}
// System.Boolean Substance.Platform.NativeFunctions_DLLHelpers::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DLLHelpers_FreeLibrary_mB59713430F74AA6BC896A1C1A3B46FB2089AD211 (intptr_t ___hModule0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "FreeLibrary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FreeLibrary)(___hModule0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___hModule0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
// System.IntPtr Substance.Platform.NativeFunctions_DLLHelpers::dlopen(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DLLHelpers_dlopen_m1D8A1C48A193F733D43B2C15E133E94B008F54E6 (String_t* ___filename0, int32_t ___flags1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libdl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libdl"), "dlopen", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___filename0' to native representation
	char* ____filename0_marshaled = NULL;
	____filename0_marshaled = il2cpp_codegen_marshal_string(___filename0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlopen)(____filename0_marshaled, ___flags1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____filename0_marshaled, ___flags1);
	#endif

	// Marshaling cleanup of parameter '___filename0' native representation
	il2cpp_codegen_marshal_free(____filename0_marshaled);
	____filename0_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Substance.Platform.NativeFunctions_DLLHelpers::dlsym(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DLLHelpers_dlsym_m30D8BA31F2E3A687FF1EB8EA534CC8781FE42AD8 (intptr_t ___handle0, String_t* ___symbol1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libdl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libdl"), "dlsym", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___symbol1' to native representation
	char* ____symbol1_marshaled = NULL;
	____symbol1_marshaled = il2cpp_codegen_marshal_string(___symbol1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlsym)(___handle0, ____symbol1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___handle0, ____symbol1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___symbol1' native representation
	il2cpp_codegen_marshal_free(____symbol1_marshaled);
	____symbol1_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Substance.Platform.NativeFunctions_DLLHelpers::dlerror()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DLLHelpers_dlerror_m5095C1C697F17CC3974A7BA8A832D98FD2545BC2 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libdl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libdl"), "dlerror", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(dlerror)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 Substance.Platform.NativeFunctions_DLLHelpers::dlclose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DLLHelpers_dlclose_m080A3106CCAD4450776BF9A0F577F86B6DE627B9 (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libdl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libdl"), "dlclose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libdl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(dlclose)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// System.Object[] Substance.Platform.NativeFunctions_DLLHelpers::GetParams(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* DLLHelpers_GetParams_mC108CD40EF2081A658CDA50A3E5D2EF2ED7A5893 (int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DLLHelpers_GetParams_mC108CD40EF2081A658CDA50A3E5D2EF2ED7A5893_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Array.Resize<object>(ref mParams, size);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		int32_t L_0 = ___size0;
		Array_Resize_TisRuntimeObject_m6F70613DBB973872E27DFD9A42F7653C55337A64((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE**)(((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_address_of_mParams_1()), L_0, /*hidden argument*/Array_Resize_TisRuntimeObject_m6F70613DBB973872E27DFD9A42F7653C55337A64_RuntimeMethod_var);
		// return mParams;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_mParams_1();
		return L_1;
	}
}
// System.Void Substance.Platform.NativeFunctions_DLLHelpers::LoadDLL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLLHelpers_LoadDLL_mE69BD704DAC35F9063529104E83FE9D981691B74 (String_t* ___dataPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DLLHelpers_LoadDLL_mE69BD704DAC35F9063529104E83FE9D981691B74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00af;
		}
	}
	{
		// if (IsWindows())
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		bool L_2 = DLLHelpers_IsWindows_m10F3B4C3B65F72876ECE7540B2F5CA176C3A3933(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0058;
		}
	}
	{
		// LibDestination = Path.Combine(dataPath, "Plugins/Substance.Engine.dll");
		String_t* L_3 = ___dataPath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_4 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_3, _stringLiteral4D8FDBCAF16E510B340E2A2215DBFCC0E665B66B, /*hidden argument*/NULL);
		// DllHandle = LoadLibrary(LibDestination);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_5 = DLLHelpers_LoadLibrary_m48F6E1B5DAF1FEBE1E1F064FB448F452CE5310D2(L_4, /*hidden argument*/NULL);
		((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->set_DllHandle_0((intptr_t)L_5);
		// if (DllHandle == IntPtr.Zero)
		intptr_t L_6 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_7 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_6, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0094;
		}
	}
	{
		// LibDestination = Path.Combine(dataPath, "Plugins/x86_64/Substance.Engine.dll");
		String_t* L_8 = ___dataPath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_9 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_8, _stringLiteralF96FD4DB7FB84C27965C15E58B0D37005FA518E6, /*hidden argument*/NULL);
		// DllHandle = LoadLibrary(LibDestination);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_10 = DLLHelpers_LoadLibrary_m48F6E1B5DAF1FEBE1E1F064FB448F452CE5310D2(L_9, /*hidden argument*/NULL);
		((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->set_DllHandle_0((intptr_t)L_10);
		// }
		goto IL_0094;
	}

IL_0058:
	{
		// else if (IsMac())
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		bool L_11 = DLLHelpers_IsMac_m3206ED2DEDE681E1283077CE17812F7DE52F8CDF(/*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0077;
		}
	}
	{
		// LibDestination = Path.Combine(dataPath, "Plugins/Substance.Engine.bundle/Contents/MacOS/Substance.Engine");
		String_t* L_12 = ___dataPath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_13 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_12, _stringLiteral548EF31C1BF4F84F21BE48C60813ABA567BBC59D, /*hidden argument*/NULL);
		// DllHandle = dlopen(LibDestination, 3);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_14 = DLLHelpers_dlopen_m1D8A1C48A193F733D43B2C15E133E94B008F54E6(L_13, 3, /*hidden argument*/NULL);
		((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->set_DllHandle_0((intptr_t)L_14);
		// }
		goto IL_0094;
	}

IL_0077:
	{
		// else if (IsLinux())
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		bool L_15 = DLLHelpers_IsLinux_mDEC21DA751A17AFA3124984CA218D1BF9509FCFA(/*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0094;
		}
	}
	{
		// LibDestination = Path.Combine(dataPath, "Plugins/libSubstance.Engine.so");
		String_t* L_16 = ___dataPath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_17 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_16, _stringLiteralE4461BD4AA23FCFB38A024B997B86CCE4F0DEFCE, /*hidden argument*/NULL);
		// DllHandle = dlopen(LibDestination, 3);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_18 = DLLHelpers_dlopen_m1D8A1C48A193F733D43B2C15E133E94B008F54E6(L_17, 3, /*hidden argument*/NULL);
		((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->set_DllHandle_0((intptr_t)L_18);
	}

IL_0094:
	{
		// if (DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_19 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_20 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_19, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00af;
		}
	}
	{
		// Debug.LogError("Substance engine failed to load.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral2FE81C7E153DC5EB28F1D5FBC05D22A4D0059925, /*hidden argument*/NULL);
	}

IL_00af:
	{
		// }
		return;
	}
}
// System.Void Substance.Platform.NativeFunctions_DLLHelpers::UnloadDLL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLLHelpers_UnloadDLL_mF470A25B98D913F2A0AF3CEBA93CD284B28BCD41 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DLLHelpers_UnloadDLL_mF470A25B98D913F2A0AF3CEBA93CD284B28BCD41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DllHandle != IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		// if (IsWindows())
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		bool L_2 = DLLHelpers_IsWindows_m10F3B4C3B65F72876ECE7540B2F5CA176C3A3933(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// FreeLibrary(DllHandle);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_3 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		DLLHelpers_FreeLibrary_mB59713430F74AA6BC896A1C1A3B46FB2089AD211((intptr_t)L_3, /*hidden argument*/NULL);
		// }
		goto IL_003e;
	}

IL_0025:
	{
		// else if (IsMac() || IsLinux())
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		bool L_4 = DLLHelpers_IsMac_m3206ED2DEDE681E1283077CE17812F7DE52F8CDF(/*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		bool L_5 = DLLHelpers_IsLinux_mDEC21DA751A17AFA3124984CA218D1BF9509FCFA(/*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}

IL_0033:
	{
		// dlclose(DllHandle);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_6 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		DLLHelpers_dlclose_m080A3106CCAD4450776BF9A0F577F86B6DE627B9((intptr_t)L_6, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// DllHandle = IntPtr.Zero;
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->set_DllHandle_0((intptr_t)(0));
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Delegate Substance.Platform.NativeFunctions_DLLHelpers::GetFunction(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96 (String_t* ___funcname0, Type_t * ___t1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DLLHelpers_GetFunction_m87ADADDF7085B848D0DFF618AB6C35293F3A8F96_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// IntPtr ptr = IntPtr.Zero;
		V_0 = (intptr_t)(0);
		// if (DllHandle == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		bool L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// return null;
		return (Delegate_t *)NULL;
	}

IL_0019:
	{
		// if (IsWindows())
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		bool L_2 = DLLHelpers_IsWindows_m10F3B4C3B65F72876ECE7540B2F5CA176C3A3933(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// ptr = GetProcAddress(DllHandle, funcname);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_3 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		String_t* L_4 = ___funcname0;
		intptr_t L_5 = DLLHelpers_GetProcAddress_m8791A3BD2232AE3873C5FA87FC4CD37A20C337B4((intptr_t)L_3, L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		// }
		goto IL_0048;
	}

IL_002e:
	{
		// else if (IsMac() || IsLinux())
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		bool L_6 = DLLHelpers_IsMac_m3206ED2DEDE681E1283077CE17812F7DE52F8CDF(/*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		bool L_7 = DLLHelpers_IsLinux_mDEC21DA751A17AFA3124984CA218D1BF9509FCFA(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}

IL_003c:
	{
		// ptr = dlsym(DllHandle, funcname);
		IL2CPP_RUNTIME_CLASS_INIT(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var);
		intptr_t L_8 = ((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->get_DllHandle_0();
		String_t* L_9 = ___funcname0;
		intptr_t L_10 = DLLHelpers_dlsym_m30D8BA31F2E3A687FF1EB8EA534CC8781FE42AD8((intptr_t)L_8, L_9, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_10;
	}

IL_0048:
	{
		// if (ptr == IntPtr.Zero)
		intptr_t L_11 = V_0;
		bool L_12 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_11, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0057;
		}
	}
	{
		// return null;
		return (Delegate_t *)NULL;
	}

IL_0057:
	{
		// return Marshal.GetDelegateForFunctionPointer(ptr, t);
		intptr_t L_13 = V_0;
		Type_t * L_14 = ___t1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Delegate_t * L_15 = Marshal_GetDelegateForFunctionPointer_mF849209E9D1A0B4735D48FE4CD2E15DEDEB92EC8((intptr_t)L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Boolean Substance.Platform.NativeFunctions_DLLHelpers::IsWindows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DLLHelpers_IsWindows_m10F3B4C3B65F72876ECE7540B2F5CA176C3A3933 (const RuntimeMethod* method)
{
	{
		// return (Application.platform == RuntimePlatform.WindowsEditor
		//         || Application.platform == RuntimePlatform.WindowsPlayer);
		int32_t L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)7)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
	}

IL_0011:
	{
		return (bool)1;
	}
}
// System.Boolean Substance.Platform.NativeFunctions_DLLHelpers::IsMac()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DLLHelpers_IsMac_m3206ED2DEDE681E1283077CE17812F7DE52F8CDF (const RuntimeMethod* method)
{
	{
		// return (Application.platform == RuntimePlatform.OSXEditor
		//         || Application.platform == RuntimePlatform.OSXPlayer);
		int32_t L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}

IL_0010:
	{
		return (bool)1;
	}
}
// System.Boolean Substance.Platform.NativeFunctions_DLLHelpers::IsLinux()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DLLHelpers_IsLinux_mDEC21DA751A17AFA3124984CA218D1BF9509FCFA (const RuntimeMethod* method)
{
	{
		// return (Application.platform == RuntimePlatform.LinuxEditor
		//         || Application.platform == RuntimePlatform.LinuxPlayer);
		int32_t L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)16))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)((int32_t)13)))? 1 : 0);
	}

IL_0013:
	{
		return (bool)1;
	}
}
// System.Void Substance.Platform.NativeFunctions_DLLHelpers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLLHelpers__ctor_m6A7B4F0514BFF52EA148A1579DDD9C2452B1A7C7 (DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Substance.Platform.NativeFunctions_DLLHelpers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLLHelpers__cctor_m8BD763331E9E5728DDA308BAB1C8E2D1AD825EDD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DLLHelpers__cctor_m8BD763331E9E5728DDA308BAB1C8E2D1AD825EDD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static IntPtr DllHandle = IntPtr.Zero;
		((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->set_DllHandle_0((intptr_t)(0));
		// private static object[] mParams = new object[0];
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		((DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_StaticFields*)il2cpp_codegen_static_fields_for(DLLHelpers_tAB88E1EA9E36010CA620A5368804F9D9E57AE3F1_il2cpp_TypeInfo_var))->set_mParams_1(L_0);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_cppApplyPresetDelegate_t0C78DE7374ADF97A9CA1CED0457E5076622F5DDD (cppApplyPresetDelegate_t0C78DE7374ADF97A9CA1CED0457E5076622F5DDD * __this, intptr_t ___graphHandle0, String_t* ___presetStr1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___presetStr1' to native representation
	char* ____presetStr1_marshaled = NULL;
	____presetStr1_marshaled = il2cpp_codegen_marshal_string(___presetStr1);

	// Native function invocation
	il2cppPInvokeFunc(___graphHandle0, ____presetStr1_marshaled);

	// Marshaling cleanup of parameter '___presetStr1' native representation
	il2cpp_codegen_marshal_free(____presetStr1_marshaled);
	____presetStr1_marshaled = NULL;

}
// System.Void Substance.Platform.NativeFunctions_cppApplyPresetDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppApplyPresetDelegate__ctor_m8482F3E505A092CB0188D5AD1B6C8C4037248320 (cppApplyPresetDelegate_t0C78DE7374ADF97A9CA1CED0457E5076622F5DDD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Substance.Platform.NativeFunctions_cppApplyPresetDelegate::Invoke(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppApplyPresetDelegate_Invoke_mB8E57A174A670F7C0356D4511F02830F586BD78B (cppApplyPresetDelegate_t0C78DE7374ADF97A9CA1CED0457E5076622F5DDD * __this, intptr_t ___graphHandle0, String_t* ___presetStr1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___presetStr1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___presetStr1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___presetStr1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___graphHandle0, ___presetStr1);
					else
						GenericVirtActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___graphHandle0, ___presetStr1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0, ___presetStr1);
					else
						VirtActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0, ___presetStr1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), ___presetStr1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___presetStr1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppApplyPresetDelegate::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppApplyPresetDelegate_BeginInvoke_m8CC9DB7B01564180333DCC6557EE00E926E7B71E (cppApplyPresetDelegate_t0C78DE7374ADF97A9CA1CED0457E5076622F5DDD * __this, intptr_t ___graphHandle0, String_t* ___presetStr1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppApplyPresetDelegate_BeginInvoke_m8CC9DB7B01564180333DCC6557EE00E926E7B71E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	__d_args[1] = ___presetStr1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Substance.Platform.NativeFunctions_cppApplyPresetDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppApplyPresetDelegate_EndInvoke_m534DC932BE448438371C1BB52388B247CF66D19A (cppApplyPresetDelegate_t0C78DE7374ADF97A9CA1CED0457E5076622F5DDD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_cppDuplicateGraphInstanceDelegate_t7E7635990B48BFFE1749B10C15C6329FDC482B7E (cppDuplicateGraphInstanceDelegate_t7E7635990B48BFFE1749B10C15C6329FDC482B7E * __this, intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___graphHandle0);

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppDuplicateGraphInstanceDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppDuplicateGraphInstanceDelegate__ctor_mF382F2D77AC86B7164EBA362884A3A94D53A8AD8 (cppDuplicateGraphInstanceDelegate_t7E7635990B48BFFE1749B10C15C6329FDC482B7E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppDuplicateGraphInstanceDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppDuplicateGraphInstanceDelegate_Invoke_m2E0604EAAAE5989CA62F26CAE795051C30306D2F (cppDuplicateGraphInstanceDelegate_t7E7635990B48BFFE1749B10C15C6329FDC482B7E * __this, intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___graphHandle0);
					else
						result = GenericVirtFuncInvoker1< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___graphHandle0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0);
					else
						result = VirtFuncInvoker1< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppDuplicateGraphInstanceDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppDuplicateGraphInstanceDelegate_BeginInvoke_mB35B9826D8F0BC135FE7892D04AB160CCFE1E6D6 (cppDuplicateGraphInstanceDelegate_t7E7635990B48BFFE1749B10C15C6329FDC482B7E * __this, intptr_t ___graphHandle0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppDuplicateGraphInstanceDelegate_BeginInvoke_mB35B9826D8F0BC135FE7892D04AB160CCFE1E6D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppDuplicateGraphInstanceDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppDuplicateGraphInstanceDelegate_EndInvoke_mB6DF7CF6A5F8EBB1A04771DB17309A572D9207FF (cppDuplicateGraphInstanceDelegate_t7E7635990B48BFFE1749B10C15C6329FDC482B7E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_cppFreeMemoryDelegate_t4589A515CC653545394FBA1CB06E4A2C6FFAEAA6 (cppFreeMemoryDelegate_t4589A515CC653545394FBA1CB06E4A2C6FFAEAA6 * __this, intptr_t ___pointer0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___pointer0);

}
// System.Void Substance.Platform.NativeFunctions_cppFreeMemoryDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppFreeMemoryDelegate__ctor_m904362827F03A529832F09F83700A262860D256E (cppFreeMemoryDelegate_t4589A515CC653545394FBA1CB06E4A2C6FFAEAA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Substance.Platform.NativeFunctions_cppFreeMemoryDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppFreeMemoryDelegate_Invoke_m1D7502E18108C8403359765FFDA1C7EFE2C3F719 (cppFreeMemoryDelegate_t4589A515CC653545394FBA1CB06E4A2C6FFAEAA6 * __this, intptr_t ___pointer0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pointer0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pointer0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___pointer0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___pointer0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___pointer0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pointer0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pointer0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___pointer0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___pointer0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppFreeMemoryDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppFreeMemoryDelegate_BeginInvoke_m935E0781C7DA62A9317852BA48E614A794584FD4 (cppFreeMemoryDelegate_t4589A515CC653545394FBA1CB06E4A2C6FFAEAA6 * __this, intptr_t ___pointer0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppFreeMemoryDelegate_BeginInvoke_m935E0781C7DA62A9317852BA48E614A794584FD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pointer0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Substance.Platform.NativeFunctions_cppFreeMemoryDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppFreeMemoryDelegate_EndInvoke_mAA745E1104EE301AFADBA78B9100031B6D2CD86F (cppFreeMemoryDelegate_t4589A515CC653545394FBA1CB06E4A2C6FFAEAA6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_cppGetChannelNamesDelegate_t400B9CD13926147699DD27F112795DB88F8E3498 (cppGetChannelNamesDelegate_t400B9CD13926147699DD27F112795DB88F8E3498 * __this, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppGetChannelNamesDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetChannelNamesDelegate__ctor_m5C6845DF86AE6771EBE569191E027ECF7A92FA4B (cppGetChannelNamesDelegate_t400B9CD13926147699DD27F112795DB88F8E3498 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetChannelNamesDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetChannelNamesDelegate_Invoke_mE3B40AC757FAC0FDDAF397088455B0169BF4B977 (cppGetChannelNamesDelegate_t400B9CD13926147699DD27F112795DB88F8E3498 * __this, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< intptr_t >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< intptr_t >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef intptr_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppGetChannelNamesDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppGetChannelNamesDelegate_BeginInvoke_mB62256AFD2D7E403348A961E5B910E0DE6052525 (cppGetChannelNamesDelegate_t400B9CD13926147699DD27F112795DB88F8E3498 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetChannelNamesDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetChannelNamesDelegate_EndInvoke_mF40FA3A00D9E0ABDACA6A28F20E06DF4C25E50F1 (cppGetChannelNamesDelegate_t400B9CD13926147699DD27F112795DB88F8E3498 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_cppGetColorSpaceListDelegate_t576494AB09EBEA0F0E016425ABB26A39963A9996 (cppGetColorSpaceListDelegate_t576494AB09EBEA0F0E016425ABB26A39963A9996 * __this, intptr_t ___graphHandle0, int32_t ___numOutputs1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___graphHandle0, ___numOutputs1);

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppGetColorSpaceListDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetColorSpaceListDelegate__ctor_mD5AD11EA85A8A8DA37B3CB3F54C9D87CD91BD394 (cppGetColorSpaceListDelegate_t576494AB09EBEA0F0E016425ABB26A39963A9996 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetColorSpaceListDelegate::Invoke(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetColorSpaceListDelegate_Invoke_m8921E191DC9A859099B1A1B3CA0DF11D86AE401C (cppGetColorSpaceListDelegate_t576494AB09EBEA0F0E016425ABB26A39963A9996 * __this, intptr_t ___graphHandle0, int32_t ___numOutputs1, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___numOutputs1, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___numOutputs1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___numOutputs1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< intptr_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___graphHandle0, ___numOutputs1);
					else
						result = GenericVirtFuncInvoker2< intptr_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___graphHandle0, ___numOutputs1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< intptr_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0, ___numOutputs1);
					else
						result = VirtFuncInvoker2< intptr_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0, ___numOutputs1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), ___numOutputs1, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, intptr_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___numOutputs1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppGetColorSpaceListDelegate::BeginInvoke(System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppGetColorSpaceListDelegate_BeginInvoke_mE3761587FE349611F68B10FF4F5F9BF7430BBE1F (cppGetColorSpaceListDelegate_t576494AB09EBEA0F0E016425ABB26A39963A9996 * __this, intptr_t ___graphHandle0, int32_t ___numOutputs1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppGetColorSpaceListDelegate_BeginInvoke_mE3761587FE349611F68B10FF4F5F9BF7430BBE1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___numOutputs1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetColorSpaceListDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetColorSpaceListDelegate_EndInvoke_m55BDEBF05F0798F0BA9DBA6C9683F039829F57FD (cppGetColorSpaceListDelegate_t576494AB09EBEA0F0E016425ABB26A39963A9996 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_cppGetEngineVersionDelegate_t13B392C6083E0FC31AC156F8C23900F9EA473A2B (cppGetEngineVersionDelegate_t13B392C6083E0FC31AC156F8C23900F9EA473A2B * __this, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppGetEngineVersionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetEngineVersionDelegate__ctor_m14EC5645BB01A31E6052958A62770EA1AEE98DDB (cppGetEngineVersionDelegate_t13B392C6083E0FC31AC156F8C23900F9EA473A2B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetEngineVersionDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetEngineVersionDelegate_Invoke_m751EDDFC1E6D6D49DC3DACC43D9B61A4146553D4 (cppGetEngineVersionDelegate_t13B392C6083E0FC31AC156F8C23900F9EA473A2B * __this, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< intptr_t >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< intptr_t >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef intptr_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppGetEngineVersionDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppGetEngineVersionDelegate_BeginInvoke_mFADAD3C37AAACCA39E6EF99C679DB1B89F0A844F (cppGetEngineVersionDelegate_t13B392C6083E0FC31AC156F8C23900F9EA473A2B * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetEngineVersionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetEngineVersionDelegate_EndInvoke_m8B98618C85F1D1AF85D6584C1FD6AD35AA8F5A28 (cppGetEngineVersionDelegate_t13B392C6083E0FC31AC156F8C23900F9EA473A2B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_cppGetInput_FloatDelegate_t221FB909D975EA7ABD8287CD1031D3B939698D2F (cppGetInput_FloatDelegate_t221FB909D975EA7ABD8287CD1031D3B939698D2F * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values2, uint32_t ___numValues3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, float*, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___pInputName1' to native representation
	char* ____pInputName1_marshaled = NULL;
	____pInputName1_marshaled = il2cpp_codegen_marshal_string(___pInputName1);

	// Marshaling of parameter '___values2' to native representation
	float* ____values2_marshaled = NULL;
	if (___values2 != NULL)
	{
		____values2_marshaled = reinterpret_cast<float*>((___values2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(___graphHandle0, ____pInputName1_marshaled, ____values2_marshaled, ___numValues3);

	// Marshaling cleanup of parameter '___pInputName1' native representation
	il2cpp_codegen_marshal_free(____pInputName1_marshaled);
	____pInputName1_marshaled = NULL;

}
// System.Void Substance.Platform.NativeFunctions_cppGetInput_FloatDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetInput_FloatDelegate__ctor_m176B3EFEB9798338534211B0CFAD82AE996E5023 (cppGetInput_FloatDelegate_t221FB909D975EA7ABD8287CD1031D3B939698D2F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Substance.Platform.NativeFunctions_cppGetInput_FloatDelegate::Invoke(System.IntPtr,System.String,System.Single[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetInput_FloatDelegate_Invoke_m72DACAA7CDEDD88A93FE250A551B2CF303E94C80 (cppGetInput_FloatDelegate_t221FB909D975EA7ABD8287CD1031D3B939698D2F * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values2, uint32_t ___numValues3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pInputName1, ___values2, ___numValues3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, String_t*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pInputName1, ___values2, ___numValues3, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< intptr_t, String_t*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, uint32_t >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3);
					else
						GenericVirtActionInvoker4< intptr_t, String_t*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, uint32_t >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< intptr_t, String_t*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3);
					else
						VirtActionInvoker4< intptr_t, String_t*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), ___pInputName1, ___values2, ___numValues3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppGetInput_FloatDelegate::BeginInvoke(System.IntPtr,System.String,System.Single[],System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppGetInput_FloatDelegate_BeginInvoke_m28B158A93172C052C822B8DBFE6C443B3C1175E8 (cppGetInput_FloatDelegate_t221FB909D975EA7ABD8287CD1031D3B939698D2F * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values2, uint32_t ___numValues3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppGetInput_FloatDelegate_BeginInvoke_m28B158A93172C052C822B8DBFE6C443B3C1175E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	__d_args[1] = ___pInputName1;
	__d_args[2] = ___values2;
	__d_args[3] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___numValues3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void Substance.Platform.NativeFunctions_cppGetInput_FloatDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetInput_FloatDelegate_EndInvoke_m3C0FF20CC2AF0B24DF1AA05E999F3E8D21E095FF (cppGetInput_FloatDelegate_t221FB909D975EA7ABD8287CD1031D3B939698D2F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_cppGetInput_IntDelegate_tE2261BA1BAB1478E9C781D857BEF240C820CD8AC (cppGetInput_IntDelegate_tE2261BA1BAB1478E9C781D857BEF240C820CD8AC * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___values2, uint32_t ___numValues3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, int32_t*, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___pInputName1' to native representation
	char* ____pInputName1_marshaled = NULL;
	____pInputName1_marshaled = il2cpp_codegen_marshal_string(___pInputName1);

	// Marshaling of parameter '___values2' to native representation
	int32_t* ____values2_marshaled = NULL;
	if (___values2 != NULL)
	{
		____values2_marshaled = reinterpret_cast<int32_t*>((___values2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(___graphHandle0, ____pInputName1_marshaled, ____values2_marshaled, ___numValues3);

	// Marshaling cleanup of parameter '___pInputName1' native representation
	il2cpp_codegen_marshal_free(____pInputName1_marshaled);
	____pInputName1_marshaled = NULL;

}
// System.Void Substance.Platform.NativeFunctions_cppGetInput_IntDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetInput_IntDelegate__ctor_mE7A1B422E371F30EBE09E0ACC78944720764E7AA (cppGetInput_IntDelegate_tE2261BA1BAB1478E9C781D857BEF240C820CD8AC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Substance.Platform.NativeFunctions_cppGetInput_IntDelegate::Invoke(System.IntPtr,System.String,System.Int32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetInput_IntDelegate_Invoke_mF82C112EA99827DA7BE01EC7E8002F7B04E8F6F3 (cppGetInput_IntDelegate_tE2261BA1BAB1478E9C781D857BEF240C820CD8AC * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___values2, uint32_t ___numValues3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pInputName1, ___values2, ___numValues3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pInputName1, ___values2, ___numValues3, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3);
					else
						GenericVirtActionInvoker4< intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3);
					else
						VirtActionInvoker4< intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), ___pInputName1, ___values2, ___numValues3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppGetInput_IntDelegate::BeginInvoke(System.IntPtr,System.String,System.Int32[],System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppGetInput_IntDelegate_BeginInvoke_mEA70C90B34A581B43AA02A2B8522E9D70453ED00 (cppGetInput_IntDelegate_tE2261BA1BAB1478E9C781D857BEF240C820CD8AC * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___values2, uint32_t ___numValues3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppGetInput_IntDelegate_BeginInvoke_mEA70C90B34A581B43AA02A2B8522E9D70453ED00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	__d_args[1] = ___pInputName1;
	__d_args[2] = ___values2;
	__d_args[3] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___numValues3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void Substance.Platform.NativeFunctions_cppGetInput_IntDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetInput_IntDelegate_EndInvoke_m9916A1ED666CA9E6166F4C8D408CCA645CEF142B (cppGetInput_IntDelegate_tE2261BA1BAB1478E9C781D857BEF240C820CD8AC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_cppGetInput_IntsDelegate_tCAA6271E332B52940991E6D4666833368ACB6001 (cppGetInput_IntsDelegate_tCAA6271E332B52940991E6D4666833368ACB6001 * __this, intptr_t ___graphHandle0, String_t* ___pFieldName1, int32_t ___pNumInputs2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___pFieldName1' to native representation
	char* ____pFieldName1_marshaled = NULL;
	____pFieldName1_marshaled = il2cpp_codegen_marshal_string(___pFieldName1);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___graphHandle0, ____pFieldName1_marshaled, ___pNumInputs2);

	// Marshaling cleanup of parameter '___pFieldName1' native representation
	il2cpp_codegen_marshal_free(____pFieldName1_marshaled);
	____pFieldName1_marshaled = NULL;

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppGetInput_IntsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetInput_IntsDelegate__ctor_m2A1F5573572BE6EA031FF51F17167FC8DEEA4F02 (cppGetInput_IntsDelegate_tCAA6271E332B52940991E6D4666833368ACB6001 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetInput_IntsDelegate::Invoke(System.IntPtr,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetInput_IntsDelegate_Invoke_mDCD7185EA506AFF23EF3F1402450D47250C7E236 (cppGetInput_IntsDelegate_tCAA6271E332B52940991E6D4666833368ACB6001 * __this, intptr_t ___graphHandle0, String_t* ___pFieldName1, int32_t ___pNumInputs2, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (intptr_t, String_t*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pFieldName1, ___pNumInputs2, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t, String_t*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pFieldName1, ___pNumInputs2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (intptr_t, String_t*, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pFieldName1, ___pNumInputs2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< intptr_t, intptr_t, String_t*, int32_t >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pFieldName1, ___pNumInputs2);
					else
						result = GenericVirtFuncInvoker3< intptr_t, intptr_t, String_t*, int32_t >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pFieldName1, ___pNumInputs2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< intptr_t, intptr_t, String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0, ___pFieldName1, ___pNumInputs2);
					else
						result = VirtFuncInvoker3< intptr_t, intptr_t, String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0, ___pFieldName1, ___pNumInputs2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject*, String_t*, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), ___pFieldName1, ___pNumInputs2, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, intptr_t, String_t*, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pFieldName1, ___pNumInputs2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppGetInput_IntsDelegate::BeginInvoke(System.IntPtr,System.String,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppGetInput_IntsDelegate_BeginInvoke_m8337EDA88F4DEC2D73ED186D8BD4BE789B430B6E (cppGetInput_IntsDelegate_tCAA6271E332B52940991E6D4666833368ACB6001 * __this, intptr_t ___graphHandle0, String_t* ___pFieldName1, int32_t ___pNumInputs2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppGetInput_IntsDelegate_BeginInvoke_m8337EDA88F4DEC2D73ED186D8BD4BE789B430B6E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	__d_args[1] = ___pFieldName1;
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___pNumInputs2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetInput_IntsDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetInput_IntsDelegate_EndInvoke_m6492B2EEEA39B2B66894FD4BA62496AC375BB88D (cppGetInput_IntsDelegate_tCAA6271E332B52940991E6D4666833368ACB6001 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_cppGetInput_StringDelegate_t3E2EF81D92442C633BC245D9D6F34238F9B147F7 (cppGetInput_StringDelegate_t3E2EF81D92442C633BC245D9D6F34238F9B147F7 * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___pInputName1' to native representation
	char* ____pInputName1_marshaled = NULL;
	____pInputName1_marshaled = il2cpp_codegen_marshal_string(___pInputName1);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___graphHandle0, ____pInputName1_marshaled);

	// Marshaling cleanup of parameter '___pInputName1' native representation
	il2cpp_codegen_marshal_free(____pInputName1_marshaled);
	____pInputName1_marshaled = NULL;

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppGetInput_StringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetInput_StringDelegate__ctor_m8194D3882C1CC01E409D0C4B1EFE68BCD7A44877 (cppGetInput_StringDelegate_t3E2EF81D92442C633BC245D9D6F34238F9B147F7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetInput_StringDelegate::Invoke(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetInput_StringDelegate_Invoke_mAA2F00244E0C7A705413CE476FB616B5BFFE28BB (cppGetInput_StringDelegate_t3E2EF81D92442C633BC245D9D6F34238F9B147F7 * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pInputName1, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pInputName1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pInputName1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pInputName1);
					else
						result = GenericVirtFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pInputName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0, ___pInputName1);
					else
						result = VirtFuncInvoker2< intptr_t, intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0, ___pInputName1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), ___pInputName1, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pInputName1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppGetInput_StringDelegate::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppGetInput_StringDelegate_BeginInvoke_m2FE0A545E4FDE769EF11314D016E818EC9B07B3C (cppGetInput_StringDelegate_t3E2EF81D92442C633BC245D9D6F34238F9B147F7 * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppGetInput_StringDelegate_BeginInvoke_m2FE0A545E4FDE769EF11314D016E818EC9B07B3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	__d_args[1] = ___pInputName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetInput_StringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetInput_StringDelegate_EndInvoke_m655D2212637D880480F3B6A6A740341798F33FF4 (cppGetInput_StringDelegate_t3E2EF81D92442C633BC245D9D6F34238F9B147F7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_cppGetMComboBoxItemsDelegate_tF4F5718C0676EAED730748585BE30FADC488244D (cppGetMComboBoxItemsDelegate_tF4F5718C0676EAED730748585BE30FADC488244D * __this, intptr_t ___graphHandle0, String_t* ___pIdentifier1, int32_t* ___pNumValues2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___pIdentifier1' to native representation
	char* ____pIdentifier1_marshaled = NULL;
	____pIdentifier1_marshaled = il2cpp_codegen_marshal_string(___pIdentifier1);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___graphHandle0, ____pIdentifier1_marshaled, ___pNumValues2);

	// Marshaling cleanup of parameter '___pIdentifier1' native representation
	il2cpp_codegen_marshal_free(____pIdentifier1_marshaled);
	____pIdentifier1_marshaled = NULL;

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppGetMComboBoxItemsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetMComboBoxItemsDelegate__ctor_m36C6ACF0A616687AED47E875EE7860691A2C727A (cppGetMComboBoxItemsDelegate_tF4F5718C0676EAED730748585BE30FADC488244D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetMComboBoxItemsDelegate::Invoke(System.IntPtr,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetMComboBoxItemsDelegate_Invoke_m6C2096EB88839B128581651726AE4D23B418F2FE (cppGetMComboBoxItemsDelegate_tF4F5718C0676EAED730748585BE30FADC488244D * __this, intptr_t ___graphHandle0, String_t* ___pIdentifier1, int32_t* ___pNumValues2, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (intptr_t, String_t*, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pIdentifier1, ___pNumValues2, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t, String_t*, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pIdentifier1, ___pNumValues2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (intptr_t, String_t*, int32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pIdentifier1, ___pNumValues2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< intptr_t, intptr_t, String_t*, int32_t* >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pIdentifier1, ___pNumValues2);
					else
						result = GenericVirtFuncInvoker3< intptr_t, intptr_t, String_t*, int32_t* >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pIdentifier1, ___pNumValues2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< intptr_t, intptr_t, String_t*, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0, ___pIdentifier1, ___pNumValues2);
					else
						result = VirtFuncInvoker3< intptr_t, intptr_t, String_t*, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0, ___pIdentifier1, ___pNumValues2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject*, String_t*, int32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), ___pIdentifier1, ___pNumValues2, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, intptr_t, String_t*, int32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pIdentifier1, ___pNumValues2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppGetMComboBoxItemsDelegate::BeginInvoke(System.IntPtr,System.String,System.Int32&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppGetMComboBoxItemsDelegate_BeginInvoke_m8FBAD1567099919EF7BDB68AF8266EF8C4A28944 (cppGetMComboBoxItemsDelegate_tF4F5718C0676EAED730748585BE30FADC488244D * __this, intptr_t ___graphHandle0, String_t* ___pIdentifier1, int32_t* ___pNumValues2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppGetMComboBoxItemsDelegate_BeginInvoke_m8FBAD1567099919EF7BDB68AF8266EF8C4A28944_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	__d_args[1] = ___pIdentifier1;
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___pNumValues2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetMComboBoxItemsDelegate::EndInvoke(System.Int32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetMComboBoxItemsDelegate_EndInvoke_m0454133EC674E12D11739DF08C5D765486575FCA (cppGetMComboBoxItemsDelegate_tF4F5718C0676EAED730748585BE30FADC488244D * __this, int32_t* ___pNumValues0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___pNumValues0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_cppGetMInputsDelegate_t57C71B3DDC2EABBEF222B0EBFBF139A786B4880D (cppGetMInputsDelegate_t57C71B3DDC2EABBEF222B0EBFBF139A786B4880D * __this, intptr_t ___graphHandle0, int32_t ___pNumInputs1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___graphHandle0, ___pNumInputs1);

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppGetMInputsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetMInputsDelegate__ctor_m47C7B3295882A9BADC69C3260F1181899020055A (cppGetMInputsDelegate_t57C71B3DDC2EABBEF222B0EBFBF139A786B4880D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetMInputsDelegate::Invoke(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetMInputsDelegate_Invoke_m8C8E35BDE756B5D96E34FAD5802BB2E29BE04C17 (cppGetMInputsDelegate_t57C71B3DDC2EABBEF222B0EBFBF139A786B4880D * __this, intptr_t ___graphHandle0, int32_t ___pNumInputs1, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pNumInputs1, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pNumInputs1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pNumInputs1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< intptr_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pNumInputs1);
					else
						result = GenericVirtFuncInvoker2< intptr_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pNumInputs1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< intptr_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0, ___pNumInputs1);
					else
						result = VirtFuncInvoker2< intptr_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0, ___pNumInputs1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), ___pNumInputs1, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, intptr_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pNumInputs1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppGetMInputsDelegate::BeginInvoke(System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppGetMInputsDelegate_BeginInvoke_m28F972E28DA87803E645315D6FF1F46582016A74 (cppGetMInputsDelegate_t57C71B3DDC2EABBEF222B0EBFBF139A786B4880D * __this, intptr_t ___graphHandle0, int32_t ___pNumInputs1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppGetMInputsDelegate_BeginInvoke_m28F972E28DA87803E645315D6FF1F46582016A74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___pNumInputs1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetMInputsDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetMInputsDelegate_EndInvoke_m6EDF970AE58CE7BD784EEFA8D911C0EFF1E97A9C (cppGetMInputsDelegate_t57C71B3DDC2EABBEF222B0EBFBF139A786B4880D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_cppGetNumInputsDelegate_t13729683C1D24351E98391F54CDACC6C74BAD9A1 (cppGetNumInputsDelegate_t13729683C1D24351E98391F54CDACC6C74BAD9A1 * __this, intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___graphHandle0);

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppGetNumInputsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetNumInputsDelegate__ctor_m91A38E010B9C69EECE80BE39F652C12966854370 (cppGetNumInputsDelegate_t13729683C1D24351E98391F54CDACC6C74BAD9A1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Substance.Platform.NativeFunctions_cppGetNumInputsDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppGetNumInputsDelegate_Invoke_m7EBEDC3D9BBC6479C6156E5AB81464B598471DF6 (cppGetNumInputsDelegate_t13729683C1D24351E98391F54CDACC6C74BAD9A1 * __this, intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___graphHandle0);
					else
						result = GenericVirtFuncInvoker1< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___graphHandle0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0);
					else
						result = VirtFuncInvoker1< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppGetNumInputsDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppGetNumInputsDelegate_BeginInvoke_m103456A0CFA6CB4584BF17001D7A6D1B3CD66C85 (cppGetNumInputsDelegate_t13729683C1D24351E98391F54CDACC6C74BAD9A1 * __this, intptr_t ___graphHandle0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppGetNumInputsDelegate_BeginInvoke_m103456A0CFA6CB4584BF17001D7A6D1B3CD66C85_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Int32 Substance.Platform.NativeFunctions_cppGetNumInputsDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppGetNumInputsDelegate_EndInvoke_mE716581857E3E2687E19E509E56966FDB839E9BD (cppGetNumInputsDelegate_t13729683C1D24351E98391F54CDACC6C74BAD9A1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_cppGetNumOutputsDelegate_tEC58C8B60E851ADD8CCC2B0B5B4DDD4450258D9C (cppGetNumOutputsDelegate_tEC58C8B60E851ADD8CCC2B0B5B4DDD4450258D9C * __this, intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___graphHandle0);

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppGetNumOutputsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetNumOutputsDelegate__ctor_m0FC3C5E8138A46CD48EFAC6C2574F8A839AEB087 (cppGetNumOutputsDelegate_tEC58C8B60E851ADD8CCC2B0B5B4DDD4450258D9C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Substance.Platform.NativeFunctions_cppGetNumOutputsDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppGetNumOutputsDelegate_Invoke_m32646953593D656B6A31FFE326ADB9171E733033 (cppGetNumOutputsDelegate_tEC58C8B60E851ADD8CCC2B0B5B4DDD4450258D9C * __this, intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___graphHandle0);
					else
						result = GenericVirtFuncInvoker1< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___graphHandle0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0);
					else
						result = VirtFuncInvoker1< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppGetNumOutputsDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppGetNumOutputsDelegate_BeginInvoke_m10E44819C11059D3C342EA972EF23478BCB5E37F (cppGetNumOutputsDelegate_tEC58C8B60E851ADD8CCC2B0B5B4DDD4450258D9C * __this, intptr_t ___graphHandle0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppGetNumOutputsDelegate_BeginInvoke_m10E44819C11059D3C342EA972EF23478BCB5E37F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Int32 Substance.Platform.NativeFunctions_cppGetNumOutputsDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppGetNumOutputsDelegate_EndInvoke_m9E21C76F894278FC7E1B953FB3D19FEE94DF2289 (cppGetNumOutputsDelegate_tEC58C8B60E851ADD8CCC2B0B5B4DDD4450258D9C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_cppGetNumberOfDuplicatedGraphsDelegate_t79DCEF69BCD3A8DA7F6E52779E5188CC7FA6E03A (cppGetNumberOfDuplicatedGraphsDelegate_t79DCEF69BCD3A8DA7F6E52779E5188CC7FA6E03A * __this, intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___graphHandle0);

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppGetNumberOfDuplicatedGraphsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetNumberOfDuplicatedGraphsDelegate__ctor_mCFA4338C51EDAE5B584C8818F678757EA1C5D256 (cppGetNumberOfDuplicatedGraphsDelegate_t79DCEF69BCD3A8DA7F6E52779E5188CC7FA6E03A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Substance.Platform.NativeFunctions_cppGetNumberOfDuplicatedGraphsDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppGetNumberOfDuplicatedGraphsDelegate_Invoke_m145927C729F6C2B080BB4C9293C6798E794636F0 (cppGetNumberOfDuplicatedGraphsDelegate_t79DCEF69BCD3A8DA7F6E52779E5188CC7FA6E03A * __this, intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___graphHandle0);
					else
						result = GenericVirtFuncInvoker1< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___graphHandle0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0);
					else
						result = VirtFuncInvoker1< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppGetNumberOfDuplicatedGraphsDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppGetNumberOfDuplicatedGraphsDelegate_BeginInvoke_mD31EA6EE46257DBF5BEE9499F5B8BA889DC5D885 (cppGetNumberOfDuplicatedGraphsDelegate_t79DCEF69BCD3A8DA7F6E52779E5188CC7FA6E03A * __this, intptr_t ___graphHandle0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppGetNumberOfDuplicatedGraphsDelegate_BeginInvoke_mD31EA6EE46257DBF5BEE9499F5B8BA889DC5D885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Int32 Substance.Platform.NativeFunctions_cppGetNumberOfDuplicatedGraphsDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppGetNumberOfDuplicatedGraphsDelegate_EndInvoke_m4FAE72CBD7D6B5158C496AA99B9EC62404917332 (cppGetNumberOfDuplicatedGraphsDelegate_t79DCEF69BCD3A8DA7F6E52779E5188CC7FA6E03A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_cppGetOldFileIdDelegate_tFF91C0780AFFFBAC0F8FEEB180BCECCC9276FB0E (cppGetOldFileIdDelegate_tFF91C0780AFFFBAC0F8FEEB180BCECCC9276FB0E * __this, String_t* ___pCharArray0, int32_t ___pTypeConstant1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___pCharArray0' to native representation
	char* ____pCharArray0_marshaled = NULL;
	____pCharArray0_marshaled = il2cpp_codegen_marshal_string(___pCharArray0);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____pCharArray0_marshaled, ___pTypeConstant1);

	// Marshaling cleanup of parameter '___pCharArray0' native representation
	il2cpp_codegen_marshal_free(____pCharArray0_marshaled);
	____pCharArray0_marshaled = NULL;

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppGetOldFileIdDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetOldFileIdDelegate__ctor_mE9FA1B576A12D00566111D0779FDCD1B18F12AE5 (cppGetOldFileIdDelegate_tFF91C0780AFFFBAC0F8FEEB180BCECCC9276FB0E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Substance.Platform.NativeFunctions_cppGetOldFileIdDelegate::Invoke(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppGetOldFileIdDelegate_Invoke_mE23AB779A72348A019EBF2446937A5380CC65E4E (cppGetOldFileIdDelegate_tFF91C0780AFFFBAC0F8FEEB180BCECCC9276FB0E * __this, String_t* ___pCharArray0, int32_t ___pTypeConstant1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pCharArray0, ___pTypeConstant1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pCharArray0, ___pTypeConstant1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< int32_t, int32_t >::Invoke(targetMethod, ___pCharArray0, ___pTypeConstant1);
					else
						result = GenericVirtFuncInvoker1< int32_t, int32_t >::Invoke(targetMethod, ___pCharArray0, ___pTypeConstant1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___pCharArray0, ___pTypeConstant1);
					else
						result = VirtFuncInvoker1< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___pCharArray0, ___pTypeConstant1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___pTypeConstant1) - 1), targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___pCharArray0, ___pTypeConstant1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___pCharArray0, ___pTypeConstant1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, String_t*, int32_t >::Invoke(targetMethod, targetThis, ___pCharArray0, ___pTypeConstant1);
					else
						result = GenericVirtFuncInvoker2< int32_t, String_t*, int32_t >::Invoke(targetMethod, targetThis, ___pCharArray0, ___pTypeConstant1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pCharArray0, ___pTypeConstant1);
					else
						result = VirtFuncInvoker2< int32_t, String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pCharArray0, ___pTypeConstant1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___pCharArray0) - 1), ___pTypeConstant1, targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pCharArray0, ___pTypeConstant1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppGetOldFileIdDelegate::BeginInvoke(System.String,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppGetOldFileIdDelegate_BeginInvoke_m121CEDCB7C15D1A0F95A8E95AD50D6738ACC1021 (cppGetOldFileIdDelegate_tFF91C0780AFFFBAC0F8FEEB180BCECCC9276FB0E * __this, String_t* ___pCharArray0, int32_t ___pTypeConstant1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppGetOldFileIdDelegate_BeginInvoke_m121CEDCB7C15D1A0F95A8E95AD50D6738ACC1021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___pCharArray0;
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___pTypeConstant1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 Substance.Platform.NativeFunctions_cppGetOldFileIdDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppGetOldFileIdDelegate_EndInvoke_m4FD6464A27FB2D9AA761D299C92E355D0923DE93 (cppGetOldFileIdDelegate_tFF91C0780AFFFBAC0F8FEEB180BCECCC9276FB0E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_cppGetOutputChannelStrFromHashDelegate_t1A4B5521992D275C1404FA35AC39FC903DEC7801 (cppGetOutputChannelStrFromHashDelegate_t1A4B5521992D275C1404FA35AC39FC903DEC7801 * __this, String_t* ___pAssetPath0, uint32_t ___outputHash1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(char*, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___pAssetPath0' to native representation
	char* ____pAssetPath0_marshaled = NULL;
	____pAssetPath0_marshaled = il2cpp_codegen_marshal_string(___pAssetPath0);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____pAssetPath0_marshaled, ___outputHash1);

	// Marshaling cleanup of parameter '___pAssetPath0' native representation
	il2cpp_codegen_marshal_free(____pAssetPath0_marshaled);
	____pAssetPath0_marshaled = NULL;

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppGetOutputChannelStrFromHashDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetOutputChannelStrFromHashDelegate__ctor_mEDCB360CB8B2E994A635EF09256771298176BDDE (cppGetOutputChannelStrFromHashDelegate_t1A4B5521992D275C1404FA35AC39FC903DEC7801 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetOutputChannelStrFromHashDelegate::Invoke(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetOutputChannelStrFromHashDelegate_Invoke_m6678AA819236E63F982A6B01B9325B35DD2373EF (cppGetOutputChannelStrFromHashDelegate_t1A4B5521992D275C1404FA35AC39FC903DEC7801 * __this, String_t* ___pAssetPath0, uint32_t ___outputHash1, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (String_t*, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pAssetPath0, ___outputHash1, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, String_t*, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pAssetPath0, ___outputHash1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< intptr_t, uint32_t >::Invoke(targetMethod, ___pAssetPath0, ___outputHash1);
					else
						result = GenericVirtFuncInvoker1< intptr_t, uint32_t >::Invoke(targetMethod, ___pAssetPath0, ___outputHash1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___pAssetPath0, ___outputHash1);
					else
						result = VirtFuncInvoker1< intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___pAssetPath0, ___outputHash1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___outputHash1) - 1), targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (String_t*, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___pAssetPath0, ___outputHash1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (String_t*, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___pAssetPath0, ___outputHash1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< intptr_t, String_t*, uint32_t >::Invoke(targetMethod, targetThis, ___pAssetPath0, ___outputHash1);
					else
						result = GenericVirtFuncInvoker2< intptr_t, String_t*, uint32_t >::Invoke(targetMethod, targetThis, ___pAssetPath0, ___outputHash1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< intptr_t, String_t*, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pAssetPath0, ___outputHash1);
					else
						result = VirtFuncInvoker2< intptr_t, String_t*, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pAssetPath0, ___outputHash1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject*, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___pAssetPath0) - 1), ___outputHash1, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, String_t*, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pAssetPath0, ___outputHash1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppGetOutputChannelStrFromHashDelegate::BeginInvoke(System.String,System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppGetOutputChannelStrFromHashDelegate_BeginInvoke_m7255E3797D509B0FC100E3CCA92C1D7D16328EE7 (cppGetOutputChannelStrFromHashDelegate_t1A4B5521992D275C1404FA35AC39FC903DEC7801 * __this, String_t* ___pAssetPath0, uint32_t ___outputHash1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppGetOutputChannelStrFromHashDelegate_BeginInvoke_m7255E3797D509B0FC100E3CCA92C1D7D16328EE7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___pAssetPath0;
	__d_args[1] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___outputHash1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetOutputChannelStrFromHashDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetOutputChannelStrFromHashDelegate_EndInvoke_mFBC92B0E1E0D7820DC4BAD461599226340C73486 (cppGetOutputChannelStrFromHashDelegate_t1A4B5521992D275C1404FA35AC39FC903DEC7801 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_cppGetOutputHashDelegate_t35115A8C2400D889E62AB407CEA182F1B58B6C8C (cppGetOutputHashDelegate_t35115A8C2400D889E62AB407CEA182F1B58B6C8C * __this, intptr_t ___graphHandle0, int32_t ___pOutputIndex1, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___graphHandle0, ___pOutputIndex1);

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppGetOutputHashDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetOutputHashDelegate__ctor_mFFE0D1B02C51B913388AAF9AA808A91305FD2239 (cppGetOutputHashDelegate_t35115A8C2400D889E62AB407CEA182F1B58B6C8C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.UInt32 Substance.Platform.NativeFunctions_cppGetOutputHashDelegate::Invoke(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t cppGetOutputHashDelegate_Invoke_mA5E06916FA1305322ADF360FECCE96FA046FF5BD (cppGetOutputHashDelegate_t35115A8C2400D889E62AB407CEA182F1B58B6C8C * __this, intptr_t ___graphHandle0, int32_t ___pOutputIndex1, const RuntimeMethod* method)
{
	uint32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pOutputIndex1, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, intptr_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pOutputIndex1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef uint32_t (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pOutputIndex1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< uint32_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pOutputIndex1);
					else
						result = GenericVirtFuncInvoker2< uint32_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pOutputIndex1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< uint32_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0, ___pOutputIndex1);
					else
						result = VirtFuncInvoker2< uint32_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0, ___pOutputIndex1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef uint32_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), ___pOutputIndex1, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, intptr_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pOutputIndex1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppGetOutputHashDelegate::BeginInvoke(System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppGetOutputHashDelegate_BeginInvoke_m4C5113EF2DD88AB6EA8684F58843BD47BD3B90B8 (cppGetOutputHashDelegate_t35115A8C2400D889E62AB407CEA182F1B58B6C8C * __this, intptr_t ___graphHandle0, int32_t ___pOutputIndex1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppGetOutputHashDelegate_BeginInvoke_m4C5113EF2DD88AB6EA8684F58843BD47BD3B90B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___pOutputIndex1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.UInt32 Substance.Platform.NativeFunctions_cppGetOutputHashDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t cppGetOutputHashDelegate_EndInvoke_m99AD43DCCDD9102DE1C5B8ED20D03A820A37B965 (cppGetOutputHashDelegate_t35115A8C2400D889E62AB407CEA182F1B58B6C8C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_cppGetOutputIdentifierFromHashDelegate_t5B7B89C8B3B9420EE6235BB7EB2DC66840151F76 (cppGetOutputIdentifierFromHashDelegate_t5B7B89C8B3B9420EE6235BB7EB2DC66840151F76 * __this, String_t* ___pAssetPath0, uint32_t ___outputHash1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(char*, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___pAssetPath0' to native representation
	char* ____pAssetPath0_marshaled = NULL;
	____pAssetPath0_marshaled = il2cpp_codegen_marshal_string(___pAssetPath0);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____pAssetPath0_marshaled, ___outputHash1);

	// Marshaling cleanup of parameter '___pAssetPath0' native representation
	il2cpp_codegen_marshal_free(____pAssetPath0_marshaled);
	____pAssetPath0_marshaled = NULL;

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppGetOutputIdentifierFromHashDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetOutputIdentifierFromHashDelegate__ctor_m64949FF1E2E56D824506524ABABC45B5ABF9FA31 (cppGetOutputIdentifierFromHashDelegate_t5B7B89C8B3B9420EE6235BB7EB2DC66840151F76 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetOutputIdentifierFromHashDelegate::Invoke(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetOutputIdentifierFromHashDelegate_Invoke_m7C6EDFEEC4C876F14289A9FF9302A028B340054B (cppGetOutputIdentifierFromHashDelegate_t5B7B89C8B3B9420EE6235BB7EB2DC66840151F76 * __this, String_t* ___pAssetPath0, uint32_t ___outputHash1, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (String_t*, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pAssetPath0, ___outputHash1, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, String_t*, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pAssetPath0, ___outputHash1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< intptr_t, uint32_t >::Invoke(targetMethod, ___pAssetPath0, ___outputHash1);
					else
						result = GenericVirtFuncInvoker1< intptr_t, uint32_t >::Invoke(targetMethod, ___pAssetPath0, ___outputHash1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___pAssetPath0, ___outputHash1);
					else
						result = VirtFuncInvoker1< intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___pAssetPath0, ___outputHash1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___outputHash1) - 1), targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (String_t*, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___pAssetPath0, ___outputHash1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (String_t*, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___pAssetPath0, ___outputHash1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< intptr_t, String_t*, uint32_t >::Invoke(targetMethod, targetThis, ___pAssetPath0, ___outputHash1);
					else
						result = GenericVirtFuncInvoker2< intptr_t, String_t*, uint32_t >::Invoke(targetMethod, targetThis, ___pAssetPath0, ___outputHash1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< intptr_t, String_t*, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pAssetPath0, ___outputHash1);
					else
						result = VirtFuncInvoker2< intptr_t, String_t*, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pAssetPath0, ___outputHash1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject*, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___pAssetPath0) - 1), ___outputHash1, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, String_t*, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pAssetPath0, ___outputHash1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppGetOutputIdentifierFromHashDelegate::BeginInvoke(System.String,System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppGetOutputIdentifierFromHashDelegate_BeginInvoke_mAC753F38D5206628D63157DDACBEBC0A03CEF7DA (cppGetOutputIdentifierFromHashDelegate_t5B7B89C8B3B9420EE6235BB7EB2DC66840151F76 * __this, String_t* ___pAssetPath0, uint32_t ___outputHash1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppGetOutputIdentifierFromHashDelegate_BeginInvoke_mAC753F38D5206628D63157DDACBEBC0A03CEF7DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___pAssetPath0;
	__d_args[1] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___outputHash1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetOutputIdentifierFromHashDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetOutputIdentifierFromHashDelegate_EndInvoke_m4AD508DF25EDF2084B0FA48ED05D0DEA4CC65449 (cppGetOutputIdentifierFromHashDelegate_t5B7B89C8B3B9420EE6235BB7EB2DC66840151F76 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_cppGetOutputLabelFromHashDelegate_t333F4644517C361C40991DB87E3251DAD5200E20 (cppGetOutputLabelFromHashDelegate_t333F4644517C361C40991DB87E3251DAD5200E20 * __this, String_t* ___pAssetPath0, uint32_t ___outputHash1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(char*, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___pAssetPath0' to native representation
	char* ____pAssetPath0_marshaled = NULL;
	____pAssetPath0_marshaled = il2cpp_codegen_marshal_string(___pAssetPath0);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____pAssetPath0_marshaled, ___outputHash1);

	// Marshaling cleanup of parameter '___pAssetPath0' native representation
	il2cpp_codegen_marshal_free(____pAssetPath0_marshaled);
	____pAssetPath0_marshaled = NULL;

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppGetOutputLabelFromHashDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetOutputLabelFromHashDelegate__ctor_m47A18FB8E9245615E905FC04B7E9951E15A4495B (cppGetOutputLabelFromHashDelegate_t333F4644517C361C40991DB87E3251DAD5200E20 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetOutputLabelFromHashDelegate::Invoke(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetOutputLabelFromHashDelegate_Invoke_m0E5C809804AAEDABB89A044261861EC2AEACE83C (cppGetOutputLabelFromHashDelegate_t333F4644517C361C40991DB87E3251DAD5200E20 * __this, String_t* ___pAssetPath0, uint32_t ___outputHash1, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (String_t*, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pAssetPath0, ___outputHash1, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, String_t*, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pAssetPath0, ___outputHash1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< intptr_t, uint32_t >::Invoke(targetMethod, ___pAssetPath0, ___outputHash1);
					else
						result = GenericVirtFuncInvoker1< intptr_t, uint32_t >::Invoke(targetMethod, ___pAssetPath0, ___outputHash1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___pAssetPath0, ___outputHash1);
					else
						result = VirtFuncInvoker1< intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___pAssetPath0, ___outputHash1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___outputHash1) - 1), targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (String_t*, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___pAssetPath0, ___outputHash1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (String_t*, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___pAssetPath0, ___outputHash1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< intptr_t, String_t*, uint32_t >::Invoke(targetMethod, targetThis, ___pAssetPath0, ___outputHash1);
					else
						result = GenericVirtFuncInvoker2< intptr_t, String_t*, uint32_t >::Invoke(targetMethod, targetThis, ___pAssetPath0, ___outputHash1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< intptr_t, String_t*, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pAssetPath0, ___outputHash1);
					else
						result = VirtFuncInvoker2< intptr_t, String_t*, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pAssetPath0, ___outputHash1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject*, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___pAssetPath0) - 1), ___outputHash1, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, String_t*, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pAssetPath0, ___outputHash1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppGetOutputLabelFromHashDelegate::BeginInvoke(System.String,System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppGetOutputLabelFromHashDelegate_BeginInvoke_m3F9211E829258ADD5B2DA577F47277FB23E0D7CF (cppGetOutputLabelFromHashDelegate_t333F4644517C361C40991DB87E3251DAD5200E20 * __this, String_t* ___pAssetPath0, uint32_t ___outputHash1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppGetOutputLabelFromHashDelegate_BeginInvoke_m3F9211E829258ADD5B2DA577F47277FB23E0D7CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___pAssetPath0;
	__d_args[1] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___outputHash1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetOutputLabelFromHashDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetOutputLabelFromHashDelegate_EndInvoke_m01F2A174989BF1B881AD87064D6B792C4CCC7ECE (cppGetOutputLabelFromHashDelegate_t333F4644517C361C40991DB87E3251DAD5200E20 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_cppGetOutputsDescDelegate_tC6C5AA6F2ADA418834452A6C5461BE449F297478 (cppGetOutputsDescDelegate_tC6C5AA6F2ADA418834452A6C5461BE449F297478 * __this, intptr_t ___graphHandle0, int32_t* ___pNumOutputs1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___graphHandle0, ___pNumOutputs1);

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppGetOutputsDescDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetOutputsDescDelegate__ctor_m3CA9BFE8A02055350E41365989195B36C2E5B13E (cppGetOutputsDescDelegate_tC6C5AA6F2ADA418834452A6C5461BE449F297478 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetOutputsDescDelegate::Invoke(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetOutputsDescDelegate_Invoke_m49F63451C974CA494D4225BE4389BDE4A98B65EB (cppGetOutputsDescDelegate_tC6C5AA6F2ADA418834452A6C5461BE449F297478 * __this, intptr_t ___graphHandle0, int32_t* ___pNumOutputs1, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pNumOutputs1, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pNumOutputs1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pNumOutputs1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< intptr_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pNumOutputs1);
					else
						result = GenericVirtFuncInvoker2< intptr_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pNumOutputs1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< intptr_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0, ___pNumOutputs1);
					else
						result = VirtFuncInvoker2< intptr_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0, ___pNumOutputs1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject*, int32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), ___pNumOutputs1, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pNumOutputs1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppGetOutputsDescDelegate::BeginInvoke(System.IntPtr,System.Int32&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppGetOutputsDescDelegate_BeginInvoke_mCC05799DE0C41CDA438E707367DC7F741EE4D281 (cppGetOutputsDescDelegate_tC6C5AA6F2ADA418834452A6C5461BE449F297478 * __this, intptr_t ___graphHandle0, int32_t* ___pNumOutputs1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppGetOutputsDescDelegate_BeginInvoke_mCC05799DE0C41CDA438E707367DC7F741EE4D281_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___pNumOutputs1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetOutputsDescDelegate::EndInvoke(System.Int32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetOutputsDescDelegate_EndInvoke_mE224837F5E8F658B2EA2B527AC89F1E152CB20A5 (cppGetOutputsDescDelegate_tC6C5AA6F2ADA418834452A6C5461BE449F297478 * __this, int32_t* ___pNumOutputs0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___pNumOutputs0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_cppGetPresetDelegate_t7566CD196CA84BD167A926F59BA9B783F761795E (cppGetPresetDelegate_t7566CD196CA84BD167A926F59BA9B783F761795E * __this, intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___graphHandle0);

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppGetPresetDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetPresetDelegate__ctor_m5C6FD396B9F658ECE6D6161AC38A7722C4A77C92 (cppGetPresetDelegate_t7566CD196CA84BD167A926F59BA9B783F761795E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetPresetDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetPresetDelegate_Invoke_m11BB0FA39FFA1F5B29A064EA0D000BA3A19D6219 (cppGetPresetDelegate_t7566CD196CA84BD167A926F59BA9B783F761795E * __this, intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___graphHandle0);
					else
						result = GenericVirtFuncInvoker1< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___graphHandle0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0);
					else
						result = VirtFuncInvoker1< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppGetPresetDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppGetPresetDelegate_BeginInvoke_m1080910DAC0DDCC4F125D66B207BF9A76A983765 (cppGetPresetDelegate_t7566CD196CA84BD167A926F59BA9B783F761795E * __this, intptr_t ___graphHandle0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppGetPresetDelegate_BeginInvoke_m1080910DAC0DDCC4F125D66B207BF9A76A983765_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppGetPresetDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppGetPresetDelegate_EndInvoke_m51EF95247DA850F88D1856C29C4510092528CA31 (cppGetPresetDelegate_t7566CD196CA84BD167A926F59BA9B783F761795E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_cppGetTextureDimensionsDelegate_tFCCE46F41215E38CA52FE5B6B5540C89131E7793 (cppGetTextureDimensionsDelegate_tFCCE46F41215E38CA52FE5B6B5540C89131E7793 * __this, intptr_t ___graphHandle0, int32_t* ___pWidth1, int32_t* ___pHeight2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t*, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___graphHandle0, ___pWidth1, ___pHeight2);

}
// System.Void Substance.Platform.NativeFunctions_cppGetTextureDimensionsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetTextureDimensionsDelegate__ctor_m6CBA44E5416F48C1C9492741576AF5C0CE61642E (cppGetTextureDimensionsDelegate_tFCCE46F41215E38CA52FE5B6B5540C89131E7793 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Substance.Platform.NativeFunctions_cppGetTextureDimensionsDelegate::Invoke(System.IntPtr,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetTextureDimensionsDelegate_Invoke_mD3C920C662DB51022C74A5DE5ADB0B7A8EEA6020 (cppGetTextureDimensionsDelegate_tFCCE46F41215E38CA52FE5B6B5540C89131E7793 * __this, intptr_t ___graphHandle0, int32_t* ___pWidth1, int32_t* ___pHeight2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t*, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pWidth1, ___pHeight2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t*, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pWidth1, ___pHeight2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, int32_t*, int32_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pWidth1, ___pHeight2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, int32_t*, int32_t* >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pWidth1, ___pHeight2);
					else
						GenericVirtActionInvoker3< intptr_t, int32_t*, int32_t* >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pWidth1, ___pHeight2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, int32_t*, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0, ___pWidth1, ___pHeight2);
					else
						VirtActionInvoker3< intptr_t, int32_t*, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0, ___pWidth1, ___pHeight2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t*, int32_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), ___pWidth1, ___pHeight2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t*, int32_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pWidth1, ___pHeight2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppGetTextureDimensionsDelegate::BeginInvoke(System.IntPtr,System.Int32&,System.Int32&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppGetTextureDimensionsDelegate_BeginInvoke_m28475D7C70F40FA4B5CE5A03136E1DB1A27CFCBE (cppGetTextureDimensionsDelegate_tFCCE46F41215E38CA52FE5B6B5540C89131E7793 * __this, intptr_t ___graphHandle0, int32_t* ___pWidth1, int32_t* ___pHeight2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppGetTextureDimensionsDelegate_BeginInvoke_m28475D7C70F40FA4B5CE5A03136E1DB1A27CFCBE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___pWidth1);
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___pHeight2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Substance.Platform.NativeFunctions_cppGetTextureDimensionsDelegate::EndInvoke(System.Int32&,System.Int32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppGetTextureDimensionsDelegate_EndInvoke_mF7A50E6B7ADDB73A7CE362FE18461DF81BBA1B2A (cppGetTextureDimensionsDelegate_tFCCE46F41215E38CA52FE5B6B5540C89131E7793 * __this, int32_t* ___pWidth0, int32_t* ___pHeight1, RuntimeObject* ___result2, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___pWidth0,
	___pHeight1,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_cppHelloDelegate_t388111418C0A6DA23263E82AE671690A9C4D66E8 (cppHelloDelegate_t388111418C0A6DA23263E82AE671690A9C4D66E8 * __this, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppHelloDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppHelloDelegate__ctor_mB65C44B843335860F657F89CE323B61B89963AD0 (cppHelloDelegate_t388111418C0A6DA23263E82AE671690A9C4D66E8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppHelloDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppHelloDelegate_Invoke_m73534897AD7BB1542B77CCBB52A9DFA407467887 (cppHelloDelegate_t388111418C0A6DA23263E82AE671690A9C4D66E8 * __this, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< intptr_t >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< intptr_t >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef intptr_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppHelloDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppHelloDelegate_BeginInvoke_mBE1C95E5B592742186CD4425FB38785CA2190321 (cppHelloDelegate_t388111418C0A6DA23263E82AE671690A9C4D66E8 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppHelloDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppHelloDelegate_EndInvoke_m601CDBBC9322953FDCA6D1B08A3BB4E145CDD299 (cppHelloDelegate_t388111418C0A6DA23263E82AE671690A9C4D66E8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_cppInitSubstanceDelegate_t5061208036D13164474ABB6301D854AD7C3F27B4 (cppInitSubstanceDelegate_t5061208036D13164474ABB6301D854AD7C3F27B4 * __this, String_t* ___applicationDataPath0, int32_t ___pTextureClampExposant1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___applicationDataPath0' to native representation
	char* ____applicationDataPath0_marshaled = NULL;
	____applicationDataPath0_marshaled = il2cpp_codegen_marshal_string(___applicationDataPath0);

	// Native function invocation
	il2cppPInvokeFunc(____applicationDataPath0_marshaled, ___pTextureClampExposant1);

	// Marshaling cleanup of parameter '___applicationDataPath0' native representation
	il2cpp_codegen_marshal_free(____applicationDataPath0_marshaled);
	____applicationDataPath0_marshaled = NULL;

}
// System.Void Substance.Platform.NativeFunctions_cppInitSubstanceDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppInitSubstanceDelegate__ctor_mE868828070B8410D28FA49EC560495C717FBCF21 (cppInitSubstanceDelegate_t5061208036D13164474ABB6301D854AD7C3F27B4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Substance.Platform.NativeFunctions_cppInitSubstanceDelegate::Invoke(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppInitSubstanceDelegate_Invoke_m226CA7ED25F9BD33FBB7766592157FD3B0E3D66D (cppInitSubstanceDelegate_t5061208036D13164474ABB6301D854AD7C3F27B4 * __this, String_t* ___applicationDataPath0, int32_t ___pTextureClampExposant1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___applicationDataPath0, ___pTextureClampExposant1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___applicationDataPath0, ___pTextureClampExposant1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___applicationDataPath0, ___pTextureClampExposant1);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___applicationDataPath0, ___pTextureClampExposant1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___applicationDataPath0, ___pTextureClampExposant1);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___applicationDataPath0, ___pTextureClampExposant1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___pTextureClampExposant1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___applicationDataPath0, ___pTextureClampExposant1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___applicationDataPath0, ___pTextureClampExposant1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___applicationDataPath0, ___pTextureClampExposant1);
					else
						GenericVirtActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___applicationDataPath0, ___pTextureClampExposant1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___applicationDataPath0, ___pTextureClampExposant1);
					else
						VirtActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___applicationDataPath0, ___pTextureClampExposant1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___applicationDataPath0) - 1), ___pTextureClampExposant1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___applicationDataPath0, ___pTextureClampExposant1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppInitSubstanceDelegate::BeginInvoke(System.String,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppInitSubstanceDelegate_BeginInvoke_m7B33058A355BF7E3165617114A367402F7F84D3D (cppInitSubstanceDelegate_t5061208036D13164474ABB6301D854AD7C3F27B4 * __this, String_t* ___applicationDataPath0, int32_t ___pTextureClampExposant1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppInitSubstanceDelegate_BeginInvoke_m7B33058A355BF7E3165617114A367402F7F84D3D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___applicationDataPath0;
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___pTextureClampExposant1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Substance.Platform.NativeFunctions_cppInitSubstanceDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppInitSubstanceDelegate_EndInvoke_mD807B65BEF4F9D949031F8B6B1FC35017F82A286 (cppInitSubstanceDelegate_t5061208036D13164474ABB6301D854AD7C3F27B4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_cppIsImageOutputFromHashDelegate_t4A3A006107496BB4BA90C54E99C1E6CB1D3896AA (cppIsImageOutputFromHashDelegate_t4A3A006107496BB4BA90C54E99C1E6CB1D3896AA * __this, String_t* ___pAssetPath0, uint32_t ___outputHash1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(char*, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___pAssetPath0' to native representation
	char* ____pAssetPath0_marshaled = NULL;
	____pAssetPath0_marshaled = il2cpp_codegen_marshal_string(___pAssetPath0);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____pAssetPath0_marshaled, ___outputHash1);

	// Marshaling cleanup of parameter '___pAssetPath0' native representation
	il2cpp_codegen_marshal_free(____pAssetPath0_marshaled);
	____pAssetPath0_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Void Substance.Platform.NativeFunctions_cppIsImageOutputFromHashDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppIsImageOutputFromHashDelegate__ctor_mF0BE756F6C77B806BC6B31E1984E86D33BE6F7D3 (cppIsImageOutputFromHashDelegate_t4A3A006107496BB4BA90C54E99C1E6CB1D3896AA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean Substance.Platform.NativeFunctions_cppIsImageOutputFromHashDelegate::Invoke(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool cppIsImageOutputFromHashDelegate_Invoke_mFE60F253BFB31DA499C0EDFCD8F79184A02A61C2 (cppIsImageOutputFromHashDelegate_t4A3A006107496BB4BA90C54E99C1E6CB1D3896AA * __this, String_t* ___pAssetPath0, uint32_t ___outputHash1, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef bool (*FunctionPointerType) (String_t*, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pAssetPath0, ___outputHash1, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, String_t*, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pAssetPath0, ___outputHash1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, uint32_t >::Invoke(targetMethod, ___pAssetPath0, ___outputHash1);
					else
						result = GenericVirtFuncInvoker1< bool, uint32_t >::Invoke(targetMethod, ___pAssetPath0, ___outputHash1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___pAssetPath0, ___outputHash1);
					else
						result = VirtFuncInvoker1< bool, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___pAssetPath0, ___outputHash1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___outputHash1) - 1), targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (String_t*, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___pAssetPath0, ___outputHash1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (String_t*, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___pAssetPath0, ___outputHash1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< bool, String_t*, uint32_t >::Invoke(targetMethod, targetThis, ___pAssetPath0, ___outputHash1);
					else
						result = GenericVirtFuncInvoker2< bool, String_t*, uint32_t >::Invoke(targetMethod, targetThis, ___pAssetPath0, ___outputHash1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< bool, String_t*, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pAssetPath0, ___outputHash1);
					else
						result = VirtFuncInvoker2< bool, String_t*, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pAssetPath0, ___outputHash1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___pAssetPath0) - 1), ___outputHash1, targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, String_t*, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pAssetPath0, ___outputHash1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppIsImageOutputFromHashDelegate::BeginInvoke(System.String,System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppIsImageOutputFromHashDelegate_BeginInvoke_m639B264ABC99A556D64FF261B17B727D5DB65006 (cppIsImageOutputFromHashDelegate_t4A3A006107496BB4BA90C54E99C1E6CB1D3896AA * __this, String_t* ___pAssetPath0, uint32_t ___outputHash1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppIsImageOutputFromHashDelegate_BeginInvoke_m639B264ABC99A556D64FF261B17B727D5DB65006_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___pAssetPath0;
	__d_args[1] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___outputHash1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Boolean Substance.Platform.NativeFunctions_cppIsImageOutputFromHashDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool cppIsImageOutputFromHashDelegate_EndInvoke_m87689E31B38FA0083392169732382B57D1DBB259 (cppIsImageOutputFromHashDelegate_t4A3A006107496BB4BA90C54E99C1E6CB1D3896AA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_cppIsRendererBusyDelegate_t2E1EACFB22525453D9D9D8BF37FBC036A0BCA3AF (cppIsRendererBusyDelegate_t2E1EACFB22525453D9D9D8BF37FBC036A0BCA3AF * __this, uint32_t ___runid0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___runid0);

	return static_cast<bool>(returnValue);
}
// System.Void Substance.Platform.NativeFunctions_cppIsRendererBusyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppIsRendererBusyDelegate__ctor_m6DF464067DDE999352B94496A9B68B931CD11E41 (cppIsRendererBusyDelegate_t2E1EACFB22525453D9D9D8BF37FBC036A0BCA3AF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean Substance.Platform.NativeFunctions_cppIsRendererBusyDelegate::Invoke(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool cppIsRendererBusyDelegate_Invoke_mAA4D186D55AA984865E5F910CBC01D9B91D4263B (cppIsRendererBusyDelegate_t2E1EACFB22525453D9D9D8BF37FBC036A0BCA3AF * __this, uint32_t ___runid0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___runid0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___runid0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___runid0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, uint32_t >::Invoke(targetMethod, targetThis, ___runid0);
					else
						result = GenericVirtFuncInvoker1< bool, uint32_t >::Invoke(targetMethod, targetThis, ___runid0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___runid0);
					else
						result = VirtFuncInvoker1< bool, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___runid0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___runid0) - 1), targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___runid0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppIsRendererBusyDelegate::BeginInvoke(System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppIsRendererBusyDelegate_BeginInvoke_m2DD70D3A79BCA2F438D1C1731F965A4F1C7A445A (cppIsRendererBusyDelegate_t2E1EACFB22525453D9D9D8BF37FBC036A0BCA3AF * __this, uint32_t ___runid0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppIsRendererBusyDelegate_BeginInvoke_m2DD70D3A79BCA2F438D1C1731F965A4F1C7A445A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___runid0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean Substance.Platform.NativeFunctions_cppIsRendererBusyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool cppIsRendererBusyDelegate_EndInvoke_m3C3282B9AD7F5E70CD2252224D150A5284CF4E74 (cppIsRendererBusyDelegate_t2E1EACFB22525453D9D9D8BF37FBC036A0BCA3AF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_cppIsValidGraphHandleDelegate_t72E8F8144C8E15FD188709DB3A9739908C33E214 (cppIsValidGraphHandleDelegate_t72E8F8144C8E15FD188709DB3A9739908C33E214 * __this, intptr_t ___pGraphHandle0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pGraphHandle0);

	return static_cast<bool>(returnValue);
}
// System.Void Substance.Platform.NativeFunctions_cppIsValidGraphHandleDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppIsValidGraphHandleDelegate__ctor_m0DC9FB8D7773CCCE37E11253DF3B60A1E95CA013 (cppIsValidGraphHandleDelegate_t72E8F8144C8E15FD188709DB3A9739908C33E214 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean Substance.Platform.NativeFunctions_cppIsValidGraphHandleDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool cppIsValidGraphHandleDelegate_Invoke_m058FC65A90C729D4DFFBF1C56666426381938DCD (cppIsValidGraphHandleDelegate_t72E8F8144C8E15FD188709DB3A9739908C33E214 * __this, intptr_t ___pGraphHandle0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pGraphHandle0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pGraphHandle0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___pGraphHandle0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, intptr_t >::Invoke(targetMethod, targetThis, ___pGraphHandle0);
					else
						result = GenericVirtFuncInvoker1< bool, intptr_t >::Invoke(targetMethod, targetThis, ___pGraphHandle0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pGraphHandle0);
					else
						result = VirtFuncInvoker1< bool, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pGraphHandle0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___pGraphHandle0) - 1), targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pGraphHandle0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppIsValidGraphHandleDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppIsValidGraphHandleDelegate_BeginInvoke_m39BF60B2192F6FB883E76597FBBB87B8207D7BAB (cppIsValidGraphHandleDelegate_t72E8F8144C8E15FD188709DB3A9739908C33E214 * __this, intptr_t ___pGraphHandle0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppIsValidGraphHandleDelegate_BeginInvoke_m39BF60B2192F6FB883E76597FBBB87B8207D7BAB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pGraphHandle0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean Substance.Platform.NativeFunctions_cppIsValidGraphHandleDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool cppIsValidGraphHandleDelegate_EndInvoke_mBEF3BB5B5B7F6915D7274A8AE77CA2F28175C135 (cppIsValidGraphHandleDelegate_t72E8F8144C8E15FD188709DB3A9739908C33E214 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_cppListAssetsDelegate_tCE8FE55E3B8998DDF5F8C51E8FD4D2B4933CFBF1 (cppListAssetsDelegate_tCE8FE55E3B8998DDF5F8C51E8FD4D2B4933CFBF1 * __this, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppListAssetsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppListAssetsDelegate__ctor_m03356F1DFA5605EB83C7282C286B580D71BCE930 (cppListAssetsDelegate_tCE8FE55E3B8998DDF5F8C51E8FD4D2B4933CFBF1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppListAssetsDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppListAssetsDelegate_Invoke_mC77922D1E97000F071C6A7A230D9EE242CFC4B3A (cppListAssetsDelegate_tCE8FE55E3B8998DDF5F8C51E8FD4D2B4933CFBF1 * __this, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< intptr_t >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< intptr_t >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef intptr_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppListAssetsDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppListAssetsDelegate_BeginInvoke_mE8534ED7665E6ADA1D5A8C65044B130BD2445D56 (cppListAssetsDelegate_tCE8FE55E3B8998DDF5F8C51E8FD4D2B4933CFBF1 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.IntPtr Substance.Platform.NativeFunctions_cppListAssetsDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t cppListAssetsDelegate_EndInvoke_m49FF1A107F1392F768E8D3D28C57F9F3D81446EF (cppListAssetsDelegate_tCE8FE55E3B8998DDF5F8C51E8FD4D2B4933CFBF1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_cppListInputsDelegate_t53CEDDE532A51ABDBA2A02893E487B039F70F31D (cppListInputsDelegate_t53CEDDE532A51ABDBA2A02893E487B039F70F31D * __this, intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___graphHandle0);

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppListInputsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppListInputsDelegate__ctor_m8C211FF8FB0B455BB2DB371B72159914B5E0C1D5 (cppListInputsDelegate_t53CEDDE532A51ABDBA2A02893E487B039F70F31D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Substance.Platform.NativeFunctions_cppListInputsDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppListInputsDelegate_Invoke_m0D39FA850E5354C968FC0E4BE56B2AB3B76B7720 (cppListInputsDelegate_t53CEDDE532A51ABDBA2A02893E487B039F70F31D * __this, intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___graphHandle0);
					else
						result = GenericVirtFuncInvoker1< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___graphHandle0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0);
					else
						result = VirtFuncInvoker1< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppListInputsDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppListInputsDelegate_BeginInvoke_m9E5164A6FBD5CF557568E81059C417E870D60768 (cppListInputsDelegate_t53CEDDE532A51ABDBA2A02893E487B039F70F31D * __this, intptr_t ___graphHandle0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppListInputsDelegate_BeginInvoke_m9E5164A6FBD5CF557568E81059C417E870D60768_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Int32 Substance.Platform.NativeFunctions_cppListInputsDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppListInputsDelegate_EndInvoke_m8DF9162EB664C3A6BF7EB331AFA05A5372B45D59 (cppListInputsDelegate_t53CEDDE532A51ABDBA2A02893E487B039F70F31D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_cppLoadSubstanceDelegate_t064B5235187E3C0476C02760526C786F19A85CEE (cppLoadSubstanceDelegate_t064B5235187E3C0476C02760526C786F19A85CEE * __this, String_t* ___pAssetPath0, intptr_t ___array1, int32_t ___size2, intptr_t ___assetCtx3, intptr_t ___substanceObject4, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___graphIndices5, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___graphPrototypeNames6, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___graphLabels7, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___graphFormats8, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___normalFormats9, uint32_t ___numGraphIndices10, int32_t ___rawOverride11, int32_t ___pPipeline12, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(char*, intptr_t, int32_t, intptr_t, intptr_t, uint32_t*, char**, char**, int32_t*, int32_t*, uint32_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___pAssetPath0' to native representation
	char* ____pAssetPath0_marshaled = NULL;
	____pAssetPath0_marshaled = il2cpp_codegen_marshal_string(___pAssetPath0);

	// Marshaling of parameter '___graphIndices5' to native representation
	uint32_t* ____graphIndices5_marshaled = NULL;
	if (___graphIndices5 != NULL)
	{
		____graphIndices5_marshaled = reinterpret_cast<uint32_t*>((___graphIndices5)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___graphPrototypeNames6' to native representation
	char** ____graphPrototypeNames6_marshaled = NULL;
	if (___graphPrototypeNames6 != NULL)
	{
		il2cpp_array_size_t ____graphPrototypeNames6_Length = (___graphPrototypeNames6)->max_length;
		____graphPrototypeNames6_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____graphPrototypeNames6_Length + 1);
		(____graphPrototypeNames6_marshaled)[____graphPrototypeNames6_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____graphPrototypeNames6_Length); i++)
		{
			(____graphPrototypeNames6_marshaled)[i] = il2cpp_codegen_marshal_string((___graphPrototypeNames6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____graphPrototypeNames6_marshaled = NULL;
	}

	// Marshaling of parameter '___graphLabels7' to native representation
	char** ____graphLabels7_marshaled = NULL;
	if (___graphLabels7 != NULL)
	{
		il2cpp_array_size_t ____graphLabels7_Length = (___graphLabels7)->max_length;
		____graphLabels7_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____graphLabels7_Length + 1);
		(____graphLabels7_marshaled)[____graphLabels7_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____graphLabels7_Length); i++)
		{
			(____graphLabels7_marshaled)[i] = il2cpp_codegen_marshal_string((___graphLabels7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____graphLabels7_marshaled = NULL;
	}

	// Marshaling of parameter '___graphFormats8' to native representation
	int32_t* ____graphFormats8_marshaled = NULL;
	if (___graphFormats8 != NULL)
	{
		____graphFormats8_marshaled = reinterpret_cast<int32_t*>((___graphFormats8)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___normalFormats9' to native representation
	int32_t* ____normalFormats9_marshaled = NULL;
	if (___normalFormats9 != NULL)
	{
		____normalFormats9_marshaled = reinterpret_cast<int32_t*>((___normalFormats9)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____pAssetPath0_marshaled, ___array1, ___size2, ___assetCtx3, ___substanceObject4, ____graphIndices5_marshaled, ____graphPrototypeNames6_marshaled, ____graphLabels7_marshaled, ____graphFormats8_marshaled, ____normalFormats9_marshaled, ___numGraphIndices10, ___rawOverride11, ___pPipeline12);

	// Marshaling cleanup of parameter '___pAssetPath0' native representation
	il2cpp_codegen_marshal_free(____pAssetPath0_marshaled);
	____pAssetPath0_marshaled = NULL;

	// Marshaling cleanup of parameter '___graphPrototypeNames6' native representation
	if (____graphPrototypeNames6_marshaled != NULL)
	{
		const il2cpp_array_size_t ____graphPrototypeNames6_marshaled_CleanupLoopCount = (___graphPrototypeNames6 != NULL) ? (___graphPrototypeNames6)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____graphPrototypeNames6_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____graphPrototypeNames6_marshaled)[i]);
			(____graphPrototypeNames6_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____graphPrototypeNames6_marshaled);
		____graphPrototypeNames6_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___graphLabels7' native representation
	if (____graphLabels7_marshaled != NULL)
	{
		const il2cpp_array_size_t ____graphLabels7_marshaled_CleanupLoopCount = (___graphLabels7 != NULL) ? (___graphLabels7)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____graphLabels7_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____graphLabels7_marshaled)[i]);
			(____graphLabels7_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____graphLabels7_marshaled);
		____graphLabels7_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppLoadSubstanceDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppLoadSubstanceDelegate__ctor_m4B0857D876E2F13CEF9A58C857FD4F0F09382821 (cppLoadSubstanceDelegate_t064B5235187E3C0476C02760526C786F19A85CEE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Substance.Platform.NativeFunctions_cppLoadSubstanceDelegate::Invoke(System.String,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.UInt32[],System.String[],System.String[],System.Int32[],System.Int32[],System.UInt32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppLoadSubstanceDelegate_Invoke_mDCE857F3555C6FE6EBC294BCF7FDD9D29E59F99C (cppLoadSubstanceDelegate_t064B5235187E3C0476C02760526C786F19A85CEE * __this, String_t* ___pAssetPath0, intptr_t ___array1, int32_t ___size2, intptr_t ___assetCtx3, intptr_t ___substanceObject4, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___graphIndices5, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___graphPrototypeNames6, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___graphLabels7, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___graphFormats8, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___normalFormats9, uint32_t ___numGraphIndices10, int32_t ___rawOverride11, int32_t ___pPipeline12, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 13)
			{
				// open
				typedef int32_t (*FunctionPointerType) (String_t*, intptr_t, int32_t, intptr_t, intptr_t, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pAssetPath0, ___array1, ___size2, ___assetCtx3, ___substanceObject4, ___graphIndices5, ___graphPrototypeNames6, ___graphLabels7, ___graphFormats8, ___normalFormats9, ___numGraphIndices10, ___rawOverride11, ___pPipeline12, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, String_t*, intptr_t, int32_t, intptr_t, intptr_t, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pAssetPath0, ___array1, ___size2, ___assetCtx3, ___substanceObject4, ___graphIndices5, ___graphPrototypeNames6, ___graphLabels7, ___graphFormats8, ___normalFormats9, ___numGraphIndices10, ___rawOverride11, ___pPipeline12, targetMethod);
			}
		}
		else if (___parameterCount != 13)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker12< int32_t, intptr_t, int32_t, intptr_t, intptr_t, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, int32_t, int32_t >::Invoke(targetMethod, ___pAssetPath0, ___array1, ___size2, ___assetCtx3, ___substanceObject4, ___graphIndices5, ___graphPrototypeNames6, ___graphLabels7, ___graphFormats8, ___normalFormats9, ___numGraphIndices10, ___rawOverride11, ___pPipeline12);
					else
						result = GenericVirtFuncInvoker12< int32_t, intptr_t, int32_t, intptr_t, intptr_t, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, int32_t, int32_t >::Invoke(targetMethod, ___pAssetPath0, ___array1, ___size2, ___assetCtx3, ___substanceObject4, ___graphIndices5, ___graphPrototypeNames6, ___graphLabels7, ___graphFormats8, ___normalFormats9, ___numGraphIndices10, ___rawOverride11, ___pPipeline12);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker12< int32_t, intptr_t, int32_t, intptr_t, intptr_t, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___pAssetPath0, ___array1, ___size2, ___assetCtx3, ___substanceObject4, ___graphIndices5, ___graphPrototypeNames6, ___graphLabels7, ___graphFormats8, ___normalFormats9, ___numGraphIndices10, ___rawOverride11, ___pPipeline12);
					else
						result = VirtFuncInvoker12< int32_t, intptr_t, int32_t, intptr_t, intptr_t, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___pAssetPath0, ___array1, ___size2, ___assetCtx3, ___substanceObject4, ___graphIndices5, ___graphPrototypeNames6, ___graphLabels7, ___graphFormats8, ___normalFormats9, ___numGraphIndices10, ___rawOverride11, ___pPipeline12);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, intptr_t, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, int32_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___array1) - 1), ___size2, ___assetCtx3, ___substanceObject4, ___graphIndices5, ___graphPrototypeNames6, ___graphLabels7, ___graphFormats8, ___normalFormats9, ___numGraphIndices10, ___rawOverride11, ___pPipeline12, targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (String_t*, intptr_t, int32_t, intptr_t, intptr_t, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, int32_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___pAssetPath0, ___array1, ___size2, ___assetCtx3, ___substanceObject4, ___graphIndices5, ___graphPrototypeNames6, ___graphLabels7, ___graphFormats8, ___normalFormats9, ___numGraphIndices10, ___rawOverride11, ___pPipeline12, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (String_t*, intptr_t, int32_t, intptr_t, intptr_t, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, int32_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___pAssetPath0, ___array1, ___size2, ___assetCtx3, ___substanceObject4, ___graphIndices5, ___graphPrototypeNames6, ___graphLabels7, ___graphFormats8, ___normalFormats9, ___numGraphIndices10, ___rawOverride11, ___pPipeline12, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker13< int32_t, String_t*, intptr_t, int32_t, intptr_t, intptr_t, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___pAssetPath0, ___array1, ___size2, ___assetCtx3, ___substanceObject4, ___graphIndices5, ___graphPrototypeNames6, ___graphLabels7, ___graphFormats8, ___normalFormats9, ___numGraphIndices10, ___rawOverride11, ___pPipeline12);
					else
						result = GenericVirtFuncInvoker13< int32_t, String_t*, intptr_t, int32_t, intptr_t, intptr_t, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___pAssetPath0, ___array1, ___size2, ___assetCtx3, ___substanceObject4, ___graphIndices5, ___graphPrototypeNames6, ___graphLabels7, ___graphFormats8, ___normalFormats9, ___numGraphIndices10, ___rawOverride11, ___pPipeline12);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker13< int32_t, String_t*, intptr_t, int32_t, intptr_t, intptr_t, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pAssetPath0, ___array1, ___size2, ___assetCtx3, ___substanceObject4, ___graphIndices5, ___graphPrototypeNames6, ___graphLabels7, ___graphFormats8, ___normalFormats9, ___numGraphIndices10, ___rawOverride11, ___pPipeline12);
					else
						result = VirtFuncInvoker13< int32_t, String_t*, intptr_t, int32_t, intptr_t, intptr_t, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pAssetPath0, ___array1, ___size2, ___assetCtx3, ___substanceObject4, ___graphIndices5, ___graphPrototypeNames6, ___graphLabels7, ___graphFormats8, ___normalFormats9, ___numGraphIndices10, ___rawOverride11, ___pPipeline12);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, int32_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___pAssetPath0) - 1), ___array1, ___size2, ___assetCtx3, ___substanceObject4, ___graphIndices5, ___graphPrototypeNames6, ___graphLabels7, ___graphFormats8, ___normalFormats9, ___numGraphIndices10, ___rawOverride11, ___pPipeline12, targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, String_t*, intptr_t, int32_t, intptr_t, intptr_t, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, int32_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pAssetPath0, ___array1, ___size2, ___assetCtx3, ___substanceObject4, ___graphIndices5, ___graphPrototypeNames6, ___graphLabels7, ___graphFormats8, ___normalFormats9, ___numGraphIndices10, ___rawOverride11, ___pPipeline12, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppLoadSubstanceDelegate::BeginInvoke(System.String,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.UInt32[],System.String[],System.String[],System.Int32[],System.Int32[],System.UInt32,System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppLoadSubstanceDelegate_BeginInvoke_mB4CFE06E2C7BAB13DD2323454A9B21C353A84026 (cppLoadSubstanceDelegate_t064B5235187E3C0476C02760526C786F19A85CEE * __this, String_t* ___pAssetPath0, intptr_t ___array1, int32_t ___size2, intptr_t ___assetCtx3, intptr_t ___substanceObject4, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___graphIndices5, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___graphPrototypeNames6, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___graphLabels7, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___graphFormats8, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___normalFormats9, uint32_t ___numGraphIndices10, int32_t ___rawOverride11, int32_t ___pPipeline12, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback13, RuntimeObject * ___object14, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppLoadSubstanceDelegate_BeginInvoke_mB4CFE06E2C7BAB13DD2323454A9B21C353A84026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[14] = {0};
	__d_args[0] = ___pAssetPath0;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___array1);
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___size2);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___assetCtx3);
	__d_args[4] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___substanceObject4);
	__d_args[5] = ___graphIndices5;
	__d_args[6] = ___graphPrototypeNames6;
	__d_args[7] = ___graphLabels7;
	__d_args[8] = ___graphFormats8;
	__d_args[9] = ___normalFormats9;
	__d_args[10] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___numGraphIndices10);
	__d_args[11] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___rawOverride11);
	__d_args[12] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___pPipeline12);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback13, (RuntimeObject*)___object14);
}
// System.Int32 Substance.Platform.NativeFunctions_cppLoadSubstanceDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppLoadSubstanceDelegate_EndInvoke_m24F64DB4FCD4A7EC8B2EB4C9DAE071CE0C34CD41 (cppLoadSubstanceDelegate_t064B5235187E3C0476C02760526C786F19A85CEE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_cppModifyTexturePackingDelegate_tF5AFAA7F80AB9BD8EA76D64F744DA92B36739D00 (cppModifyTexturePackingDelegate_tF5AFAA7F80AB9BD8EA76D64F744DA92B36739D00 * __this, intptr_t ___graphHandle0, String_t* ___pSourceNames1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___pSourceComponents2, String_t* ___pTargetName3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___pTargetComponents4, int32_t ___pNumComponents5, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, int32_t*, char*, int32_t*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___pSourceNames1' to native representation
	char* ____pSourceNames1_marshaled = NULL;
	____pSourceNames1_marshaled = il2cpp_codegen_marshal_string(___pSourceNames1);

	// Marshaling of parameter '___pSourceComponents2' to native representation
	int32_t* ____pSourceComponents2_marshaled = NULL;
	if (___pSourceComponents2 != NULL)
	{
		____pSourceComponents2_marshaled = reinterpret_cast<int32_t*>((___pSourceComponents2)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___pTargetName3' to native representation
	char* ____pTargetName3_marshaled = NULL;
	____pTargetName3_marshaled = il2cpp_codegen_marshal_string(___pTargetName3);

	// Marshaling of parameter '___pTargetComponents4' to native representation
	int32_t* ____pTargetComponents4_marshaled = NULL;
	if (___pTargetComponents4 != NULL)
	{
		____pTargetComponents4_marshaled = reinterpret_cast<int32_t*>((___pTargetComponents4)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(___graphHandle0, ____pSourceNames1_marshaled, ____pSourceComponents2_marshaled, ____pTargetName3_marshaled, ____pTargetComponents4_marshaled, ___pNumComponents5);

	// Marshaling cleanup of parameter '___pSourceNames1' native representation
	il2cpp_codegen_marshal_free(____pSourceNames1_marshaled);
	____pSourceNames1_marshaled = NULL;

	// Marshaling cleanup of parameter '___pTargetName3' native representation
	il2cpp_codegen_marshal_free(____pTargetName3_marshaled);
	____pTargetName3_marshaled = NULL;

}
// System.Void Substance.Platform.NativeFunctions_cppModifyTexturePackingDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppModifyTexturePackingDelegate__ctor_m5CAD3B5AB47F650E19A1783484E1452C14542B98 (cppModifyTexturePackingDelegate_tF5AFAA7F80AB9BD8EA76D64F744DA92B36739D00 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Substance.Platform.NativeFunctions_cppModifyTexturePackingDelegate::Invoke(System.IntPtr,System.String,System.Int32[],System.String,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppModifyTexturePackingDelegate_Invoke_m167D0258DF3C9C5BDC0827A4D3BF206135F3965B (cppModifyTexturePackingDelegate_tF5AFAA7F80AB9BD8EA76D64F744DA92B36739D00 * __this, intptr_t ___graphHandle0, String_t* ___pSourceNames1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___pSourceComponents2, String_t* ___pTargetName3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___pTargetComponents4, int32_t ___pNumComponents5, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 6)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pSourceNames1, ___pSourceComponents2, ___pTargetName3, ___pTargetComponents4, ___pNumComponents5, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pSourceNames1, ___pSourceComponents2, ___pTargetName3, ___pTargetComponents4, ___pNumComponents5, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pSourceNames1, ___pSourceComponents2, ___pTargetName3, ___pTargetComponents4, ___pNumComponents5, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker6< intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, int32_t >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pSourceNames1, ___pSourceComponents2, ___pTargetName3, ___pTargetComponents4, ___pNumComponents5);
					else
						GenericVirtActionInvoker6< intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, int32_t >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pSourceNames1, ___pSourceComponents2, ___pTargetName3, ___pTargetComponents4, ___pNumComponents5);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker6< intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0, ___pSourceNames1, ___pSourceComponents2, ___pTargetName3, ___pTargetComponents4, ___pNumComponents5);
					else
						VirtActionInvoker6< intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0, ___pSourceNames1, ___pSourceComponents2, ___pTargetName3, ___pTargetComponents4, ___pNumComponents5);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), ___pSourceNames1, ___pSourceComponents2, ___pTargetName3, ___pTargetComponents4, ___pNumComponents5, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pSourceNames1, ___pSourceComponents2, ___pTargetName3, ___pTargetComponents4, ___pNumComponents5, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppModifyTexturePackingDelegate::BeginInvoke(System.IntPtr,System.String,System.Int32[],System.String,System.Int32[],System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppModifyTexturePackingDelegate_BeginInvoke_m1F07B875B8F0206775DFAD87B9344435039D46AE (cppModifyTexturePackingDelegate_tF5AFAA7F80AB9BD8EA76D64F744DA92B36739D00 * __this, intptr_t ___graphHandle0, String_t* ___pSourceNames1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___pSourceComponents2, String_t* ___pTargetName3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___pTargetComponents4, int32_t ___pNumComponents5, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback6, RuntimeObject * ___object7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppModifyTexturePackingDelegate_BeginInvoke_m1F07B875B8F0206775DFAD87B9344435039D46AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	__d_args[1] = ___pSourceNames1;
	__d_args[2] = ___pSourceComponents2;
	__d_args[3] = ___pTargetName3;
	__d_args[4] = ___pTargetComponents4;
	__d_args[5] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___pNumComponents5);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);
}
// System.Void Substance.Platform.NativeFunctions_cppModifyTexturePackingDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppModifyTexturePackingDelegate_EndInvoke_mF673B395BF22B78AF29742C639B140296B59A380 (cppModifyTexturePackingDelegate_tF5AFAA7F80AB9BD8EA76D64F744DA92B36739D00 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_cppMoveAssetDelegate_t4F3637A73D8E132238C79BD5154B10A1B2D42A92 (cppMoveAssetDelegate_t4F3637A73D8E132238C79BD5154B10A1B2D42A92 * __this, String_t* ___pFromAssetPath0, String_t* ___pToAssetPath1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___pFromAssetPath0' to native representation
	char* ____pFromAssetPath0_marshaled = NULL;
	____pFromAssetPath0_marshaled = il2cpp_codegen_marshal_string(___pFromAssetPath0);

	// Marshaling of parameter '___pToAssetPath1' to native representation
	char* ____pToAssetPath1_marshaled = NULL;
	____pToAssetPath1_marshaled = il2cpp_codegen_marshal_string(___pToAssetPath1);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____pFromAssetPath0_marshaled, ____pToAssetPath1_marshaled);

	// Marshaling cleanup of parameter '___pFromAssetPath0' native representation
	il2cpp_codegen_marshal_free(____pFromAssetPath0_marshaled);
	____pFromAssetPath0_marshaled = NULL;

	// Marshaling cleanup of parameter '___pToAssetPath1' native representation
	il2cpp_codegen_marshal_free(____pToAssetPath1_marshaled);
	____pToAssetPath1_marshaled = NULL;

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppMoveAssetDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppMoveAssetDelegate__ctor_m7ACA058E5943A7BC932C9AEBAAEF903646501CD9 (cppMoveAssetDelegate_t4F3637A73D8E132238C79BD5154B10A1B2D42A92 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Substance.Platform.NativeFunctions_cppMoveAssetDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppMoveAssetDelegate_Invoke_mAE00B82ACA564C2B4E64DE41363EC1528B1D427C (cppMoveAssetDelegate_t4F3637A73D8E132238C79BD5154B10A1B2D42A92 * __this, String_t* ___pFromAssetPath0, String_t* ___pToAssetPath1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pFromAssetPath0, ___pToAssetPath1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pFromAssetPath0, ___pToAssetPath1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< int32_t, String_t* >::Invoke(targetMethod, ___pFromAssetPath0, ___pToAssetPath1);
					else
						result = GenericVirtFuncInvoker1< int32_t, String_t* >::Invoke(targetMethod, ___pFromAssetPath0, ___pToAssetPath1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___pFromAssetPath0, ___pToAssetPath1);
					else
						result = VirtFuncInvoker1< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___pFromAssetPath0, ___pToAssetPath1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___pToAssetPath1) - 1), targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___pFromAssetPath0, ___pToAssetPath1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___pFromAssetPath0, ___pToAssetPath1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(targetMethod, targetThis, ___pFromAssetPath0, ___pToAssetPath1);
					else
						result = GenericVirtFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(targetMethod, targetThis, ___pFromAssetPath0, ___pToAssetPath1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pFromAssetPath0, ___pToAssetPath1);
					else
						result = VirtFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pFromAssetPath0, ___pToAssetPath1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___pFromAssetPath0) - 1), ___pToAssetPath1, targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pFromAssetPath0, ___pToAssetPath1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppMoveAssetDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppMoveAssetDelegate_BeginInvoke_mD9287B60A067349F57366419AB1D39A237880C92 (cppMoveAssetDelegate_t4F3637A73D8E132238C79BD5154B10A1B2D42A92 * __this, String_t* ___pFromAssetPath0, String_t* ___pToAssetPath1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___pFromAssetPath0;
	__d_args[1] = ___pToAssetPath1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 Substance.Platform.NativeFunctions_cppMoveAssetDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppMoveAssetDelegate_EndInvoke_mBAB8562A88C9CFE61FB65FB83EF52E9D9B781542 (cppMoveAssetDelegate_t4F3637A73D8E132238C79BD5154B10A1B2D42A92 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_cppOnGenerateMipMapsChangedDelegate_tEF82EF11ED512D83B6FF4C53B675E4050788A379 (cppOnGenerateMipMapsChangedDelegate_tEF82EF11ED512D83B6FF4C53B675E4050788A379 * __this, intptr_t ___graphHandle0, bool ___bGenerateMipMaps1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___graphHandle0, static_cast<int32_t>(___bGenerateMipMaps1));

}
// System.Void Substance.Platform.NativeFunctions_cppOnGenerateMipMapsChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppOnGenerateMipMapsChangedDelegate__ctor_m9B46FDEDE2D74E7499F1BE537FCB200141773DF7 (cppOnGenerateMipMapsChangedDelegate_tEF82EF11ED512D83B6FF4C53B675E4050788A379 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Substance.Platform.NativeFunctions_cppOnGenerateMipMapsChangedDelegate::Invoke(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppOnGenerateMipMapsChangedDelegate_Invoke_m3BA28D1FD97DE354CFFDCD793ED82BFB98D1956A (cppOnGenerateMipMapsChangedDelegate_tEF82EF11ED512D83B6FF4C53B675E4050788A379 * __this, intptr_t ___graphHandle0, bool ___bGenerateMipMaps1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___bGenerateMipMaps1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___bGenerateMipMaps1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___bGenerateMipMaps1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, bool >::Invoke(targetMethod, targetThis, ___graphHandle0, ___bGenerateMipMaps1);
					else
						GenericVirtActionInvoker2< intptr_t, bool >::Invoke(targetMethod, targetThis, ___graphHandle0, ___bGenerateMipMaps1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0, ___bGenerateMipMaps1);
					else
						VirtActionInvoker2< intptr_t, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0, ___bGenerateMipMaps1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), ___bGenerateMipMaps1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___bGenerateMipMaps1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppOnGenerateMipMapsChangedDelegate::BeginInvoke(System.IntPtr,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppOnGenerateMipMapsChangedDelegate_BeginInvoke_mA1DFC51F3F424A4EEC4550B64CC574BDB3D0B2D1 (cppOnGenerateMipMapsChangedDelegate_tEF82EF11ED512D83B6FF4C53B675E4050788A379 * __this, intptr_t ___graphHandle0, bool ___bGenerateMipMaps1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppOnGenerateMipMapsChangedDelegate_BeginInvoke_mA1DFC51F3F424A4EEC4550B64CC574BDB3D0B2D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	__d_args[1] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___bGenerateMipMaps1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Substance.Platform.NativeFunctions_cppOnGenerateMipMapsChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppOnGenerateMipMapsChangedDelegate_EndInvoke_m9BAF1272E191896002E7A2ECF8748C1B1B5247E4 (cppOnGenerateMipMapsChangedDelegate_tEF82EF11ED512D83B6FF4C53B675E4050788A379 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_cppProcessQueuedOutputsDelegate_t67859933ABBED533B3E8F71CBA2D9005BC084883 (cppProcessQueuedOutputsDelegate_t67859933ABBED533B3E8F71CBA2D9005BC084883 * __this, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppProcessQueuedOutputsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppProcessQueuedOutputsDelegate__ctor_m1C24A6B3A0414099B8F193D0937ABF380218A919 (cppProcessQueuedOutputsDelegate_t67859933ABBED533B3E8F71CBA2D9005BC084883 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Substance.Platform.NativeFunctions_cppProcessQueuedOutputsDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppProcessQueuedOutputsDelegate_Invoke_m15516A052734389A6238791549FEC2C5730F4480 (cppProcessQueuedOutputsDelegate_t67859933ABBED533B3E8F71CBA2D9005BC084883 * __this, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef int32_t (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< int32_t >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< int32_t >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppProcessQueuedOutputsDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppProcessQueuedOutputsDelegate_BeginInvoke_mCD2154EB5FC8E488BB4EB6EDC83A67D48983CCFC (cppProcessQueuedOutputsDelegate_t67859933ABBED533B3E8F71CBA2D9005BC084883 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Int32 Substance.Platform.NativeFunctions_cppProcessQueuedOutputsDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppProcessQueuedOutputsDelegate_EndInvoke_m4CE5E27AFBFB4CAF8BA96F757B4FA17FDCC94B97 (cppProcessQueuedOutputsDelegate_t67859933ABBED533B3E8F71CBA2D9005BC084883 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_cppQueueSubstanceDelegate_t575E4557E550F01EB0BB8D9F91F89E1EA0F74E82 (cppQueueSubstanceDelegate_t575E4557E550F01EB0BB8D9F91F89E1EA0F74E82 * __this, intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___graphHandle0);

}
// System.Void Substance.Platform.NativeFunctions_cppQueueSubstanceDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppQueueSubstanceDelegate__ctor_m3B8D2077DAB0D3187CA877DBF2BA61C965B5FE9D (cppQueueSubstanceDelegate_t575E4557E550F01EB0BB8D9F91F89E1EA0F74E82 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Substance.Platform.NativeFunctions_cppQueueSubstanceDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppQueueSubstanceDelegate_Invoke_m7881711BE6AFCE0A70E76C4E71CBFE2AF9708454 (cppQueueSubstanceDelegate_t575E4557E550F01EB0BB8D9F91F89E1EA0F74E82 * __this, intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___graphHandle0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___graphHandle0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___graphHandle0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___graphHandle0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppQueueSubstanceDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppQueueSubstanceDelegate_BeginInvoke_mD4E7EED40F44D3EB272224876BABBEC4D8367AF2 (cppQueueSubstanceDelegate_t575E4557E550F01EB0BB8D9F91F89E1EA0F74E82 * __this, intptr_t ___graphHandle0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppQueueSubstanceDelegate_BeginInvoke_mD4E7EED40F44D3EB272224876BABBEC4D8367AF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Substance.Platform.NativeFunctions_cppQueueSubstanceDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppQueueSubstanceDelegate_EndInvoke_m56CC33FEB8DABCF597252A12BE76E933D381A7FB (cppQueueSubstanceDelegate_t575E4557E550F01EB0BB8D9F91F89E1EA0F74E82 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_cppRemoveAssetDelegate_tD52C59D0DC1BD5D051DFF11832AEDE9ED69C7146 (cppRemoveAssetDelegate_tD52C59D0DC1BD5D051DFF11832AEDE9ED69C7146 * __this, String_t* ___pAssetPath0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___pAssetPath0' to native representation
	char* ____pAssetPath0_marshaled = NULL;
	____pAssetPath0_marshaled = il2cpp_codegen_marshal_string(___pAssetPath0);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____pAssetPath0_marshaled);

	// Marshaling cleanup of parameter '___pAssetPath0' native representation
	il2cpp_codegen_marshal_free(____pAssetPath0_marshaled);
	____pAssetPath0_marshaled = NULL;

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppRemoveAssetDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppRemoveAssetDelegate__ctor_mEF448F6CBA2B0C9EEA568D22A05DF24BE23B773C (cppRemoveAssetDelegate_tD52C59D0DC1BD5D051DFF11832AEDE9ED69C7146 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Substance.Platform.NativeFunctions_cppRemoveAssetDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppRemoveAssetDelegate_Invoke_m6D0062B8A69ED07E0E9599D24D0C6A07A77F2CCD (cppRemoveAssetDelegate_tD52C59D0DC1BD5D051DFF11832AEDE9ED69C7146 * __this, String_t* ___pAssetPath0, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef int32_t (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pAssetPath0, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pAssetPath0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< int32_t >::Invoke(targetMethod, ___pAssetPath0);
					else
						result = GenericVirtFuncInvoker0< int32_t >::Invoke(targetMethod, ___pAssetPath0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___pAssetPath0);
					else
						result = VirtFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___pAssetPath0);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pAssetPath0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___pAssetPath0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___pAssetPath0);
					else
						result = GenericVirtFuncInvoker1< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___pAssetPath0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pAssetPath0);
					else
						result = VirtFuncInvoker1< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pAssetPath0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___pAssetPath0) - 1), targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pAssetPath0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppRemoveAssetDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppRemoveAssetDelegate_BeginInvoke_m32C15AE74E4A147A82F02A0A90F91B30938DAAAF (cppRemoveAssetDelegate_tD52C59D0DC1BD5D051DFF11832AEDE9ED69C7146 * __this, String_t* ___pAssetPath0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___pAssetPath0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Int32 Substance.Platform.NativeFunctions_cppRemoveAssetDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppRemoveAssetDelegate_EndInvoke_m039AECD55AAF4E78DD3464353BB2DECAC6731541 (cppRemoveAssetDelegate_tD52C59D0DC1BD5D051DFF11832AEDE9ED69C7146 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_cppRemoveGraphInstanceDelegate_tDD1B39D6EF74479C5A5938EBF64076DD892F9265 (cppRemoveGraphInstanceDelegate_tDD1B39D6EF74479C5A5938EBF64076DD892F9265 * __this, intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___graphHandle0);

}
// System.Void Substance.Platform.NativeFunctions_cppRemoveGraphInstanceDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppRemoveGraphInstanceDelegate__ctor_mC6BBC7316ACE442894EB54BD8FAD791506CFC310 (cppRemoveGraphInstanceDelegate_tDD1B39D6EF74479C5A5938EBF64076DD892F9265 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Substance.Platform.NativeFunctions_cppRemoveGraphInstanceDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppRemoveGraphInstanceDelegate_Invoke_m247F0F5F55F682BD20AC304525951CE2E67436AA (cppRemoveGraphInstanceDelegate_tDD1B39D6EF74479C5A5938EBF64076DD892F9265 * __this, intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___graphHandle0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___graphHandle0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___graphHandle0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___graphHandle0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppRemoveGraphInstanceDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppRemoveGraphInstanceDelegate_BeginInvoke_mFE5E6A1E0276927A92A4465C1C6034DA02E5D674 (cppRemoveGraphInstanceDelegate_tDD1B39D6EF74479C5A5938EBF64076DD892F9265 * __this, intptr_t ___graphHandle0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppRemoveGraphInstanceDelegate_BeginInvoke_mFE5E6A1E0276927A92A4465C1C6034DA02E5D674_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Substance.Platform.NativeFunctions_cppRemoveGraphInstanceDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppRemoveGraphInstanceDelegate_EndInvoke_m691FA5CC8563971F89E56306BD79A0B7ECF448A1 (cppRemoveGraphInstanceDelegate_tDD1B39D6EF74479C5A5938EBF64076DD892F9265 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_cppRenderSubstancesDelegate_tBDBA34EA30F65643A372E619838AE6743BDD527F (cppRenderSubstancesDelegate_tBDBA34EA30F65643A372E619838AE6743BDD527F * __this, bool ___bAsync0, intptr_t ___preComputeCallback1, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(static_cast<int32_t>(___bAsync0), ___preComputeCallback1);

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppRenderSubstancesDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppRenderSubstancesDelegate__ctor_mBF6E2EC2F9F0C9042D59D8218E54661DAE2C6F6B (cppRenderSubstancesDelegate_tBDBA34EA30F65643A372E619838AE6743BDD527F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.UInt32 Substance.Platform.NativeFunctions_cppRenderSubstancesDelegate::Invoke(System.Boolean,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t cppRenderSubstancesDelegate_Invoke_mA27D1CBF45E26CCC17CED11D29B43EB2E7BB2E5E (cppRenderSubstancesDelegate_tBDBA34EA30F65643A372E619838AE6743BDD527F * __this, bool ___bAsync0, intptr_t ___preComputeCallback1, const RuntimeMethod* method)
{
	uint32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (bool, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___bAsync0, ___preComputeCallback1, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, bool, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___bAsync0, ___preComputeCallback1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef uint32_t (*FunctionPointerType) (bool, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___bAsync0, ___preComputeCallback1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< uint32_t, bool, intptr_t >::Invoke(targetMethod, targetThis, ___bAsync0, ___preComputeCallback1);
					else
						result = GenericVirtFuncInvoker2< uint32_t, bool, intptr_t >::Invoke(targetMethod, targetThis, ___bAsync0, ___preComputeCallback1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< uint32_t, bool, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___bAsync0, ___preComputeCallback1);
					else
						result = VirtFuncInvoker2< uint32_t, bool, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___bAsync0, ___preComputeCallback1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef uint32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___bAsync0) - 1), ___preComputeCallback1, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, bool, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___bAsync0, ___preComputeCallback1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppRenderSubstancesDelegate::BeginInvoke(System.Boolean,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppRenderSubstancesDelegate_BeginInvoke_m365F0CC668BB57E17E4329829C416A80C1F788E5 (cppRenderSubstancesDelegate_tBDBA34EA30F65643A372E619838AE6743BDD527F * __this, bool ___bAsync0, intptr_t ___preComputeCallback1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppRenderSubstancesDelegate_BeginInvoke_m365F0CC668BB57E17E4329829C416A80C1F788E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___bAsync0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___preComputeCallback1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.UInt32 Substance.Platform.NativeFunctions_cppRenderSubstancesDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t cppRenderSubstancesDelegate_EndInvoke_m0ACE0BD9E077B33A868C422BAD52FC1B9EE26CE7 (cppRenderSubstancesDelegate_tBDBA34EA30F65643A372E619838AE6743BDD527F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_cppSetCallbacksDelegate_tBCBFDBD47E4A8D03B4B54FCBFE4B665C640F6DBF (cppSetCallbacksDelegate_tBCBFDBD47E4A8D03B4B54FCBFE4B665C640F6DBF * __this, intptr_t ___log0, intptr_t ___texture1, intptr_t ___numerical2, intptr_t ___graphInitialized3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___log0, ___texture1, ___numerical2, ___graphInitialized3);

}
// System.Void Substance.Platform.NativeFunctions_cppSetCallbacksDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppSetCallbacksDelegate__ctor_m879AB219F34905149570E29EA1327FE6E08CA131 (cppSetCallbacksDelegate_tBCBFDBD47E4A8D03B4B54FCBFE4B665C640F6DBF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Substance.Platform.NativeFunctions_cppSetCallbacksDelegate::Invoke(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppSetCallbacksDelegate_Invoke_m39CF565D5331C66C9F25EC6AF55EFF7B6C77BA6A (cppSetCallbacksDelegate_tBCBFDBD47E4A8D03B4B54FCBFE4B665C640F6DBF * __this, intptr_t ___log0, intptr_t ___texture1, intptr_t ___numerical2, intptr_t ___graphInitialized3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___log0, ___texture1, ___numerical2, ___graphInitialized3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___log0, ___texture1, ___numerical2, ___graphInitialized3, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___log0, ___texture1, ___numerical2, ___graphInitialized3, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< intptr_t, intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___log0, ___texture1, ___numerical2, ___graphInitialized3);
					else
						GenericVirtActionInvoker4< intptr_t, intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___log0, ___texture1, ___numerical2, ___graphInitialized3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< intptr_t, intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___log0, ___texture1, ___numerical2, ___graphInitialized3);
					else
						VirtActionInvoker4< intptr_t, intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___log0, ___texture1, ___numerical2, ___graphInitialized3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___log0) - 1), ___texture1, ___numerical2, ___graphInitialized3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___log0, ___texture1, ___numerical2, ___graphInitialized3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppSetCallbacksDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppSetCallbacksDelegate_BeginInvoke_m46DCD608E99957061C40AE5093A179D350F79CDF (cppSetCallbacksDelegate_tBCBFDBD47E4A8D03B4B54FCBFE4B665C640F6DBF * __this, intptr_t ___log0, intptr_t ___texture1, intptr_t ___numerical2, intptr_t ___graphInitialized3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppSetCallbacksDelegate_BeginInvoke_m46DCD608E99957061C40AE5093A179D350F79CDF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___log0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___texture1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___numerical2);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphInitialized3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void Substance.Platform.NativeFunctions_cppSetCallbacksDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppSetCallbacksDelegate_EndInvoke_m1B4692322670F4D1B2471C59426D4D1B46066B3D (cppSetCallbacksDelegate_tBCBFDBD47E4A8D03B4B54FCBFE4B665C640F6DBF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_cppSetCreateSubstanceGraphCallbackEditorPtrDelegate_t3B40C905CC291FE9687AD0E4E7B3D5CC1E81E4C7 (cppSetCreateSubstanceGraphCallbackEditorPtrDelegate_t3B40C905CC291FE9687AD0E4E7B3D5CC1E81E4C7 * __this, intptr_t ___fp0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___fp0);

}
// System.Void Substance.Platform.NativeFunctions_cppSetCreateSubstanceGraphCallbackEditorPtrDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppSetCreateSubstanceGraphCallbackEditorPtrDelegate__ctor_mC0F94F94E9A5FF80F78B1A8146935DDBE449A892 (cppSetCreateSubstanceGraphCallbackEditorPtrDelegate_t3B40C905CC291FE9687AD0E4E7B3D5CC1E81E4C7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Substance.Platform.NativeFunctions_cppSetCreateSubstanceGraphCallbackEditorPtrDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppSetCreateSubstanceGraphCallbackEditorPtrDelegate_Invoke_m7657EC0B31BC6897EC1E353D5DB9E4D4ABF21B8D (cppSetCreateSubstanceGraphCallbackEditorPtrDelegate_t3B40C905CC291FE9687AD0E4E7B3D5CC1E81E4C7 * __this, intptr_t ___fp0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___fp0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___fp0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___fp0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___fp0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___fp0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___fp0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___fp0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___fp0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___fp0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppSetCreateSubstanceGraphCallbackEditorPtrDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppSetCreateSubstanceGraphCallbackEditorPtrDelegate_BeginInvoke_m8290D20A62E88B936FFF4B3F0F952967737D65A5 (cppSetCreateSubstanceGraphCallbackEditorPtrDelegate_t3B40C905CC291FE9687AD0E4E7B3D5CC1E81E4C7 * __this, intptr_t ___fp0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppSetCreateSubstanceGraphCallbackEditorPtrDelegate_BeginInvoke_m8290D20A62E88B936FFF4B3F0F952967737D65A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___fp0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Substance.Platform.NativeFunctions_cppSetCreateSubstanceGraphCallbackEditorPtrDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppSetCreateSubstanceGraphCallbackEditorPtrDelegate_EndInvoke_m82FD486FDC746165464A789F94E6EB3A40C96100 (cppSetCreateSubstanceGraphCallbackEditorPtrDelegate_t3B40C905CC291FE9687AD0E4E7B3D5CC1E81E4C7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_cppSetDirtyOutputsDelegate_t5DB997E31548F8A3B8D5CBE5B0552A01C0D1F4ED (cppSetDirtyOutputsDelegate_t5DB997E31548F8A3B8D5CBE5B0552A01C0D1F4ED * __this, intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___graphHandle0);

}
// System.Void Substance.Platform.NativeFunctions_cppSetDirtyOutputsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppSetDirtyOutputsDelegate__ctor_m266E06139EABE88D759C276AF727C812CEC083A3 (cppSetDirtyOutputsDelegate_t5DB997E31548F8A3B8D5CBE5B0552A01C0D1F4ED * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Substance.Platform.NativeFunctions_cppSetDirtyOutputsDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppSetDirtyOutputsDelegate_Invoke_m2C46976DD166ED7091F27291B3F37C78F4B103FB (cppSetDirtyOutputsDelegate_t5DB997E31548F8A3B8D5CBE5B0552A01C0D1F4ED * __this, intptr_t ___graphHandle0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___graphHandle0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___graphHandle0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___graphHandle0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___graphHandle0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppSetDirtyOutputsDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppSetDirtyOutputsDelegate_BeginInvoke_m05767EBC4F9E5E9FA117329F46A561B358421CB2 (cppSetDirtyOutputsDelegate_t5DB997E31548F8A3B8D5CBE5B0552A01C0D1F4ED * __this, intptr_t ___graphHandle0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppSetDirtyOutputsDelegate_BeginInvoke_m05767EBC4F9E5E9FA117329F46A561B358421CB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Substance.Platform.NativeFunctions_cppSetDirtyOutputsDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppSetDirtyOutputsDelegate_EndInvoke_mC81B750E84CF218F7E0D5B463E26AD79A10EF671 (cppSetDirtyOutputsDelegate_t5DB997E31548F8A3B8D5CBE5B0552A01C0D1F4ED * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_cppSetInput_FloatDelegate_t484FD6CE4EA43F49B3F35A0275D8E9BAEA07144D (cppSetInput_FloatDelegate_t484FD6CE4EA43F49B3F35A0275D8E9BAEA07144D * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values2, uint32_t ___numValues3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, float*, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___pInputName1' to native representation
	char* ____pInputName1_marshaled = NULL;
	____pInputName1_marshaled = il2cpp_codegen_marshal_string(___pInputName1);

	// Marshaling of parameter '___values2' to native representation
	float* ____values2_marshaled = NULL;
	if (___values2 != NULL)
	{
		____values2_marshaled = reinterpret_cast<float*>((___values2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___graphHandle0, ____pInputName1_marshaled, ____values2_marshaled, ___numValues3);

	// Marshaling cleanup of parameter '___pInputName1' native representation
	il2cpp_codegen_marshal_free(____pInputName1_marshaled);
	____pInputName1_marshaled = NULL;

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppSetInput_FloatDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppSetInput_FloatDelegate__ctor_mC56A12071F20C421999A87EB32BFBE16C309D8D5 (cppSetInput_FloatDelegate_t484FD6CE4EA43F49B3F35A0275D8E9BAEA07144D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Substance.Platform.NativeFunctions_cppSetInput_FloatDelegate::Invoke(System.IntPtr,System.String,System.Single[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppSetInput_FloatDelegate_Invoke_mA33885B89DA4EC60A791F8DB8D22AFAC75CB5641 (cppSetInput_FloatDelegate_t484FD6CE4EA43F49B3F35A0275D8E9BAEA07144D * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values2, uint32_t ___numValues3, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, String_t*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pInputName1, ___values2, ___numValues3, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, String_t*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (intptr_t, String_t*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pInputName1, ___values2, ___numValues3, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< int32_t, intptr_t, String_t*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, uint32_t >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3);
					else
						result = GenericVirtFuncInvoker4< int32_t, intptr_t, String_t*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, uint32_t >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< int32_t, intptr_t, String_t*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3);
					else
						result = VirtFuncInvoker4< int32_t, intptr_t, String_t*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, String_t*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), ___pInputName1, ___values2, ___numValues3, targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, String_t*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppSetInput_FloatDelegate::BeginInvoke(System.IntPtr,System.String,System.Single[],System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppSetInput_FloatDelegate_BeginInvoke_m5F3AA048C46AA275661190ED96D5DBBD2D241B95 (cppSetInput_FloatDelegate_t484FD6CE4EA43F49B3F35A0275D8E9BAEA07144D * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values2, uint32_t ___numValues3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppSetInput_FloatDelegate_BeginInvoke_m5F3AA048C46AA275661190ED96D5DBBD2D241B95_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	__d_args[1] = ___pInputName1;
	__d_args[2] = ___values2;
	__d_args[3] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___numValues3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Int32 Substance.Platform.NativeFunctions_cppSetInput_FloatDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppSetInput_FloatDelegate_EndInvoke_m57A8FFBFF2AF622FB9D3B6A51C6B54676CA8DF2F (cppSetInput_FloatDelegate_t484FD6CE4EA43F49B3F35A0275D8E9BAEA07144D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_cppSetInput_IntDelegate_tA863B8C05494F48272DA2D4C084B51F23A9BA794 (cppSetInput_IntDelegate_tA863B8C05494F48272DA2D4C084B51F23A9BA794 * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___values2, uint32_t ___numValues3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, int32_t*, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___pInputName1' to native representation
	char* ____pInputName1_marshaled = NULL;
	____pInputName1_marshaled = il2cpp_codegen_marshal_string(___pInputName1);

	// Marshaling of parameter '___values2' to native representation
	int32_t* ____values2_marshaled = NULL;
	if (___values2 != NULL)
	{
		____values2_marshaled = reinterpret_cast<int32_t*>((___values2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(___graphHandle0, ____pInputName1_marshaled, ____values2_marshaled, ___numValues3);

	// Marshaling cleanup of parameter '___pInputName1' native representation
	il2cpp_codegen_marshal_free(____pInputName1_marshaled);
	____pInputName1_marshaled = NULL;

}
// System.Void Substance.Platform.NativeFunctions_cppSetInput_IntDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppSetInput_IntDelegate__ctor_m166CD91A7FE14847560F9360FD200ECD0182B4E8 (cppSetInput_IntDelegate_tA863B8C05494F48272DA2D4C084B51F23A9BA794 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Substance.Platform.NativeFunctions_cppSetInput_IntDelegate::Invoke(System.IntPtr,System.String,System.Int32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppSetInput_IntDelegate_Invoke_mF5423EC645F29713B5206D525456542FCB5A6C25 (cppSetInput_IntDelegate_tA863B8C05494F48272DA2D4C084B51F23A9BA794 * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___values2, uint32_t ___numValues3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pInputName1, ___values2, ___numValues3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pInputName1, ___values2, ___numValues3, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3);
					else
						GenericVirtActionInvoker4< intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3);
					else
						VirtActionInvoker4< intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), ___pInputName1, ___values2, ___numValues3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pInputName1, ___values2, ___numValues3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppSetInput_IntDelegate::BeginInvoke(System.IntPtr,System.String,System.Int32[],System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppSetInput_IntDelegate_BeginInvoke_mE7D71C468B6F56D8B65C28B8FC4017557861EAF2 (cppSetInput_IntDelegate_tA863B8C05494F48272DA2D4C084B51F23A9BA794 * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___values2, uint32_t ___numValues3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppSetInput_IntDelegate_BeginInvoke_mE7D71C468B6F56D8B65C28B8FC4017557861EAF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	__d_args[1] = ___pInputName1;
	__d_args[2] = ___values2;
	__d_args[3] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___numValues3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void Substance.Platform.NativeFunctions_cppSetInput_IntDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppSetInput_IntDelegate_EndInvoke_m1613BA42AA1405C38A70F3C0D58FA0B20CE1C85B (cppSetInput_IntDelegate_tA863B8C05494F48272DA2D4C084B51F23A9BA794 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_cppSetInput_StringDelegate_t85B9D05E0F89A925D39FA6DD400EB2A32746A22B (cppSetInput_StringDelegate_t85B9D05E0F89A925D39FA6DD400EB2A32746A22B * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, String_t* ___value2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___pInputName1' to native representation
	char* ____pInputName1_marshaled = NULL;
	____pInputName1_marshaled = il2cpp_codegen_marshal_string(___pInputName1);

	// Marshaling of parameter '___value2' to native representation
	char* ____value2_marshaled = NULL;
	____value2_marshaled = il2cpp_codegen_marshal_string(___value2);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___graphHandle0, ____pInputName1_marshaled, ____value2_marshaled);

	// Marshaling cleanup of parameter '___pInputName1' native representation
	il2cpp_codegen_marshal_free(____pInputName1_marshaled);
	____pInputName1_marshaled = NULL;

	// Marshaling cleanup of parameter '___value2' native representation
	il2cpp_codegen_marshal_free(____value2_marshaled);
	____value2_marshaled = NULL;

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppSetInput_StringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppSetInput_StringDelegate__ctor_m79FA8B6BB1604AED72D646B94A5C5D229D84BDD6 (cppSetInput_StringDelegate_t85B9D05E0F89A925D39FA6DD400EB2A32746A22B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Substance.Platform.NativeFunctions_cppSetInput_StringDelegate::Invoke(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppSetInput_StringDelegate_Invoke_mCAF71C456B4572A72E495C8B8637C4476F03D587 (cppSetInput_StringDelegate_t85B9D05E0F89A925D39FA6DD400EB2A32746A22B * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, String_t* ___value2, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, String_t*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pInputName1, ___value2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, String_t*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pInputName1, ___value2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (intptr_t, String_t*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pInputName1, ___value2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, String_t*, String_t* >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pInputName1, ___value2);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, String_t*, String_t* >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pInputName1, ___value2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0, ___pInputName1, ___value2);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0, ___pInputName1, ___value2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), ___pInputName1, ___value2, targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, String_t*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pInputName1, ___value2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppSetInput_StringDelegate::BeginInvoke(System.IntPtr,System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppSetInput_StringDelegate_BeginInvoke_m120E9EE29840813235222DD602CF23C68DF6BF2E (cppSetInput_StringDelegate_t85B9D05E0F89A925D39FA6DD400EB2A32746A22B * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, String_t* ___value2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppSetInput_StringDelegate_BeginInvoke_m120E9EE29840813235222DD602CF23C68DF6BF2E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	__d_args[1] = ___pInputName1;
	__d_args[2] = ___value2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 Substance.Platform.NativeFunctions_cppSetInput_StringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppSetInput_StringDelegate_EndInvoke_m0DECF4180AD6FBF1FBBAFF8C2E58E7D5DD7E9E20 (cppSetInput_StringDelegate_t85B9D05E0F89A925D39FA6DD400EB2A32746A22B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_cppSetInput_TextureDelegate_t3E6137FDADDC272FEE49BBD0A4779A0D69034A82 (cppSetInput_TextureDelegate_t3E6137FDADDC272FEE49BBD0A4779A0D69034A82 * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, int32_t ___format2, int32_t ___mipCount3, int32_t ___width4, int32_t ___height5, intptr_t ___pixels6, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, int32_t, int32_t, int32_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___pInputName1' to native representation
	char* ____pInputName1_marshaled = NULL;
	____pInputName1_marshaled = il2cpp_codegen_marshal_string(___pInputName1);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___graphHandle0, ____pInputName1_marshaled, ___format2, ___mipCount3, ___width4, ___height5, ___pixels6);

	// Marshaling cleanup of parameter '___pInputName1' native representation
	il2cpp_codegen_marshal_free(____pInputName1_marshaled);
	____pInputName1_marshaled = NULL;

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppSetInput_TextureDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppSetInput_TextureDelegate__ctor_m0838C3B4D73F8A8D23B04A3CF762317C5F230720 (cppSetInput_TextureDelegate_t3E6137FDADDC272FEE49BBD0A4779A0D69034A82 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Substance.Platform.NativeFunctions_cppSetInput_TextureDelegate::Invoke(System.IntPtr,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppSetInput_TextureDelegate_Invoke_m0DC3736E7B9B486DFA2FF19D8F5102D134ABF12D (cppSetInput_TextureDelegate_t3E6137FDADDC272FEE49BBD0A4779A0D69034A82 * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, int32_t ___format2, int32_t ___mipCount3, int32_t ___width4, int32_t ___height5, intptr_t ___pixels6, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 7)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, String_t*, int32_t, int32_t, int32_t, int32_t, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pInputName1, ___format2, ___mipCount3, ___width4, ___height5, ___pixels6, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, String_t*, int32_t, int32_t, int32_t, int32_t, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pInputName1, ___format2, ___mipCount3, ___width4, ___height5, ___pixels6, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (intptr_t, String_t*, int32_t, int32_t, int32_t, int32_t, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___graphHandle0, ___pInputName1, ___format2, ___mipCount3, ___width4, ___height5, ___pixels6, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker7< int32_t, intptr_t, String_t*, int32_t, int32_t, int32_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pInputName1, ___format2, ___mipCount3, ___width4, ___height5, ___pixels6);
					else
						result = GenericVirtFuncInvoker7< int32_t, intptr_t, String_t*, int32_t, int32_t, int32_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___graphHandle0, ___pInputName1, ___format2, ___mipCount3, ___width4, ___height5, ___pixels6);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker7< int32_t, intptr_t, String_t*, int32_t, int32_t, int32_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graphHandle0, ___pInputName1, ___format2, ___mipCount3, ___width4, ___height5, ___pixels6);
					else
						result = VirtFuncInvoker7< int32_t, intptr_t, String_t*, int32_t, int32_t, int32_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graphHandle0, ___pInputName1, ___format2, ___mipCount3, ___width4, ___height5, ___pixels6);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, String_t*, int32_t, int32_t, int32_t, int32_t, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___graphHandle0) - 1), ___pInputName1, ___format2, ___mipCount3, ___width4, ___height5, ___pixels6, targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, String_t*, int32_t, int32_t, int32_t, int32_t, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graphHandle0, ___pInputName1, ___format2, ___mipCount3, ___width4, ___height5, ___pixels6, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppSetInput_TextureDelegate::BeginInvoke(System.IntPtr,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppSetInput_TextureDelegate_BeginInvoke_m26E169BC4C40BA80DBED414CADCDEE03FDC61CCF (cppSetInput_TextureDelegate_t3E6137FDADDC272FEE49BBD0A4779A0D69034A82 * __this, intptr_t ___graphHandle0, String_t* ___pInputName1, int32_t ___format2, int32_t ___mipCount3, int32_t ___width4, int32_t ___height5, intptr_t ___pixels6, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback7, RuntimeObject * ___object8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cppSetInput_TextureDelegate_BeginInvoke_m26E169BC4C40BA80DBED414CADCDEE03FDC61CCF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[8] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___graphHandle0);
	__d_args[1] = ___pInputName1;
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___format2);
	__d_args[3] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___mipCount3);
	__d_args[4] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___width4);
	__d_args[5] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___height5);
	__d_args[6] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pixels6);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback7, (RuntimeObject*)___object8);
}
// System.Int32 Substance.Platform.NativeFunctions_cppSetInput_TextureDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppSetInput_TextureDelegate_EndInvoke_mC1F6F0467887F596A2F654E89A4B32E56201DF64 (cppSetInput_TextureDelegate_t3E6137FDADDC272FEE49BBD0A4779A0D69034A82 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_cppShutdownSubstanceDelegate_t8C97F4283C5BFAC2186EF838967C7A7F44892109 (cppShutdownSubstanceDelegate_t8C97F4283C5BFAC2186EF838967C7A7F44892109 * __this, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void Substance.Platform.NativeFunctions_cppShutdownSubstanceDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cppShutdownSubstanceDelegate__ctor_m7217F29561109F5BF31ADDFA2A978137B337F9A6 (cppShutdownSubstanceDelegate_t8C97F4283C5BFAC2186EF838967C7A7F44892109 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Substance.Platform.NativeFunctions_cppShutdownSubstanceDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppShutdownSubstanceDelegate_Invoke_m122F11C86D099451997656FFE198F16A05597953 (cppShutdownSubstanceDelegate_t8C97F4283C5BFAC2186EF838967C7A7F44892109 * __this, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef int32_t (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< int32_t >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< int32_t >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Substance.Platform.NativeFunctions_cppShutdownSubstanceDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cppShutdownSubstanceDelegate_BeginInvoke_m7DD7466ED5ACCFFE2A39C12F50A3A45224328EA2 (cppShutdownSubstanceDelegate_t8C97F4283C5BFAC2186EF838967C7A7F44892109 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Int32 Substance.Platform.NativeFunctions_cppShutdownSubstanceDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cppShutdownSubstanceDelegate_EndInvoke_m4EC7351F770081F0DA150631263711608D4029C3 (cppShutdownSubstanceDelegate_t8C97F4283C5BFAC2186EF838967C7A7F44892109 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
