[![MIT License](https://img.shields.io/badge/license-MIT-blue.svg?style=flat)](LICENSE.md)

# chromebook-utils
Android HaXe extension with android utils:
- detect device type(chromebook or tablet/phone)


# Installation

You can install chromebook-utils using haxelib:

	haxelib git chromebook-utils https://github.com/soccertutor/chromebook-utils


To add it to a Lime or OpenFL project, add this to your project file:

    <haxelib name="chromebook-utils" />

# Usage

## 1. isChromebook:

```haxe
if (ChromebookUtils.isChromebook()) {
	//chromebook
} else {
	//tablet or phone
}
```

        


    