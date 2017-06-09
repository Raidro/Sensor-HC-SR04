# Sensor HC-SR04 - 

O Sensor ultrassônico HC-SR04 é capaz de medir distâncias de 2cm a 4m com ótima precisão e baixo preço. Este módulo possui um circuito pronto com emissor e receptor acoplados e 4 pinos \(**VCC\(5v\)**, **Trigger**, **ECHO**, **GND\(Terra\)**\) para medição.

# **Especificações do sensor -**

**- Alimentação: 5V DC**

**- Corrente de Operação: 2mA**

**- Ângulo de efeito: 15°**

**- Alcance.: 2cm ~ 4m**

**- Precisão.: 3mm**

# **Funcionamento - **

Para começar é necessário alimentar o módulo e colocar o pino **Trigger** em nível logico alto por mais de 10us\(microssegundos\). Assim o sensor emitirá uma onda sonora que ao encontrar um obstáculo rebaterá de volta em direção ao módulo, sendo que neste tempo de emissão e recebimento do sinal o pino **ECHO** ficará em nível logico alto/high. Logo o calcula da distância pode ser feito de acordo com o tempo em que o pino **ECHO** permaneceu em nível logico alto/high após o pino _**Trigger **_ter sido colocado em nível logico alto/high.

# **Calculo da Distancia - **

Distância = \(Tempo echo em nível alto \* velocidade do som\) /2

# **Material Necessário - **

**1x - Arduino**

**1x - Sensor HC-SR04**

**1x - Protoboard**

**Jumper**

# **Montagem do Circuito - **

![](/assets/Sensor_HC_SR04_esquema_bb.png)





