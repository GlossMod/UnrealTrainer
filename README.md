# UnrealTrainer

> for https://github.com/bitonality/UE4SSCPPTemplate

此存储库包含一些自定义的`xmake`任务，以协助您的模组开发。

- `xmake newmod`
- `xmake installmod`
- `xmake bi`
- `xmake ue4ss`

## `xmake newmod [-r, --regen] name`

`newmod`命令将确保您已经克隆了UE4SS存储库，然后引导新模组的创建。

运行`xmake newmod CoolMod`将在您的存储库中生成`/Mods/CoolMod/...`，并自动将其与xmake系统链接。如果您安装了VS2022，则`newmod`命令还将自动生成一个VS项目，该项目可以位于`/vsxmake2022/UE4SSCppTemplate.sln`。

## `xmake installmod [-d, --exedir] name`

`installmod`命令将您的构建输出复制到特定的游戏目录。要安装的构建配置是从当前配置的xmake模式(`xmake f -m <mode>`)派生出来的。这个配置模式是全局的，适用于`RE-UE4SS`存储库和`Mods`文件夹中的所有模组。如果您想指定要安装的特定配置，那么您可以通过运行`xmake f -m "Game__Debug__Win64"`来更改xmake配置。

运行`xmake installmod --exedir="Path\To\Your\Game\Dir" CoolMod`将复制构建输出并在游戏的模组文件夹中正确安装`CoolMod`。

注意，运行`xmake installmod`不会自动构建您的模组。您必须手动构建它，使用`xmake build`，或者使用`xmake bi`任务来构建并安装您的模组。

## `xmake bi [-d, --exedir] name`

这是一个简写任务，它将运行`xmake build -y <modname>`，然后是`xmake installmod`命令。这个一行命令便于快速测试/迭代您的模组。

## `xmake ue4ss [-r, --remote] [-u, --update]`

默认情况下，`xmake newmod`命令将尝试检出UE4SS的最新发布标签，以便构建您的模组。如果您想构建您的模组对应不同的远程，那么您可以指定一个分支或标签作为`--remote=`参数。

`xmake ue4ss --remote="v3.1.0"`将尝试使用标签"v3.1.0"作为检出的UE4SS版本。

您可以使用最新的发布标签，通过指定`xmake ue4ss --remote="latest"`。

您也可以指定要使用的分支而不是标签。`xmake ue4ss --remote=main`将检出UE4SS的`main`分支。

如果您想从远程分支获取上游更改，那么您可以使用`--update`参数来拉取远程更改。

`xmake ue4ss --remote=main --update`将从`main`分支本地拉取最新的远程更改。

您也可以运行`xmake ue4ss --update`，xmake将尝试从您的本地UE4SS当前所在的分支拉取更改。