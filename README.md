# Control de dos motores con Arduino y L293D
Este proyecto consiste en controlar dos motores DC utilizando un Arduino Uno, cuatro botones y un puente H. Los botones permiten controlar cuatro movimientos: avanzar, retroceder, girar a la izquierda y girar a la derecha.
Para avanzar o retroceder, ambos motores funcionan a la misma velocidad y el puente H permite cambiar su sentido de giro. Para realizar los giros, se reduce la velocidad de uno de los motores mediante mientras el otro continúa funcionando a mayor velocidad. De esta manera se genera una diferencia de velocidad entre ambos lados que permite cambiar de dirección.
El puente H se utiliza para controlar de manera independiente la dirección y velocidad de los dos motores, evitando conectar los motores directamente a los pines del Arduino.
Los botones están conectados utilizando la configuración INPUT_PULLUP del Arduino, por lo que no se necesitan resistencias externas para mantener estable la señal de entrada.
Archivos del repositorio:
  Codigo.ino: contiene el programa encargado de leer los cuatro botones y controlar la dirección y velocidad de los motores.
  Conexiones.png: muestra las conexiones entre el Arduino Uno, el L293D, los cuatro botones y los dos motores.
  A1.3 Avance del Peroyecto 3 BUENO: explica los componentes utilizados, las conexiones, el funcionamiento del código y los resultados obtenidos.
  Resultados: Video mostrando el funcionamiento del circuito

REFERENCIAS:
OpenAI. (2026, septiembre 28). Control de dos motores con Arduino y puente H L293D (Chat de IA generativa). ChatGPT

"Se utilizó ChatGPT (OpenAI, 2026) como apoyo para el desarrollo, revisión y explicación del código y las conexiones del circuito. El funcionamiento final fue comprobado mediante simulación."
