local projectName = "InZOI"
target(projectName)
    add_rules("ue4ss.mod")
    add_includedirs(".")
    add_files("dllmain.cpp")