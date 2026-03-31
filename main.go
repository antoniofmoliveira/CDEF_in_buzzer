package main

import (
	"machine"

	"tinygo.org/x/drivers/buzzer"
)

func main() {
	buzzerPin := machine.D8
	buzzerPin.Configure(machine.PinConfig{Mode: machine.PinOutput})

	buzzerOut := buzzer.New(buzzerPin)

	c := buzzer.C5
	d := buzzer.D5
	e := buzzer.E5
	f := buzzer.F5
	g := buzzer.G5

	q := .25
	h := .5

	m := []float64{c, d, e, f, f, f, c, d, c, d, d, d, c, g, f, e, e, e, c, d, e, f, f, f}
	t := []float64{q, q, q, h, q, h, q, q, q, h, q, h, q, q, q, h, q, h, q, q, q, h, q, h}

	// for i := 0; i < len(m); i++ {
	// 	 buzzerOut.Tone(m[i], t[i]) // it doesn't work. why?
	// }

	buzzerOut.Tone(m[0], t[0])
	buzzerOut.Tone(m[1], t[1])
	buzzerOut.Tone(m[2], t[2])
	buzzerOut.Tone(m[3], t[3])
	buzzerOut.Tone(m[4], t[4])
	buzzerOut.Tone(m[5], t[5])
	buzzerOut.Tone(m[6], t[6])
	buzzerOut.Tone(m[7], t[7])
	buzzerOut.Tone(m[8], t[8])
	buzzerOut.Tone(m[9], t[9])
	buzzerOut.Tone(m[10], t[10])
	buzzerOut.Tone(m[11], t[11])
	buzzerOut.Tone(m[12], t[12])
	buzzerOut.Tone(m[13], t[13])
	buzzerOut.Tone(m[14], t[14])
	buzzerOut.Tone(m[15], t[15])
	buzzerOut.Tone(m[16], t[16])
	buzzerOut.Tone(m[17], t[17])
	buzzerOut.Tone(m[18], t[18])
	buzzerOut.Tone(m[19], t[19])
	buzzerOut.Tone(m[20], t[20])
	buzzerOut.Tone(m[21], t[21])
	buzzerOut.Tone(m[22], t[22])
	buzzerOut.Tone(m[23], t[23])
}
