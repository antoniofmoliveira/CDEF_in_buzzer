# Arduino Uno SMD - Plays "do re mi fa" in a passive buzzer

Plays "do re mi fa" in buzzer connected to an arduino uno smd and Golang.

* VS Code
* Golang 1.25.8
* TinyGo 0.40.1 [TinyGo](tinygo.org)
* TinyGo Toolkit for VS Code (amken.tinygo-toolkit)
* lib `tinygo.org/x/drivers/buzzer`

## TinyGo Toolkit

* Connect board (arduino uno smd)
* View > Command Palette > TinyGo: Initialize TinyGo Project
* View > Command Palette > TinyGo: Configure Intellisense
* Project > Target (arduino uno)
* Project > Port (/dev/ttyUSB0)
* Project > Flash

## In code

```go
package main

import (
  "machine"
  "tinygo.org/x/drivers/buzzer"
)
...
```

then

```bash
go mod tidy
```
