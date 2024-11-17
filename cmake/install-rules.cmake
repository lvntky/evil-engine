install(
    TARGETS evil-engine_exe
    RUNTIME COMPONENT evil-engine_Runtime
)

if(PROJECT_IS_TOP_LEVEL)
  include(CPack)
endif()
