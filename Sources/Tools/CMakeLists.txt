include_directories("${PLASMA_TOOLS_ROOT}")
include_directories("${PLASMA_SOURCE_ROOT}/FeatureLib")
include_directories("${PLASMA_SOURCE_ROOT}/NucleusLib")
include_directories("${PLASMA_SOURCE_ROOT}/PubUtilLib")

if(PLASMA_BUILD_TOOLS)
    add_subdirectory(SoundDecompress)
    add_subdirectory(plSystemInfo)

    if(Qt_FOUND)
        add_subdirectory(plLocalizationEditor)
        if(WIN32)
            add_subdirectory(plNetLog)
        endif()
        add_subdirectory(plResBrowser)
    endif()

    if(WIN32)
        add_subdirectory(plShaderAssembler)
    endif()

    if(TARGET freetype AND Qt_FOUND)
        add_subdirectory(plFontConverter)
    endif()
endif()

add_subdirectory(plLocalizationBenchmark)

# Max Stuff goes below here...
if(PLASMA_BUILD_MAX_PLUGIN)
    add_subdirectory(MaxComponent)
    add_subdirectory(MaxConvert)
    add_subdirectory(MaxExport)
    add_subdirectory(MaxMain)
    add_subdirectory(MaxPlasmaLights)
    add_subdirectory(MaxPlasmaMtls)
endif()
