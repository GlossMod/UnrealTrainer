local projectName = "DYJTrainer"

add_requires("minhook")

target(projectName)
    set_kind("shared")
    set_languages("cxx20")
    set_exceptions("cxx")

    add_includedirs(".")

    add_files("**.cpp")

    add_deps("UE4SS")

    add_packages("minhook")
    add_defines("NOMINMAX")  -- 添加 NOMINMAX 定义

    -- 配置 include
    add_includedirs("include")

    
    on_load(function (target)
        import("build_configs", { rootdir = get_config("scriptsRoot") })
        build_configs:set_output_dir(target)
    end)
    
    on_config(function (target)
        import("build_configs", { rootdir = get_config("scriptsRoot") })
        build_configs:config(target)
    end)
    
    after_clean(function (target)
        import("build_configs", { rootdir = get_config("scriptsRoot") })
        build_configs:clean_output_dir(target)
    end)
