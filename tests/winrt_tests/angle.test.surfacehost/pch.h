//
// Copyright (c) 2014 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
#pragma once

#include "targetver.h"

#include "CppUnitTest.h"
#include <Windows.h>
#include <wrl.h>
#include <wrl\wrappers\corewrappers.h>
#include <windows.applicationmodel.core.h>
#include <windows.ui.xaml.h>
#include <windows.ui.xaml.media.dxinterop.h>
#include <memory>
#include <vector>
#include <map>
#include <algorithm>
#include <dxgi1_2.h>
#include <d3d11.h>

#include <EGL\egl.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace Microsoft::WRL;

#include "MockCoreWindow.h"
#include "MockSwapChainPanel.h"
#include "MockDXGISwapChain.h"
#include "MockDXGIFactory.h"
#include "MockD3DDevice.h"
#include "GenericInterfaces.h"
#include "surfacehost.h"
#include "winrt\corewindowhost.h"
#include "winrt\swapchainpanelhost.h"
#include "winrt\winrtutils.h"

