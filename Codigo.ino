int botonAtras = 5;
int botonIzquierda = 6;
int botonAdelante = 7;
int botonDerecha = 8;

// Motor izquierdo
int IN1 = 2;
int IN2 = 3;
int ENA = 9;

// Motor derecho
int IN3 = 11;
int IN4 = 12;
int ENB = 10;

void setup()
{
  pinMode(botonAtras, INPUT_PULLUP);
  pinMode(botonIzquierda, INPUT_PULLUP);
  pinMode(botonAdelante, INPUT_PULLUP);
  pinMode(botonDerecha, INPUT_PULLUP);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);

  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);
}

void loop()
{
  if (digitalRead(botonAdelante) == LOW)
  {
    adelante();
  }
  else if (digitalRead(botonAtras) == LOW)
  {
    atras();
  }
  else if (digitalRead(botonDerecha) == LOW)
  {
    derecha();
  }
  else if (digitalRead(botonIzquierda) == LOW)
  {
    izquierda();
  }
  else
  {
    detener();
  }
}

void adelante()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
}

void atras()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
}

void derecha()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, 255);
  analogWrite(ENB, 100);
}

void izquierda()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, 100);
  analogWrite(ENB, 255);
}

void detener()
{
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
}
