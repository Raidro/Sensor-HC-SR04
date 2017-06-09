#define echoPin 9 // defino o pino 9 digital do arduino como o echo
#define trigPin 10 // defino o pino 10 digital do arduino como trigger

void setup() {

  Serial.begin (9600);
  pinMode(trigPin, OUTPUT); //defino o pino do trigger como saida
  pinMode(echoPin, INPUT); // defino o pino do echo como entrada

}

void loop() {
  long duracao, distancia;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duracao = pulseIn(echoPin, HIGH); // pega a duração do echo
  distancia = (duracao / 2) / 29.1; // calcula a distancia baseado no tempo que o echo levou pra ir e voltar (em cm)


  Serial.print(distancia); // mostra a distancia em "cm"
  Serial.println(" cm"); // coloca um CM no final da distancia (só como identificador)

  delay(500); // delay para ele executar tudo de novo
}

