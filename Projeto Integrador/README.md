**Requisitos para o Sprint 1**

Deve ser possível definir vários sensores de cada tipo. Deste modo, os dados de todos os sensores
de um dado tipo devem ser mantidos numa matriz.

Considera-se que cada tipo de sensor pode emitir dados com uma frequência específica para esse
tipo (por exemplo, sensor de temperatura a cada 2 minutos, sensor de vento a cada 5 minutos).   

**US101 -** Pretende-se que seja implementada em Assembly uma função que gere números
pseudo-aleatórios, a ser usada na simulação dos sensores. É disponibilizada em C a função
pcg32_ramdom_r() e pretende-se que seja desenvolvida em Assembly uma função equivalente. É
também disponibilizado um exemplo de como ler de /dev/random para inicializar o gerador
indicado anteriormente.

**US102 -** Pretende-se que sejam gerados valores para os dados dos sensores. Cada sensor de um
dado tipo deve produzir valores com uma determinada frequência (por exemplo, 20 segundos). Os
protótipos das funções a desenvolver em Assembly estão indicados em anexo.

**Critério de aceitação:** os valores gerados devem ter alguma coerência, quer entre valores
consecutivos, quer, em alguns casos, entre os valores gerados por sensores de tipos diferentes.

**US103 -** Deve ser construída em C, uma matriz diária de resumo de todos os tipos de sensores. Para
cada tipo de sensor deve ser determinado o valor máximo, o mínimo e a média das leituras
produzidas por todos os sensores desse tipo. A alocação de memória para a matriz é estática. Deve
ser usada aritmética de apontadores para manipular a matriz.

**US104 -** Deve ser possível estabelecer limites máximos e mínimos para os valores produzidos por
um sensor. Se o valor enviado pelo sensor estiver fora desse limite, deve ser assinalado o erro. Após
N leituras consecutivas erradas, deve ser possível reiniciar o sensor, iniciando-se assim uma nova
sequência de valores produzidos. Entende-se por reiniciar o sensor, descartar todas as leituras
erradas e gerar uma nova semente para a geração aleatória de valores.

**Requisitos para o Sprint 2**

**US110 -** A informação de cada sensor deve ser armazenada numa estrutura do tipo:
    
    typedef struct {
        unsigned short id;
        unsigned char sensor_type;
        unsigned short max_limit; // limites do sensor
        unsigned short min_limit;
        unsigned long frequency; // frequency de leituras (em segundos)
        unsigned long readings_size; // tamanho do array de leituras
        unsigned short *readings; // array de leituras diárias
        ... // adicionar o que acharem conveniente
    } Sensor;

Cada tipo de sensor possui uma determinada frequência de leituras. Essa frequência deve ser obtida
durante a execução do programa, a partir de um ficheiro de configuração, ou perguntando ao
utilizador. Naturalmente, essa frequência determina o tamanho do array de leituras diárias.

**Critério de aceitação:** Deve ser possível ter vários sensores de um mesmo tipo, cujo número é
também determinado durante a execução. Para cada tipo de sensor considerado, deve existir um
array dinâmico de estruturas.

**US111 -** Durante a execução do programa deve ser possível:
- acrescentar/remover sensores de um dado tipo
- alterar a frequência de leituras de um sensor, ajustando devidamente o vetor de leituras
O array de estruturas de cada tipo de sensor afetado pela alteração e/ou o array de leituras dos
sensores já existentes devem ser adaptados ao novo cenário.

**US112 -** Em C, exporte para um ficheiro CSV, os dados e leituras de cada um dos sensores. Crie
outro ficheiro CSV com os dados da matriz diária de resumo.
