/*
  ==============================================================================

   This file is part of the JUCE library.
   Copyright (c) 2022 - Raw Material Software Limited

   JUCE is an open source library subject to commercial or open-source
   licensing.

   By using JUCE, you agree to the terms of both the JUCE 7 End-User License
   Agreement and JUCE Privacy Policy.

   End User License Agreement: www.juce.com/juce-7-licence
   Privacy Policy: www.juce.com/juce-privacy-policy

   Or: You may also use this code under the terms of the GPL v3 (see
   www.gnu.org/licenses).

   JUCE IS PROVIDED "AS IS" WITHOUT ANY WARRANTY, AND ALL WARRANTIES, WHETHER
   EXPRESSED OR IMPLIED, INCLUDING MERCHANTABILITY AND FITNESS FOR PURPOSE, ARE
   DISCLAIMED.

  ==============================================================================
*/

#pragma once

#include "../../../ProjectSaving/jucer_ProjectExporter.h"
#include "../../../Application/Windows/jucer_TranslationToolWindowComponent.h"
#include "../../../Utility/UI/jucer_JucerTreeViewBase.h"
#include "../../../Utility/Helpers/jucer_NewFileWizard.h"
#include "../jucer_ContentViewComponents.h"
#include "../jucer_FileGroupInformationComponent.h"
#include "../jucer_ModulesInformationComponent.h"

struct TreeItemTypes
{
    #include "jucer_ProjectTreeItemBase.h"
    #include "jucer_ExporterTreeItems.h"
    #include "jucer_ModuleTreeItems.h"
    #include "jucer_FileTreeItems.h"
};
