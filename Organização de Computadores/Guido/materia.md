#ORGANIZAÇÃO DE COMPUTADORES
_____________________________


## 1. Caracterização do Hardware Computacional: Componentes e Circuitos.

A caracterização dos diversos componentes que são utilizados em um sistema de computadores deve ser feita, antes de mais nada, com base nos grupos elétrico existentes: **condutores de eletricidade**, **isolantes de eletricidade** e **semi-condutores de eletricidade**. Destacamos ainda que todo condutor de eletricidade, isto é, todo material que possui muitos elétrons livres, tal como o cobre, é também um bom condutor térmico. Por outro lado, bons condutores térmicos não são necessariamente bons condutores elétricos, tal como ocorre com um plástico especial chamado de mica que por essa característica é amplamente empregado em computadores e outros aparelhos eletro eletrônicos, visando conectar mecanicamente um componente eletrônico com a sua chapa metálica dissipadora de calor, isolando-os eletricamente.
Além da caracterização elétrica básica mencionamos nesse curso questões físicas um pouco mais atuais que podem ajudar a explicar o funcionamento de determinados componentes e fenomenos, que ao longo das próximas décadas, devem começar a viabilizar na prática o que se conhece por **computação quântica**, que deve ser tratado com um paradigma distinto do atual. Neste aspecto, a anti-matéria ja possui papel importante, a exemplo, do que utilizamos na medicina avançada, exemplificado por um exame para diagnóstico preciso de tumores chamado de **PET-SCAN**(tecnoglogia de emissão de pósitrons). Neste exame a anti-matéria do elétron(pósitron), isto é, elétron com carga positiva, é a base do funcionamento.
Além dos conceitos mencionados devemos também dar particular atenção aos processos que envolvem a matéria física e seu quarto estado que é plasmático. Quando temos um sólido perfeitamente caracterizado, tal como um bloco de gelo, podemos aquece-lo de forma que as moléculas de água que estavam mais fortemente conectadas ficam um pouco mais soltas conduzindo ao estado líquido. Prosseguindo no aquecimento, as moléculas de água ficam ainda mais desunidas, obtendo-se então o estado gasoso. Se prosseguirmos aquecendo o material, até atingir temperaturas extremamente altas, chegamos a um estado, chamado **plasmático**, em que não somente as moléculas estão muito dissosiadas, mas os próprios átomos se descaracterizam. Esse conjunto de partículas dissosiadas, que formam o plasma, é consideravelmente instável e normalmente **condutor de eletricidade**, ja que existe consideravel quantidade de elétrons livres. Importante ainda é resaltar que não somente o aquecimento extremo conduz ao plasma pois um campo elétrico também pode ter potencial para dissosiar partículas de um gás fazendo com que ele atinga o quarto estado da matéria(plasmático), tal como ocorre em alguns tipos de lâmpadas por exemplo. Neste curso, consideramos o estado plasmático para fins de projeto e frabricação de componentes eletrônicos tais como os circuitos integrados, conforme veremos adiante.
Destacamos ainda o conceito de **litografia**, que constitui um tipo de arte, isto é desenho, em uma superfície sólida, de modo a depositar partículas em um determinado material para que ele passe a possuir as características elétricas desejadas. Normalmente a litografia é utilizada na construção de componentes e circuitos integrados em escala micro ou nanoscópica, utilizando-se um feixe de elétrons para realizar a deposição de materiais químicos. Sendo assim, é comum utilizarmos o termo litografia por feixe de elétrons. 

Passamos agora a recordar e caracterizar eletricamente os principais componentes que constituem os circuitos eletronicos digitais e em seguida reuniremos os conceitos para compreender processos de fabricação.

 - **Resistência ohmica**: caracterizada nos resistores eletrônicos, constitue um comportamento não reativo, isto é independente da duração ou da frequência do sinal elétrico que atravessa o componente. Utilizaremos, seguindo o padrão a letra `R` para menciona-la.

 - **Indutância elétrica**: caracterizada por meio dos indutores, popularmente conhecidos como bubinas, caracteriza-se por um elemento reativo, isto é um elemento que oferece oposição a passagem da corrente elétrica, sendo que esta oposição muda de acordo com a duração ou a frequência do sinal elétrico que o atravessa. Simbolizando por `L` o valor de uma indutância, que é medida em Henry, quantificamos a oposição que um indutor oferece a passagem da corrente elétrica por `ω.L` sendo omega `ω` a frequência do sinal elétrico que atravessa a indutância.

 - **Capacitância**: caracterizada nos componentes conhecidos como capacitores, oferece resistência, ou seja, oposição a passagem da corrente elétrica também de modo reativo, sendo essa oposição quantificada por `1/ ω.C` em que `C` é o valor do capacitor em Farads.

De acordo com os três elementos definidos acima, caracterizamos o termo conhecido como **impedância**, medida em ohms, como a soma de três forças contrárias à passagem da corrente elétrica: **resistência**, **indutância** e **capacitância**. A primeira, normalmente obtida utilizando-se pistas de carvão litografadas em um sólido, a segunda espiras de fio condutor em torno de um núcleo em que gera um campo magnético na tentativa de impedir variações da corrente elétrica e a terceira operando de modo semelhante por meio de duas placas condutoras separadas por um material isolante que forma um campo elétrico entre suas placas. Concluindo, denotamos por `Z` a impedância total, com suas partes resistiva, indutiva e capacitiva.


**<p align="center"> Z = Zr + Zl + Zc </p>**

-------------------------------------------

# Exemplos:

### 1. Caracterize a impedância resistiva de um resistor de 100ohms quando ele é atravessado por um sinal senoidal de amplitude +-1V com frequência de 10Hz.

### Solução:

>	Z = 100ohms, pois resistencia não é reativa e assim frequencias e amplitudes dos sinais que atravessam em nada alteram a oposição que o componente oferece.

### 2. Caracterize a impedância indutiva de uma bubina de ½ Henry, quando percorrida por um sinal elétrico de 100Hz, senoidal, com amplitudes +-5V.

### Solução:

>		Zl = ω.L
>		Zl = 2.pi.f.L
>		Zl = 2.3,1415.100.0,5 = 314 ohms

>Obs: a amplitude do sinal que atravessa o indutor não,de +-5V no caso, não é utilizada nos calculos, pois o que interessa é a frequência deste sinal.

### 3. Idem exemplo anterior assumindo que o componente é agora um capacitor de 2 Farads

### Solução:

>			Zc = 1/ ω.C
>			Zc = ½.3,14.100.2
>			Zc = 1/1256
>
>			Zc = 0,000796 ohms

---------------------------------------------------------


Além das caracterizações das impedância realizadas acima, os conceitos fisicos pertinentes explicam que `Zl` e `Zc` atuam de modos opostos um ao outro. Desta forma, qualquer circuito elétrico básico, isto é, contendo `R`, `L` e `C` deve ser estudado de modo vetorial utilizando-se a seguinte representação gráfica:

![gss](https://cloud.githubusercontent.com/assets/3441126/9205016/36a13748-4036-11e5-9a87-2158c2ff6c83.png)
**<p align="center">L = recebe o valor de ω.L</p>**
**<p align="center">C = recebe o valor de 1/ ω.C</p>**
**<p align="center">R = recebe o valor da resistência total</p>**

![index](https://cloud.githubusercontent.com/assets/3441126/9205022/38e593dc-4036-11e5-8caf-1c11c2553365.jpeg)
![index2](https://cloud.githubusercontent.com/assets/3441126/9205024/39f34422-4036-11e5-9320-4a666d20e13f.jpeg)


------------
> Aula: 24 de agosto

----------


## Equivalentes de Thevenin e de Norton

Na prática, para nós, os equivalentes de thevenin e Norton constituem procedimentos que visam facilitar resoluções que envolvam nós e malhas tais como nos tradicionais equacionamentos Kirchoff, já esplorados em outras diciplinas.

Desse modo, definimos:

 - **Equivalente de Thevenin**: Associação de uma fonte de tensão com um resistor em série, isto é:
 
![img1](https://cloud.githubusercontent.com/assets/3441126/9579825/b1e4146c-4fcb-11e5-9288-f4e86ab8491b.png)

 - **Equivalente de Norton**: Associação, em paralelo, de uma fonte de corrente com um resistor, isto é:

![img2](https://cloud.githubusercontent.com/assets/3441126/9579826/b333012a-4fcb-11e5-8019-b3d99b37dad9.png)


A teoria envolvendo os equivalente de thevenin e Norton garante que para todo thevenin existe um Norton eletricamente equivalente e vise versa. Nas conversões os resistores mantem os seus valores e as transições de tensão para a corrente e vise versa são reguladas pela lei de ohm.

Muito mais popular na prática é o uso de **fontes de tensão**, isto é, a fonte que fornece uma vontagem fixa independentemente da carga conectada a ela. Alternativamente, dizemos tratar da fonte na qual a resistencia da carga, isto é, o aparelho a ser alimentado é muito **maior** que a resistencia interna da fonte. **Fonte de corrente**, por outro lado, constitui um modelo mais comum na teoria do que na pratica, tratando-se do elemento que se auto-regula para fornecer uma corrente constante independentemente da carga conectada a ela, alternativamente, dizemos tratar-se da fonte na qual a resistencia da carga é muito **menor** do que a resistencia interna.

Diante do exposto, passamos a analisar alguns exemplos.

- **Exemplo**: Determine a corrente no resistor de 50 ohms no circuito abaixo.

![img3](https://cloud.githubusercontent.com/assets/3441126/9586505/9b252ec8-4ff3-11e5-9987-815cc66e0d4f.png)

- **solução**:  Exceto ao elemento ao qual indagamos alguma grandeza, no caso a corrente no resistor de 50 ohm, procederemos com conversões Thevenin-Norton, visando simplificar o circuito por meio de associações de resistores e/ou fontes. Procedemos como segue:

![img4](https://cloud.githubusercontent.com/assets/13787877/10100558/f85a5e3c-6368-11e5-8fce-66bac10588ad.png)

-------------------

- **Exemplo 2**: Determine a tensão e a corrente no resistor de 100 ohm do circuito abaixo.

![img5](https://cloud.githubusercontent.com/assets/3441126/9586589/1f60b586-4ff4-11e5-80a2-ff28e345b8d2.png)


-----

- **Exemplo 3**: Idem anterior, invertendo a polaridade da fonte de `30 v` e associando, em serie com a fonte de `5 v`, de modo contraposto, outra fonte de `5 V`

![img6](https://cloud.githubusercontent.com/assets/13787877/10100944/b354a4d4-636b-11e5-8a18-1a96582eb335.png)


> **OBS**: Em nenhum momento encontraremos 2 fontes de corrente em série, a não ser que ambas possuem o mesmo valor de corrente e o mesmo sentido de polariadade. Caso contrario teriamos uma situação fisica impossivel, pois se a fonte de corrente mantem a corrente constante e a corrente é a mesma para todos os elementos de uma associação em serie, não podemos admitir situação divergente. Por outro lado, são admissiveis fontes de tensão em paralelo, situação na qual a tensão equivalente é a da maior das fontes e a corrente equivalente é a soma das correntes individuais. As polaridades dessas fontes de tensão não devem entretanto, ser contrapostas.

> **OBS**: Toda a teoria que envolve os equivalentes Thevenin e Norton pode tambem ser utilizada quando as fontes de alimentação existentes sob o circuito sobre analise forem alternadas. Nesse caso, costumamos utilizar como simbolos representantes das fontes de tensão correntes alternadas respectivamente:

![img7_](https://cloud.githubusercontent.com/assets/13787877/10101519/9c8ab348-636f-11e5-8462-ba0696c483cd.png)

> Alem de considerarmos os elementos `R`, `L` e `C` com as impedancias complexas já estudadas. Neste ambito as fontes são tambem tratadas em uma abordagem vetorial, constumeiramente conhecida como fasores e tensão em corrente 

-----

## Diodos semicondutores e aplicações

Conforme ja vimos anteriormente, os diodos constituem componentes que permitem a passagem da corrente eletrica apenas em um sentido, impedindo o fluxo de eletrons no sentido oposto desde que seja respeitado o limite maximo de tensão aplicada ao componente, pois, uma vez ultrapaçado o limiar, o diodo pode entrar em curto-circuito, permitindo a passagem da corrente em ambos os sentidos ou abrir-se, tornando-se um isolante. Fabricado com base nos materiais semicondutores silicio ou germanio, possui como simbolo eletrico:

![img8](https://cloud.githubusercontent.com/assets/13787877/10101577/eafe5d72-636f-11e5-989a-71d3bd762256.png)

Sendo `A` e `K`, respectivamente, os terminais anodo e catodo, ou seja, o que deve ficar com potencial mais positivo e mais negativo respectivamente, de modo a permitir a passagem da corrente eletrica, situação na qual dizemos que o componente está diretamente polarizado. Ligado ao contrario, dizemos que esta reversamente polarizado.

Não esquecemos que o diodo, para funcionarem, como comentado, possuem uma junção de dois micro cristais de silicio ou germanio, sendo que um deles é dopado com material do tipo `N` isto é, que possui cinco eletrons livres na banda de valencia e o outro é dopado com um material do tipo `P`, isto é, que possui tres eletrons livres na banda de valencia. As dopagens constituem a mistura de impurezas que penetram na estrutura atomica dos cristais de silicio ou germanio, alterando as suas propriedades fisico quimicas.

Um fato relevante que envolve o uso de diodos é que, estando diretamente polarizado, isto é, permitindo a passagem da corrente eletrica, o diodo força uma queda de tensão que é percebida mesmo sem fluxo de corrente, queda esta que está em torno de 0.6 a 0.7 `v` nos diodos de silicio e 0.1 a 0.2 `v` nos diodos de germanio. Este comportamento se distingue daquele ocorrido com materiais condutores, tais como os que compoe os resistores. Nestes, a falta de fluxo de eletrons, isto é, corrente eletrica nula, implica em manutenção da tensão da fonte 

![img9](https://cloud.githubusercontent.com/assets/13787877/10101762/f8206d14-6370-11e5-934d-8197fdca5210.png)

Percebe-se frequentemente a aplicação dos diodos em circuitos eletronicos tais como os de computadores, particularmente, nas fontes de alimentação. Presentes nos desktops e nos carregadores dos laptops os diodos possuem papel fundamental na conversão da tensão alternada da rede eletrica em tensão continua e de polaridade fixa necessaria para alimentar os componentes eletronicos dos circuitos computacionais.

Sabemos que a geração e transmição de energia eletrica entrega para os usuarios uma tensão alternada. Isto possibilita o uso de transformadores para reduzir 110v ou 220v para tensões aceitaveis pelos circuitos eletronicos computacionais, pois os transformadores somente funcionam com tensão alternada devido a variação do fluxo eletro magnetico que ela proporciona e, por outro lado, divisores de tensão resistivos não são convenientes para efetuar este tipo de redução, tendo em vista o aquecimento demasiado  ou a indisponibilidade de corrente eletrica. 

De qualquer forma, as tensões reduzidas com o uso de transformadores continuam sendo alternadas e os circuitos eletronicos computacionais somente aceitam tensões continuas. A conversão das tensões alternadas para continuas constituem um processo conhecido como **retificação** e que pode ser realizado utilizando-se diodos.

> img 10

A conversão da tensão alternada em tensão continua, realizada conforme o circuito que segue, com um unico diodo, é conhecida como retificação de meia-onda.

> img 11

Uma variação da retificação em meia onda é a retificação em onda completa que se faz com base em dois diodos, e é possivel quando o secundario do transformador possui uma derivação central, que é utilizada como terra, ou referencia. O efeito entretanto é o mesmo do circuito anterior. O esquema eletrico segue:

> img 12

A terceira tecnica de retificação, que é a mais propicea e mais utilizada industrialmente, utiliza 4 diodos e é conhecida como retificação em ponte, estabelencendo-se conforme o circuito abaixo.

> img 13

-----------

#### MINIPROVA 2

 -  Elabore, ao seu gosto, um circuito eletrico com 2 malhas e 2 fontes de alimentação de tensão continua, sendo uma em cada malha, com um unico resistor na intersecção das malhas. Enconte a corrente nesse resistor utilizando os equivalente de thevenin e norton e, em seguida, recorde os seus estudos anteriores e confira o resultado utilizando os leis de kirchoff por meio da resolução de um sistema 2x2.
 
--------------


Além dos circuitos de retificação observados anteriormente, destacamos a utilidade dos diodos semicondutores no sentido de proteger equipamentos contra possíveis inversões de polaridade das fontes de alimentação. A ligação no carregador do labtop constitui um classico exemplo. Nos laptops mais comuns, o plug que conecta o carregador ao computador é do tipo **P2** ou similar. Este plug por si só, ja impede inversões de polaridade, pois não há como conecta-lo erroneamente, entretanto,  no caso da eventual quebra do cabo, e posterior conserto, pode haver descuito e inversão dos fios, nesse caso, um diodo semicondutor poderia ser utilizado para evitar que a corrente eletrica tende circular pelo circuito com a polaridade indevida, danificando-o.

> img 14

Notamos que o circuito acima não será danificado no caso de uma inversão de polaridade, devido ao diodo de proteção. Entretanto, com a polaridade invertida o circuito não funcionará. Podemos fazer uso de uma outra estrategia, comunmente utilizada nos macbooks da apple, para permitir que o circuito do labtop funcione normalmente indepemdente da polaridade em que a fonte é conectada.

Podemos utilizar uma ponte de diodos, aproveitando a ideia da retificação em ponte, estudada anteriormente, para alimentar o circuito na polaridade correta, qualquer que seja a polaridade da conexão da fonte.

> img 15


Interessantemente, percebemos que o uso da ponte de diodos na entrada dos laptops está restrito, atualmente, as maquinas da apple. Tal fato é devido, principalmente, ao custo, não dos diodos, mas sim dos componentes existentes dentro do carregador, pois este deverá fornecer quase `1,5v` a mais do que forneceria caso a ponte de diodos não existisse. circuitos tais como retificadores normalmente necessitar manter correntes consideraveis, e portanto o silicio deve ser adotado ao invez do germanio, implicando em queda de aproximadamente 0,7v por diodo. Tendo em vista que este modelo de retificador requer que a corrente circule por 2 diodos, justificamos os comentarios.


Diodos são também comunmente utilizado em circuitos computacionais na confecção de memórias programadas em nível de hardware e com uma gravação única definida pelo fabricante. Por meio da propriedade de somente permitir a passagem da corrente elétrica em um único sentido, são aproveitados para definir estruturas de memória conhecidas como **matrizes de diodos**. Constituem configurações tais como a que segue:

> img 16


No circuito acima, o funcionamente básico ocorre em virtude do posicionamento dos diodos. Para ler dados da saída, basta conecta-la as entradas do circuito que irá receber os códigos gravados, que normalmente corresponde as entradas de algumas portas lógicas. Para que as saídas apresentem os códigos gravados em cada um dos endereços basta alimentar, com uma fonte de tensão, o endereço desejado, sendo que somente um endereço pode ser alimentado por vez. Tendo em vista a considerável sensibilidade das portas lógicas que receberão os sinasi de saída, nenhuma dessas linhas elétricas pode ficar desconectada de um nivel estabelecido de tensão, isto é, elas não podem "flutuar". Para isso a solução comunmente adotada é a ligação, em cada linha de saída, de um resistor de alto valor ao negativo de alimentação("terra"). Tais resistores, chamados de pull down, garantem que se não ouver nivel lógico 1 em determinada saída, ela estará fisicamente, ainda que passando pelo resistor, conectada ao nivel lógico 0, por outro lado, quando o nivel logico 1 estiver presente, os resistores em nada atrapalharão, pois desviam uma parcela infinea da corrente elétrica para o terra.

 - **Exercicio**: Elabore uma memória baseada em matriz de diodos, contanto com os resistores de pulldown, que possibilite, em sua saida de 4 bits, a leitura de todos os valores binarios inteiros, entre 0 e 15, cada qual acessivel por meio de um endereço. Assim, no endereço `E0` deve estar gravado o valor 0, e assim por diante até o `E15`.

![img 17](https://cloud.githubusercontent.com/assets/3441126/9581037/6a4cd672-4fd3-11e5-96e3-71ea50d59cf8.png)

**<p align="center"> Continua ...</p>**


> Um tipo particularmente importante de diodo é o tradicional **light-emittind diode(LED)**. Este componente, disponivel comercialmente em varios formatos, tamanhos e cores, possui em sua composição, alem dos cristais de silicio, dopados com materiais P e N, outro elemento químico para a liberação dos photons da junção dos 2 cristais. Este elemento normalmente é o arceneto de galium (AsGa). É muito importante observar que todo LED, para qual o simbolo é um diodo com duas setas apontando para fora, requer normalmente um resistor em série com ele em qualquer um dos terminais para emitir luz na intensidade conveniente e sem ser danificado, conforme o circuito abaixo:

> ![img 16](https://cloud.githubusercontent.com/assets/3441126/9587100/0d8ed1be-4ff7-11e5-9b17-a095853a33cc.png)


> Para determinar o valor de R ideal, para trabalhar em conjunto com o LED, devemos recorrer ao manual do fabricante do LED para descobrir qual é a corrente que deve passar por ele para mante-lo iluminado sem que ele se danifique. Na prática, não recorremos, entretanto, aos manuais, pois em geral os LEDs trabalham idealmente com correntes entre 10 e 20 miliamperes. Desse modo determinamos `R` em função desse dado.

> - Exemplo: Determine `R` no circuito acima considerando que a fonte é de 12v.

> - Solução:
>    U=RI
>    R=U/I =  12-0.7/0.0113 (queda de tensao diodo(queda zener))
>    11.3/0.0113 = 1000 ohm

----------------

### MINIPROVA 3
 - Explique as diferenças existentes entre a retificação de meia onda e a retificação em ponte, comentando caracteristicas vantagens e desvantagens.

---------------

## Diodos Especiais

Algumas modificações nas estruturas fisico-quimicas durante a construção dos diodos retificadores comuns, particularmente utilizando silicio ao invez de germanio, permite obter diodos que possuem comportamentos eletricos distintos dos tradicionais. Um tipo especial de diodo é conhecido como **zener** e possui o seguinte simbolo eletrico:

> img 18

Este diodo, quando diretamente polarizado, conduz normalmente a corrente elétrica, assim como o diodo retificador comum. Por outro lado, quando inversamente polarizado, isto é, quando ligado no sentido contrario de condução, pode tambem conduzir a corrente em proporções variaveis, de modo a fazer com que a tensão em seus terminais seja constante, mesmo mediante variações da tensão de entrada no arranjo divisor de tensão composto de um resistor e o diodo zener. Desse modo, o diodo zener funciona como um elemento estabilizador, isto é, regulador de tensão, conforme exemplificado a seguir:

> img 19


Os diodos zener não possuem valores ou código de cores. Ao contrario, eles possuem uma sigla que, de acordo com o manual do fabricante, especifica as suas caracteristicas comportamentais. Os principais parametros são a tensão de estabilização a tensão maxima de entrada, e a corrente, ou potencia, maxima que ele suporta. É ainda importante observar os calculos necessarios para determinar o valor mais ou menos propíceo do resistor que se associa ao zener na tabela de regulagem, tal como no circuito acima.

Nesse circuito acima, imaginando que o circuito a ser alimentado com a tensão regulada de `5V` consuma uma corrente de `0.1A`. Desse modo temos:

> img 20

Alem disso, a potencia dissipada pelo zener e pelo resistor `R` podem ser calculadas.

**<p align="center"> P = U . I</p>**

Para o zener, temos `5V . 0.1A = 0.5W` , alem disso, para o resistor `R` temos ` 7V . 0.1 = 0.7W`.
Resumindo, a compra dos componentes para este circuito corresponde a:

 - 1 diodo zener para `5V` e `0.5W`
 - 1 resistor de `70ohm` para `0.7W`

Neste circuito em especifico é importante informar, no momento da compra, as potencias, pois, caso contrario, principamente no caso do resistor, a falta de especificação implicará na venda de componentes padrão, isto é, de um quarto ou oitavo de `w`, que neste caso, não suportariam o aquecimento. Finalmente lembramos que não são todos os possiveis valores de resistores que existem no comercio. No caso, `70 ohm` não é um valor comercial, sendo, `68 ohm` o valor comercial mais proximo. Para nós, este valor é adequado, pois o zener se auto-ajustará para balancear a diferença.

-----------

 - Exercicio: Projete um circuito estabilizador de tensão, com divisor de tensão por zener, que receba na entrada, tensão em torno de `9 v` para alimentar um processador com `3.3 V` e que consuma uma corrente maxima de `0.2 A`. Especifique os detalhes do zener e do resistor conjugado com base nas referidas caracteristicas.
 

> img 21

Desse modo, o resistor `R` será de `28.5 ohm` por `1.14 W`. Comercialmente, os valores mais proximos disponíveis são: `27 ohm` e `2 W`. O zener por sua vez será de `3.3 V` por `0.66 W`. Comercialmente os valores mais proximos são: `3.3 V` por `1 W`.

-----------

Um outro tipo de diodo especial é conhecido como **diodo Varicap** que possui o seguinte simbolo elétrico:

> img 22

Este componente, quando diretamente polarizado, funciona como um diodo comum retificador. Por outro lado, quando inversamente polarizado, ele tambem funciona como um diodo retificador comum, mas com a particular propriedade de atuar como um capacitor, para qual a capacitancia depende da tensão que chega aos seus terminais. Na pratica, este componente é utilizado para substituir capacitores variaveis, que são muitas vezes mecanicamnete inviaveis. Desse modo, podemos controlar uma capacitancia com base em tensão, e não diretamente com base em ajuste mecanico.

Injetando tensão no diodo inversamente polarizado, a agromeração dos portadores de carga em ambos os cristais de slicio dopados se aglomeram, simulando duas placas condutoras separadas por um isolante, trazendo assim o efeito capacitivo. Um caso classico de aplicação é o do circuito abaixo.

> img 23


--------------

## ARTIGO 1:

Confeccionar um pequeno texto em latex e em ingles com no maximo 3 paginas, opcionalmente contendo figuras e tabelas, com formato livre, mas contendo ao menos:

 - Abstract
 - Discusão
 - Referencias (3 ou 4 bastam)

Com o tema ** A tecnologia de fabricação de circuitos integrados: Complementary Metal-oxide semiconductor (CMOS)**

-------

## Mini Prova 4
 - Assumindo uma fonte de tensão continua, mas ajustável entre 10 e 20 volts, projete um pequeno circuito com zener para, mediante qualquer entrada de tensão na faixa mensionada, entregar na saida 6 volts, com capacidade para 50 miliamperes. Forneça as especificações completas do divisor de tensão formado pelo resistor e pelo zener.

-------------

## Osciladores e Cristrais

Na eletrónica, inclusive nos circuitos computacionais, o componente conhecido como **cristal de quartzo** consiste de um elemento que possui extrema estabilidade para controlar frequencias de ressonancia, ou frequencias de vibração. Particularmente, os circuitos conhecidos como **osciladores** são aqueles que produzem vibrações, em nosso caso, vibrações eletricas, caracterizadas por variações periódicas de tensão ao longo do tempo, comumente expressas em modo gráfico por meio de ondas, tais como a onda **quadrada**, **retangular**, **senoidal**, **triangular**, entre outra.


![wavetypes](https://cloud.githubusercontent.com/assets/3441126/9992658/e252a90e-6049-11e5-97d0-202444fd5b74.gif)


Eletricamente, o ocilador é um amplificador no qual parte do sinal de saida retorna à entrada, estabelecendo assim, um **ciclo**. Existem diversas formas de controlar como a parcela que retorna à entrada se comporta, o que influencia diretamente na frequencia e na amplitude do sinal alternado do ocilador. Resistores, capacitores e indutores são opções para o controle deste retorno, e portanto, da frequencia de ocilação. Tais componetes, entre tanto, possui caracteristicas fisicas que facilmente se alteram em função da temperatura, pressão, umidade do ambiente, entre outros fatores. **O cristal de quartzo**, por outro lado, é, conforme mencionado, **extremamente estável**, quase não sofrendo a influencia de fatores externos. A sua frequencia de resonancia é dada por suas dimensões fisicas e pelo modo como ele é cortado, ou lapidado industrialmente. Particularmente, dizemos que o quartzo é um cristal, ou material, **piezoelétrico**, isto é, vibra mediante um esforço mecanico ou elétrico aplicado em seus terminais.

Um exemplo segue:

> img25

No circuito acima, o simbolo **-| D |-** representa o cristal de quartzo. Observamos que, por meio de um resistor, parte da tensão presente na saida da porta lógica retorna a sua entrada via resistor. Este retorno é a condição que comentamos inicialmente para a manutenção da oscilação. Alem disso, o resistor alimenta o cristal, cauzando nele, uma pressão elétrica, o que faz com que ele vibre na frequencia para a qual ele foi cortado, ou lapidado. Desse modo, por exemplo, se requisitamos na industria eletrónica o corte de um cristal para 7mhz, por exemplo, e utilizamos ele no circuito acima, então obteremos na saida da porta logica, esta mesma frequencia.

Uma particularidade interessante é o simbolo:

> img 26 (Z)

que esta inserido dentro da porta lógica, ele significa que a porta lógica não é comum, mas sim do tipo **gatilho de Smith** (Smith Trigger). Isso significa que esta porta lógica defini muito bem as transições entre `0` e `1`, correndo pouco ou nenhum risco de ficar "confusa" com variações suaves presentes na sua entrada. Por isso, este tipo de porta é normalmente utilizada em osciladores para os quais a intenção é obter na saida uma forma de onda quadrada. 

O controle dos processadores é uma das aplicações que depende dos cristais de quartzo, pois é sempre necessario haver um oscilador extremamente preciso que controla a frequencia do seu funcionamento, isto é, o tempo do ciclo de maquina. Normalmente um ciclo de maquina ocorre a cada borda de subida, ou borda de descida, da onda quadrada o ocilador. Os conversores analogico para digital tambem constituem circuitos computacionais e dependem da precisão proporcionada pelos cristais, pois sabemos que o precessamento de um tipo qualquer de sinal analogico em um computador está baseado no **teorema da amostragem**.

Assim, por exemplo, tratar computacionalmente um sinal acustico musical, implica normalmente em fazer com que o conversor A/D  trabalhe na taixa de 44.100 amostras por segundo, pois o ouvido humano somente percebe frequencias até o limite de 22.050 hz. Um oscilador preciso naquela frequencia, é por portanto necessario, para fazer com que o conversor A/D capture uma amostra a cada 1/44100 segundos, sendo que as capturas toda vez que haver uma borda de subida ou descida (conforme o projeto).

> img 27 


 - OBS 

Algumas vezes é necessario realizar um pequeno ajuste na frequencia de vibração de um oscilador à cristal. Em principio, só poderiamos fazer isso industrialmente, alterando as dimenções e o formato do cristal. Este processo, entretanto, pode ser impraticável, principalmente, se o ajuste pretendido é algo, por exemplo, fazer com que o cristal industrializado para vibrar em 30 MHz passe a vibrar em 29.999 ou 30.0001 MHz. Uma possibilidade alternativa para realizar este ajuste, sem alterar fisicamente o cristal, é, conforme percebido e comprovado por fisicos e engenheiros, adicionar uma capacitancia em serie com o cristal isto é

> img 28

Conforme o valor do capacitor dar se a maior ou menor nivel de variação em sua frequencia, mas obviamente dentro de uma minima faixa, assim por exempo, um oscilador variavel na faixa de 29.999 até 30.0001 pode ser obtido utilizando um capacitor ajustável, ou variavel, em serie com o cristal

> img 29 


Tendo em vista que o trimmer é normalmente muito pequeno e requer chaves de fenda para o seu ajuste e que o capacitor variável é muito grande e caro, é comum utilizar, em serie com os cristais um terceiro componente elétricamente equivalente e que possui a sua capacitancia variavel em função da tensão continua que nele chega. Este componente, conforme ja comentamos, o **diodo varicap**. Nesse caso, o arranjo circuital típico é normalmente similar ao exposto a seguir

> img 30


----------------

### Observação:

Em meados da decada passada, a industria de computadores passou a utilizar com mais frequencia duas tecnicas de soldagem:

 - Surface Mount Device (SMD)

 - Ball Grid Array (BGA)

Desenvolvendo inclusive estações de solda propiceas para cada uma das respectivas tecnicas. Basicamente, na primeira, os componentes eletronicos possuiem os terminais bem proximos um dos outros e bem curtos, pois a fixação mecania e a soldagem ocorem do mesmo lado da placa de circuito impresso. No segundo modelo além da fixação mecanica e da soldagem serem efetuadas do mesmo lado da placa, os componentes eletronicos são fabricados de modo que os seus terminais sejam na verdade micro bolas de cobre localizadas em baixo do componente 

### MiniProva 5

 - Discuta prevemente as diferenças dos padrões SMD e BGA de soldagem, tentando justificar o porque do uso deles, principalmente o segundo, pela industria de computação. Inclua comentarios sobre o maquinario necessario para produzir soldas em cada uma das tecnicas e uma figura relacionada com cada uma das tecnicas.










