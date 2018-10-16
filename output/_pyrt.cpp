﻿// WARNING: Please don't edit this file. It was generated by Python/WinRT

#include "py.Windows.Data.Json.h"
#include "py.Windows.Devices.Geolocation.h"
#include "py.Windows.Foundation.h"
#include "py.Windows.Foundation.Collections.h"

PyTypeObject* py::winrt_type<py::winrt_base>::python_type;

PyDoc_STRVAR(winrt_base_doc, "base class for wrapped WinRT object instances.");

static PyType_Slot winrt_base_Type_slots[] =
{
    {Py_tp_doc, winrt_base_doc},
    { 0, nullptr },
};

static PyType_Spec winrt_base_Type_spec =
{
    "_winrt_base",
    0,
    0,
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
    winrt_base_Type_slots
};

std::unordered_map<std::size_t, PyObject*> instance_map{};

void py::wrapped_instance(std::size_t key, PyObject* obj)
{
    // if obj is null, remove from instance_map
    //if (obj)
    //{
    //    auto insert = instance_map.try_emplace(key, obj);

    //    if (insert.second == false)
    //    {
    //        throw winrt::hresult_invalid_argument(L"wrapped WinRT object already cached");
    //    }
    //}
    //else
    //{
    //    // TODO: clean up the wrapped WinRT object. Currently leaking
    //    instance_map.extract(key);
    //}
}

PyObject* py::wrapped_instance(std::size_t key)
{
    //auto const it = instance_map.find(key);
    //if (it == instance_map.end())
    {
        return nullptr;
    }

    //return it->second;
}

static PyObject* init_apartment(PyObject* /*unused*/, PyObject* /*unused*/)
{
    winrt::init_apartment();
    Py_RETURN_NONE;
}

static PyObject* uninit_apartment(PyObject* /*unused*/, PyObject* /*unused*/)
{
    winrt::uninit_apartment();
    Py_RETURN_NONE;
}

static PyMethodDef module_methods[]{
    { "init_apartment", init_apartment, METH_NOARGS, "initialize the apartment" },
    { "uninit_apartment", uninit_apartment, METH_NOARGS, "uninitialize the apartment" },
    { nullptr }
};

static int module_exec(PyObject* module)
{
    PyObject* type_object{ nullptr };
    type_object = PyType_FromSpec(&winrt_base_Type_spec);
    if (type_object == nullptr)
    {
        return -1;
    }
    if (PyModule_AddObject(module, "_winrt_base", type_object) != 0)
    {
        return -1;
    }
    py::winrt_type<py::winrt_base>::python_type = reinterpret_cast<PyTypeObject*>(type_object);

    if (initialize_Windows_Data_Json(module) != 0)
    {
        return -1;
    }

    if (initialize_Windows_Devices_Geolocation(module) != 0)
    {
        return -1;
    }

    if (initialize_Windows_Foundation(module) != 0)
    {
        return -1;
    }

    if (initialize_Windows_Foundation_Collections(module) != 0)
    {
        return -1;
    }

    return 0;
}

static PyModuleDef_Slot module_slots[] = {
    {Py_mod_exec, module_exec},
    {0, nullptr}
};

PyDoc_STRVAR(module_doc, "Langworthy projection module.\n");

static struct PyModuleDef module_def = {
    PyModuleDef_HEAD_INIT,
    "_pyrt",
    module_doc,
    0,
    module_methods,
    module_slots,
    nullptr,
    nullptr,
    nullptr
};

PyMODINIT_FUNC
PyInit__pyrt(void)
{
    return PyModuleDef_Init(&module_def);
}
