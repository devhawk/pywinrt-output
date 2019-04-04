# WARNING: Please don't edit this file. It was generated by Python/WinRT

import setuptools

setuptools.setup(
    name = "winrt",
    version = "1.0a0",
    description="Generated Python/WinRT package",
    license="MIT",
    url="http://github.com/Microsoft/xlang",
    ext_modules = [ setuptools.Extension("_winrt", 
        sources = ['winrt/src/py.Windows.Data.Json.cpp', 'winrt/src/py.Windows.Devices.Geolocation.cpp', 'winrt/src/py.Windows.Devices.Geolocation.Geofencing.cpp', 'winrt/src/py.Windows.Foundation.cpp', 'winrt/src/py.Windows.Foundation.Collections.cpp', 'winrt/src/py.Windows.Foundation.Numerics.cpp', 'winrt/src/py.Windows.Graphics.DirectX.cpp', 'winrt/src/py.Windows.Graphics.DirectX.Direct3D11.cpp', 'winrt/src/_winrt.cpp'],
        extra_compile_args = ["/std:c++17", "/await", "/GR-", "/permissive-", "/d2FH4"], 
        extra_link_args = ["/MAP"],
        include_dirs = [".", "cppwinrt"],
        libraries = ["windowsapp"]) ],
    packages = setuptools.find_namespace_packages())
