﻿// WARNING: Please don't edit this file. It was generated by Python/WinRT

#if __has_include("py.Windows.Graphics.DirectX.Direct3D11.h")
#include "py.Windows.Graphics.DirectX.Direct3D11.h"
#endif

// ----- IDirect3DDevice interface --------------------
PyTypeObject* py::winrt_type<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>::python_type;

PyObject* IDirect3DDevice_new(PyTypeObject* type, PyObject* args, PyObject* kwds)
{
    if (kwds != nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "keyword arguments not supported");
        return nullptr;
    }

    Py_ssize_t arg_count = PyTuple_Size(args);

    if (arg_count == 1)
    {
        try
        {
            auto param0 = py::convert_to<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>(args, 0);
            return py::wrap(param0, type);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
    }
    else if (arg_count == -1)
    {
        return nullptr; 
    }

    PyErr_SetString(PyExc_TypeError, "Invalid parameter count");
    return nullptr;
}

static void IDirect3DDevice_dealloc(py::winrt_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>* self)
{
    auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
    py::wrapped_instance(hash_value, nullptr);
    self->obj = nullptr;
}

static PyObject* IDirect3DDevice_Close(py::winrt_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>* self, PyObject* args)
{ 
    Py_ssize_t arg_count = PyTuple_Size(args);

    if (arg_count == 0)
    {
        try
        {
            self->obj.Close();
            Py_RETURN_NONE;
        }
        catch (...)
        {
            return py::to_PyErr();
        }
    }
    else if (arg_count == -1)
    {
        return nullptr; 
    }

    PyErr_SetString(PyExc_TypeError, "Invalid parameter count");
    return nullptr;
}

static PyObject* IDirect3DDevice_Trim(py::winrt_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>* self, PyObject* args)
{ 
    Py_ssize_t arg_count = PyTuple_Size(args);

    if (arg_count == 0)
    {
        try
        {
            self->obj.Trim();
            Py_RETURN_NONE;
        }
        catch (...)
        {
            return py::to_PyErr();
        }
    }
    else if (arg_count == -1)
    {
        return nullptr; 
    }

    PyErr_SetString(PyExc_TypeError, "Invalid parameter count");
    return nullptr;
}

static PyMethodDef IDirect3DDevice_methods[] = {
    { "Close", (PyCFunction)IDirect3DDevice_Close, METH_VARARGS, nullptr },
    { "Trim", (PyCFunction)IDirect3DDevice_Trim, METH_VARARGS, nullptr },
    { nullptr }
};

static PyType_Slot IDirect3DDevice_Type_slots[] = 
{
    { Py_tp_base, nullptr }, // filled out in module init
    { Py_tp_dealloc, IDirect3DDevice_dealloc },
    { Py_tp_new, IDirect3DDevice_new },
    { Py_tp_methods, IDirect3DDevice_methods },
    { 0, nullptr },
};

static PyType_Spec IDirect3DDevice_Type_spec =
{
    "IDirect3DDevice",
    sizeof(py::winrt_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>),
    0,
    Py_TPFLAGS_DEFAULT,
    IDirect3DDevice_Type_slots
};

// ----- IDirect3DSurface interface --------------------
PyTypeObject* py::winrt_type<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>::python_type;

PyObject* IDirect3DSurface_new(PyTypeObject* type, PyObject* args, PyObject* kwds)
{
    if (kwds != nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "keyword arguments not supported");
        return nullptr;
    }

    Py_ssize_t arg_count = PyTuple_Size(args);

    if (arg_count == 1)
    {
        try
        {
            auto param0 = py::convert_to<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>(args, 0);
            return py::wrap(param0, type);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
    }
    else if (arg_count == -1)
    {
        return nullptr; 
    }

    PyErr_SetString(PyExc_TypeError, "Invalid parameter count");
    return nullptr;
}

static void IDirect3DSurface_dealloc(py::winrt_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>* self)
{
    auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
    py::wrapped_instance(hash_value, nullptr);
    self->obj = nullptr;
}

static PyObject* IDirect3DSurface_Close(py::winrt_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>* self, PyObject* args)
{ 
    Py_ssize_t arg_count = PyTuple_Size(args);

    if (arg_count == 0)
    {
        try
        {
            self->obj.Close();
            Py_RETURN_NONE;
        }
        catch (...)
        {
            return py::to_PyErr();
        }
    }
    else if (arg_count == -1)
    {
        return nullptr; 
    }

    PyErr_SetString(PyExc_TypeError, "Invalid parameter count");
    return nullptr;
}

static PyObject* IDirect3DSurface_get_Description(py::winrt_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>* self, PyObject* args)
{ 
    if (args != nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "arguments not supported for get methods");
        return nullptr;
    }
        try
        {
            winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription return_value = self->obj.Description();

            return py::convert(return_value);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
}

static PyMethodDef IDirect3DSurface_methods[] = {
    { "Close", (PyCFunction)IDirect3DSurface_Close, METH_VARARGS, nullptr },
    { "get_Description", (PyCFunction)IDirect3DSurface_get_Description, METH_NOARGS, nullptr },
    { nullptr }
};

static PyType_Slot IDirect3DSurface_Type_slots[] = 
{
    { Py_tp_base, nullptr }, // filled out in module init
    { Py_tp_dealloc, IDirect3DSurface_dealloc },
    { Py_tp_new, IDirect3DSurface_new },
    { Py_tp_methods, IDirect3DSurface_methods },
    { 0, nullptr },
};

static PyType_Spec IDirect3DSurface_Type_spec =
{
    "IDirect3DSurface",
    sizeof(py::winrt_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>),
    0,
    Py_TPFLAGS_DEFAULT,
    IDirect3DSurface_Type_slots
};

// ----- Direct3DMultisampleDescription struct --------------------
PyTypeObject* py::winrt_type<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>::python_type;

winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription py::converter<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>::convert_to(PyObject* obj)
{
    if (!PyDict_Check(obj)) { throw winrt::hresult_invalid_argument(); }
    
    winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription new_value{};
    PyObject* pyCount = PyDict_GetItemString(obj, "Count");
    if (!pyCount) { throw winrt::hresult_invalid_argument(); }
    new_value.Count = converter<int32_t>::convert_to(pyCount);
    PyObject* pyQuality = PyDict_GetItemString(obj, "Quality");
    if (!pyQuality) { throw winrt::hresult_invalid_argument(); }
    new_value.Quality = converter<int32_t>::convert_to(pyQuality);
    return new_value;
}

PyObject* Direct3DMultisampleDescription_new(PyTypeObject* type, PyObject* args, PyObject* kwds)
{
    auto tuple_size = PyTuple_Size(args);
    if ((tuple_size == 0) && (kwds == nullptr))
    {
        try
        {
            winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription instance{};
            return py::wrap_struct(instance, type);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
    }
    
    if ((tuple_size == 1) && (kwds == nullptr))
    {
        auto arg = PyTuple_GetItem(args, 0);
        if (PyDict_Check(arg))
        {
            try
            {
                auto instance = py::converter<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>::convert_to(arg); 
                return py::wrap_struct(instance, type);
            }
            catch (...)
            {
                return py::to_PyErr();
            }
        }
    }
    
    int32_t _Count{};
    int32_t _Quality{};
    static char* kwlist[] = {"Count", "Quality", nullptr};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "ii", kwlist, &_Count, &_Quality))
    {
        return nullptr;
    }
    
    try
    {
        winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription instance{ _Count, _Quality };
        return py::wrap_struct(instance, type);
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* Direct3DMultisampleDescription_get_Count(py::winrt_struct_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>* self, void* /*unused*/)
{
    try
    {
        return py::convert(self->obj.Count);
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static int Direct3DMultisampleDescription_set_Count(py::winrt_struct_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>* self, PyObject* value, void* /*unused*/)
{
    if (value == nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "property delete not supported");
        return -1;
    }
    
    try
    {
        self->obj.Count = py::convert_to<int32_t>(value);
        return 0;
    }
    catch (...)
    {
        return -1;
    }
}

static PyObject* Direct3DMultisampleDescription_get_Quality(py::winrt_struct_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>* self, void* /*unused*/)
{
    try
    {
        return py::convert(self->obj.Quality);
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static int Direct3DMultisampleDescription_set_Quality(py::winrt_struct_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>* self, PyObject* value, void* /*unused*/)
{
    if (value == nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "property delete not supported");
        return -1;
    }
    
    try
    {
        self->obj.Quality = py::convert_to<int32_t>(value);
        return 0;
    }
    catch (...)
    {
        return -1;
    }
}

static PyGetSetDef Direct3DMultisampleDescription_getset[] = {
    { const_cast<char*>("Count"), (getter)Direct3DMultisampleDescription_get_Count, (setter)Direct3DMultisampleDescription_set_Count, nullptr, nullptr },
    { const_cast<char*>("Quality"), (getter)Direct3DMultisampleDescription_get_Quality, (setter)Direct3DMultisampleDescription_set_Quality, nullptr, nullptr },
    { nullptr }
};

static PyType_Slot Direct3DMultisampleDescription_Type_slots[] = 
{
    { Py_tp_new, Direct3DMultisampleDescription_new },
    { Py_tp_getset, Direct3DMultisampleDescription_getset },
    { 0, nullptr },
};

static PyType_Spec Direct3DMultisampleDescription_Type_spec =
{
    "Direct3DMultisampleDescription",
    sizeof(py::winrt_struct_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>),
    0,
    Py_TPFLAGS_DEFAULT,
    Direct3DMultisampleDescription_Type_slots
};

// ----- Direct3DSurfaceDescription struct --------------------
PyTypeObject* py::winrt_type<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>::python_type;

winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription py::converter<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>::convert_to(PyObject* obj)
{
    if (!PyDict_Check(obj)) { throw winrt::hresult_invalid_argument(); }
    
    winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription new_value{};
    PyObject* pyWidth = PyDict_GetItemString(obj, "Width");
    if (!pyWidth) { throw winrt::hresult_invalid_argument(); }
    new_value.Width = converter<int32_t>::convert_to(pyWidth);
    PyObject* pyHeight = PyDict_GetItemString(obj, "Height");
    if (!pyHeight) { throw winrt::hresult_invalid_argument(); }
    new_value.Height = converter<int32_t>::convert_to(pyHeight);
    PyObject* pyFormat = PyDict_GetItemString(obj, "Format");
    if (!pyFormat) { throw winrt::hresult_invalid_argument(); }
    new_value.Format = converter<winrt::Windows::Graphics::DirectX::DirectXPixelFormat>::convert_to(pyFormat);
    PyObject* pyMultisampleDescription = PyDict_GetItemString(obj, "MultisampleDescription");
    if (!pyMultisampleDescription) { throw winrt::hresult_invalid_argument(); }
    new_value.MultisampleDescription = converter<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>::convert_to(pyMultisampleDescription);
    return new_value;
}

PyObject* Direct3DSurfaceDescription_new(PyTypeObject* type, PyObject* args, PyObject* kwds)
{
    auto tuple_size = PyTuple_Size(args);
    if ((tuple_size == 0) && (kwds == nullptr))
    {
        try
        {
            winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription instance{};
            return py::wrap_struct(instance, type);
        }
        catch (...)
        {
            return py::to_PyErr();
        }
    }
    
    if ((tuple_size == 1) && (kwds == nullptr))
    {
        auto arg = PyTuple_GetItem(args, 0);
        if (PyDict_Check(arg))
        {
            try
            {
                auto instance = py::converter<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>::convert_to(arg); 
                return py::wrap_struct(instance, type);
            }
            catch (...)
            {
                return py::to_PyErr();
            }
        }
    }
    
    int32_t _Width{};
    int32_t _Height{};
    int32_t _Format{};
    PyObject* _MultisampleDescription{};
    static char* kwlist[] = {"Width", "Height", "Format", "MultisampleDescription", nullptr};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "iiiO", kwlist, &_Width, &_Height, &_Format, &_MultisampleDescription))
    {
        return nullptr;
    }
    
    try
    {
        winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription instance{ _Width, _Height, static_cast<winrt::Windows::Graphics::DirectX::DirectXPixelFormat>(_Format), py::convert_to<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>(_MultisampleDescription) };
        return py::wrap_struct(instance, type);
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static PyObject* Direct3DSurfaceDescription_get_Width(py::winrt_struct_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>* self, void* /*unused*/)
{
    try
    {
        return py::convert(self->obj.Width);
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static int Direct3DSurfaceDescription_set_Width(py::winrt_struct_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>* self, PyObject* value, void* /*unused*/)
{
    if (value == nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "property delete not supported");
        return -1;
    }
    
    try
    {
        self->obj.Width = py::convert_to<int32_t>(value);
        return 0;
    }
    catch (...)
    {
        return -1;
    }
}

static PyObject* Direct3DSurfaceDescription_get_Height(py::winrt_struct_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>* self, void* /*unused*/)
{
    try
    {
        return py::convert(self->obj.Height);
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static int Direct3DSurfaceDescription_set_Height(py::winrt_struct_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>* self, PyObject* value, void* /*unused*/)
{
    if (value == nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "property delete not supported");
        return -1;
    }
    
    try
    {
        self->obj.Height = py::convert_to<int32_t>(value);
        return 0;
    }
    catch (...)
    {
        return -1;
    }
}

static PyObject* Direct3DSurfaceDescription_get_Format(py::winrt_struct_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>* self, void* /*unused*/)
{
    try
    {
        return py::convert(self->obj.Format);
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static int Direct3DSurfaceDescription_set_Format(py::winrt_struct_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>* self, PyObject* value, void* /*unused*/)
{
    if (value == nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "property delete not supported");
        return -1;
    }
    
    try
    {
        self->obj.Format = py::convert_to<winrt::Windows::Graphics::DirectX::DirectXPixelFormat>(value);
        return 0;
    }
    catch (...)
    {
        return -1;
    }
}

static PyObject* Direct3DSurfaceDescription_get_MultisampleDescription(py::winrt_struct_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>* self, void* /*unused*/)
{
    try
    {
        return py::convert(self->obj.MultisampleDescription);
    }
    catch (...)
    {
        return py::to_PyErr();
    }
}

static int Direct3DSurfaceDescription_set_MultisampleDescription(py::winrt_struct_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>* self, PyObject* value, void* /*unused*/)
{
    if (value == nullptr)
    {
        PyErr_SetString(PyExc_TypeError, "property delete not supported");
        return -1;
    }
    
    try
    {
        self->obj.MultisampleDescription = py::convert_to<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>(value);
        return 0;
    }
    catch (...)
    {
        return -1;
    }
}

static PyGetSetDef Direct3DSurfaceDescription_getset[] = {
    { const_cast<char*>("Width"), (getter)Direct3DSurfaceDescription_get_Width, (setter)Direct3DSurfaceDescription_set_Width, nullptr, nullptr },
    { const_cast<char*>("Height"), (getter)Direct3DSurfaceDescription_get_Height, (setter)Direct3DSurfaceDescription_set_Height, nullptr, nullptr },
    { const_cast<char*>("Format"), (getter)Direct3DSurfaceDescription_get_Format, (setter)Direct3DSurfaceDescription_set_Format, nullptr, nullptr },
    { const_cast<char*>("MultisampleDescription"), (getter)Direct3DSurfaceDescription_get_MultisampleDescription, (setter)Direct3DSurfaceDescription_set_MultisampleDescription, nullptr, nullptr },
    { nullptr }
};

static PyType_Slot Direct3DSurfaceDescription_Type_slots[] = 
{
    { Py_tp_new, Direct3DSurfaceDescription_new },
    { Py_tp_getset, Direct3DSurfaceDescription_getset },
    { 0, nullptr },
};

static PyType_Spec Direct3DSurfaceDescription_Type_spec =
{
    "Direct3DSurfaceDescription",
    sizeof(py::winrt_struct_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>),
    0,
    Py_TPFLAGS_DEFAULT,
    Direct3DSurfaceDescription_Type_slots
};

// ----- Windows.Graphics.DirectX.Direct3D11 Initialization --------------------

int initialize_Windows_Graphics_DirectX_Direct3D11(PyObject* module)
{
    PyObject* type_object{ nullptr };


    IDirect3DDevice_Type_slots[0].pfunc = py::winrt_type<py::winrt_base>::python_type;
    type_object = PyType_FromSpec(&IDirect3DDevice_Type_spec);
    if (type_object == nullptr)
    {
        return -1;
    }
    if (PyModule_AddObject(module, "IDirect3DDevice", type_object) != 0)
    {
        return -1;
    }
    py::winrt_type<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>::python_type = reinterpret_cast<PyTypeObject*>(type_object);

    IDirect3DSurface_Type_slots[0].pfunc = py::winrt_type<py::winrt_base>::python_type;
    type_object = PyType_FromSpec(&IDirect3DSurface_Type_spec);
    if (type_object == nullptr)
    {
        return -1;
    }
    if (PyModule_AddObject(module, "IDirect3DSurface", type_object) != 0)
    {
        return -1;
    }
    py::winrt_type<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>::python_type = reinterpret_cast<PyTypeObject*>(type_object);

    type_object = PyType_FromSpec(&Direct3DMultisampleDescription_Type_spec);
    if (type_object == nullptr)
    {
        return -1;
    }
    if (PyModule_AddObject(module, "Direct3DMultisampleDescription", type_object) != 0)
    {
        return -1;
    }
    py::winrt_type<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>::python_type = reinterpret_cast<PyTypeObject*>(type_object);

    type_object = PyType_FromSpec(&Direct3DSurfaceDescription_Type_spec);
    if (type_object == nullptr)
    {
        return -1;
    }
    if (PyModule_AddObject(module, "Direct3DSurfaceDescription", type_object) != 0)
    {
        return -1;
    }
    py::winrt_type<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>::python_type = reinterpret_cast<PyTypeObject*>(type_object);
    
    return 0;
}