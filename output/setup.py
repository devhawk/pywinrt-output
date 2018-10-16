﻿# WARNING: Please don't edit this file. It was generated by Python/WinRT

# TODO: programmaticially enable/disable debug settings (/Od and /DEBUG)

import setuptools

setuptools.setup(
    name = "pyrt",
    version = "0.1",
    ext_modules = [ setuptools.Extension('_pyrt', 
        sources = ['py.Windows.Data.Json.cpp', 'py.Windows.Devices.Geolocation.cpp', 'py.Windows.Devices.Geolocation.Geofencing.cpp', 'py.Windows.Foundation.cpp', 'py.Windows.Foundation.Collections.cpp', 'py.Windows.Foundation.Numerics.cpp', '_pyrt.cpp'],
        extra_compile_args = ["/std:c++17", "/await", "/Zi", "/Od"],
        include_dirs = ['.'],
        extra_link_args=['/DEBUG'],
        libraries = ['windowsapp']) ],
    packages = setuptools.find_packages())