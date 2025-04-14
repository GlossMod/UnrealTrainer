local projectName = "InZOI"

add_requires("minhook")
 
target(projectName)
    add_rules("ue4ss.mod")
    add_includedirs(".")
    add_includedirs(".")
    add_files("**.cpp")
    add_includedirs("include")
    add_packages("minhook")

