/*
----      MÚSICA DÓ RÉ MÍ FÁ NO BUZZER      ----
=================================================
== BLOG DA ROBOTICA - www.blogdarobotica.com ==
=================================================
Autor: Carol Correia Viana
E-mail: contato@blogdarobotica.com
Facebook: facebook.com/blogdarobotica
Instagram:@blogdarobotica
YouTube: youtube.com/user/blogdarobotica
=================================================
== CASA DA ROBOTICA - www.casadarobotica.com ==
=================================================
Facebook: facebook.com/casadaroboticaoficial
Instagram:@casadarobotica
=================================================
*/


int buzzer = 8;//Atribui o valor 9 a variável buzzer, que representa o pino digital 8, onde o buzzer está conectado

// Frequências das notas musicais (em Hz)
const int notaDo = 262; // Dó
const int notaRe = 294; // Ré
const int notaMi = 330; // Mi
const int notaFa = 349; // Fá
const int notaSol = 392; // Sol

void setup() {
  pinMode(buzzer, OUTPUT);//Definindo o pino buzzer como de saída.
}

void loop() {
  //Dó
  tone(buzzer, notaDo, 300);//Frequência e duração da nota Dó
  delay(200);//Intervalo de 200 milissegundos
  noTone(buzzer);

  //Ré
  tone(buzzer, notaRe, 300);//Frequência e duração da nota Ré
  delay(200);//Intervalo de 200 milissegundos
  noTone(buzzer);

  //Mi
  tone(buzzer, notaMi, 300);//Frequência e duração da nota Mi
  delay(200);//Intervalo de 200 milissegundos
  noTone(buzzer);

  //Fá
  tone(buzzer, notaFa, 300);//Frequência e duração da nota Fá
  delay(200);//Intervalo de 200 milissegundos
  noTone(buzzer);

  //Fá Fá
  for (int a = 0; a < 2; a++) {
    tone(buzzer, notaFa, 200);//Frequência e duração da nota Fá
    delay(300);//Intervalo de 300 milissegundos
    noTone(buzzer);
  }

  //Dó
  tone(buzzer, notaDo, 300);//Frequência e duração da nota Dó
  delay(200);//Intervalo de 200 milissegundos
  noTone(buzzer);

  //Ré
  tone(buzzer, notaRe, 300);//Frequência e duração da nota Ré
  delay(200);//Intervalo de 200 milissegundos
  noTone(buzzer);

  //Dó
  tone(buzzer, notaDo, 300);//Frequência e duração da nota Dó
  delay(200);//Intervalo de 200 milissegundos
  noTone(buzzer);

  //Ré
  tone(buzzer, notaRe, 300);//Frequência e duração da nota Ré
  delay(200);//Intervalo de 200 milissegundos
  noTone(buzzer);

  //Ré Ré
  for (int b = 0; b < 2; b++) {
    tone(buzzer, notaRe, 200);//Frequência e duração da nota Ré
    delay(300);//Intervalo de 300 milissegundos
    noTone(buzzer);
  }

  //Dó
  tone(buzzer, notaDo, 300);//Frequência e duração da nota Dó
  delay(200);//Intervalo de 200 milissegundos
  noTone(buzzer);

  //Sol
  tone(buzzer, notaSol, 300);//Frequência e duração da nota Sol
  delay(200);//Intervalo de 200 milissegundos
  noTone(buzzer);

  //Fa
  tone(buzzer, notaFa, 300);//Frequência e duração da nota Fá
  delay(200);//Intervalo de 200 milissegundos
  noTone(buzzer);

  //Mi
  tone(buzzer, notaMi, 300);//Frequência e duração da nota Fá
  delay(200);//Intervalo de 200 milissegundos
  noTone(buzzer);

  //Mi Mi
  for (int c = 0; c < 2; c++) {
    tone(buzzer, notaMi, 200);//Frequência e duração da nota Mi
    delay(300);//Intervalo de 300 milissegundos
    noTone(buzzer);
  }

  //Dó
  tone(buzzer, notaDo, 300);//Frequência e duração da nota Dó
  delay(200);//Intervalo de 200 milissegundos
  noTone(buzzer);

  //Ré
  tone(buzzer, notaRe, 300);//Frequência e duração da nota Ré
  delay(200);//Intervalo de 200 milissegundos
  noTone(buzzer);

  //Mi
  tone(buzzer, notaMi, 300);//Frequência e duração da nota Mi
  delay(200);//Intervalo de 200 milissegundos
  noTone(buzzer);

  //Fa
  tone(buzzer, notaFa, 300);//Frequência e duração da nota Fá
  delay(200);//Intervalo de 200 milissegundos
  noTone(buzzer);

  for (int d = 0; d < 2; d++) {
    tone(buzzer, notaFa, 200);//Frequência e duração da nota Fá
    delay(300);//Intervalo de 300 milissegundos
    noTone(buzzer);
  }

  delay(3000);

}
