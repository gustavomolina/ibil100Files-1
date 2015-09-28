#FSI
_____________________________
------------
> Aula: 11 de agosto

----------

### Filosofia Empresarial

As emprsas passaram a ser cada vez mais dependentes dos processos de 
**gerenciamento das informações**. Tornou-se relevante considerar o 
**desempenho dos processos**, bem como a **qualidade** e a **eficiência** dos 
**serviços executados**. Assim, a gerência das informações tornou-se uma forma 
de se **refinar** o sistema, indo muito além do seu simples funcionamento.

### Conceito de Sistemas

Um sistema é classificado como um conjunto de partes que interagem, visando um objetivo específico.
Eistem alguns príncipios gerais nos sistemas que devem ser considerados:
- /\ Especialização (Específico)
- /\ Tamanho do Sistema
- \/ Adaptabilidade
- /\ Manutenção

Um sistema, em geral, é composto por n-subsistemas. A junção dessas subpartes nem sempre é uma tarefa **trivial**. Dessa forma, com o crescimento dos sistemas, os processos de **documentação** assumenm um papel primordial, de modo que a **evolução** do sistema seja garantida.

### Fatores que Inflenciam um Sistema

- **Objetivos declarados**: Objetivos reais
- **Ambientes de sistemas**: Pessoas que utilizam, local de uso, entre outros.
- **Recursos utilizados**: Testar se os recursos se adequam às necessidades.
- **Controle estabelecidos**: Controlar o recebimento das informações no sistema.

### Engenharia de Sistemas

Fozaliza os diversos elementos, **analisando**, **projetando** e **organizando** estes elementos em um sistema.
Para se realizar uma boa engenharia de sistemas é necessário que alguns elementos base estejam presentes:
- software
- hardware
- pessoas
- base de dados
- documentação que mostra como usar o sistema
- procedimentos de operação.

### Hierarquia da Engenharia de Sistemas

(Img 01)


------------
> Aula: 17 de agosto

----------

### Domínio de Interesse

(Img 02)

### Modelagem do Sistema

Com a modelagem do sistema é possível definir uma série de elementos:
- Especificação dos Processos
- Representação do comportamento dos processos e os pressupostos nos quais o comportamento está baseado
- Deefinição explícita das entradas para o modelo
- Representação de todas as ligações (Estruturar melhor o Sistema).

###### Simulação de Sistemas
Permite avaliar o desempenho de um sistema como se tivesse executando o sistema em tempo real.

### Engenharia de Requisitos

1. **Elicitação de requisitos**: Identifica os objetivos do sistema e a forma como o sistema será usado.
2. **Análise e negociação de requisitos**: Avalia a consistência, as omissões e ambiguidades dos requisitos.
3. **Especificação de requisitos**: Delimita cada elemento do sistema considerado.
4. **Modelagem do Sistema**: Possibilita a avaliação dos componentes do sistema.
5. **Validação dos Requisitos**: Examina a especificação de requisitos para avaliar sua adequação.
6. **Gestão de Requisitos**: Atividades que ajudam à **identificação**, **controle** e **rastreamento** de requisitos e modificações em qualquer época (atualizações).

**1) Elicitação de requisitos - Problemas**
- **Escopo**: O limite do sistema é mal definido ou o cliente/usuário especificam detalhes técnicos desnecessários que podem confundir os objetivos globais do sistema.
- **Entendimento**: Clientes/usuários têm pouca compreensão das capacidades e limitações de seu ambiente computacional, não tem pleno entendimento do domínio do problema, têm dificuldade de comunicar as necessidades, omitem informações que acreditam ser óbvias e especificam requisitos conflitantes com as necessidades dos outros.
- **Volatilidade**: Os requisitos mudam ao longo do tempo.
- **Diretrizes**:
  - Avaliar a viabilidade técnica e econômica.
  - Identificar as pessoas que ajudarão a elicitar os requisitos e compreender qual o papel de tais pessoas na empresa.
  - Definir o ambiente técnico.
  - Identificar as restrições de domínio da aplicação que limitam a **funcionalidade** ou o desempenho do sistema a ser construído.
  - Definir um ou mais métodos de elecitação de requisitos.
  - Solicitar, sempre que possível, a participação de várias pessoas para definir requistos de diferentes pontos de vista.
  - Identificar requisitos ambíguos.

  
------------
> Aula: 18 de agosto

----------

**2) Análise e negociação de requisitos - Processo**
- Ordenar os requisitos e discutir conflitos de prioridades. Dessa forma, é possível diminuir o tempo de entrega e, na verdade, entregar o que é **vital**.
- Usar uma abordagem iterativa para **eliminar**, **combinar** ou **modificar** requisitos de modo que cada parte alcance algum grau de satisfação.
- Estimar o esforço de desenvolvimento para avaliar o impacto de cada requisito no custo do projeto e no prazo de entrega (Auxilia muito na previsão do prazo de entrega).

**3) Especificação de Requisitos - Formato**
Na especificação de requisitos, diversos processos auxiliares podem ser realizados, especialmente com o objetivo de ilustrar os requisitos e resultados que podem ser **gerados**.
**Elementos importantes**:
- Documento escrito
- Modelo(s) gráfico(s)
- Prototipação

#####Importante
Um padrão deve ser desenvolvido e usado para apresentar os requisitos de forma consciente e mais fácil de entender.

**4) Modelagem do Sistema - Vantagens**
- Permite avaliar a eficiência do fluxo de trabalho
- Permite especificar de forma mais detalhada e adequada o que deve ser construído

------------
> Aula: 25 de agosto

----------

**5) Validação de Requisitos - Garantidos**
- Detecção e correção de erros, inconsistências e omissões
- Declaração não **ambígua** dos requisitos
- Adequação dos produtos de trabalho em relação às normas estabelecidas. Se existe um padrão, este deve ser utilizado.

**6) Gestão de Requisitos - Tabelas de Rastreamento**
- **De características**: mostra como os requisitos se relacionam às características importantes do sistema observáveis pelo cliente.
- **De fontes**: indica qual é o solicitante de cada requisito.
- **De dependência**: indica a relação existente entre os requisitos

### Desenvolvimento de Sistemas - Participantes
**1) Usuário**: Pessoas ou grupo de pessoas para quem o sistema é construído.

  - **Classificação por tipo de função**:
    - **Operadores**: têm visão local; são responsáveis por executar as funções de sistema.
    - **Supervisores**: podem ou não ter uma visão local; geralmente conhecem as funções dos operadores; orientados por questões orçamentárias.
    - **Executivos**: não tem experiência como operador; têm a iniciativa do projeto; possuem visão global; têm preocupações estratégicas.
    
  - **Classificação por nível de experiência**:
    - **Amador**: nunca trabalhou com um computador; tem dificuldade de entender os modelos gerados pelo analista.
    - **Novato**: participou de alguns projetos; possui ou trabalha com computadores.
    - **Experiente**: conhece a análise de sistemas; tem experiência de outros projetos; discute sobre as técnicas de modelagem sendo usadas.
    
**2) Gerente de Projetos - Principais funções**
- Gerenciar e alocar os recursos de toda a equipe técnica.
- Prestar contas junto à administração superior
- Tratar problemas identificados no decorrer do projeto: prever erros durante o projeto e traçar medidas de contigência.

------------
> Aula: 31 de agosto

----------

**3) Auditores**

Responsáveis por garantir que o sistema seja desenvolvido de acordo com os vários padrões da organização.
  - **Problemas a serem considerados**:
    - Normalmente não se envolvem no projeto até que ele tenha sido concluído (maior custo para corrigir problemas).
    - às vezes não estão habituados à notação utilizada.
    
**4) Analistas de Sistemas**
  
  - **Funções**:
    - Documentar as atividades realizadas
    - Ajudar a encontrar produtos e negócios novos. Abrir o leque de oportunidades.
    - Negociar os requistos com o usuário. Verificar o que é vital.
    
**5) Projetista de Sistemas**
  
  Sua função é transformar os requistos dos usuários, modelados pelos analistas, emum projeto implementável no computador.
  
**6) Programador**

  Responsável por codificar e testar os módulos do sistema modelados pelos projetistas, além de manter o sistema.
  
**7) Operador**

  Pessoa encarregada de manter os equipamentos, a rede , a base de dados.
  
### Principais Problemas no Desenvolvimento

**1) Produtividade**

Afetada pelo acumulo de trabalho e pela consequente falta de tempo necessário para construir um novo sistema. A demanda por novos sistemas pode ser dividida em:
  - visível
  - invisível
  - desconhecido
  
No entanto, existem algumas técnicas para redzir o tempo de desenvolvimento:
  - Contratar pessoas ( analistas e programadores )
  - usar melhores linguagens de programação
  - usar controles de engenharia de software
  - usar ferramentas automatizadas
  
  
------------
> Aula: 01 de setembro

----------

**2) Confiabilidade**: Os erros podem passar despercebidos ou causar graves acidentes. Erros de software são difíceis de serem extintos. A seguir, encontra-se alguns motivos para dificuldade de correção de erros:
  
  - É dificil descobrir como selecionar.
  - Deve-se encontrar todos os pontos de correção.
  - Alta probabilidade de introduzir novos erros.
  - Nem sempre são reportados pelos usuários.
  
(img 3)

**3) Manutenibilidade - fatores**:

  - Correção de erros
  - Alteração de requisitos
  - Necessidade de melhor desempenho
  - Garantia de melhor confiabilidade
  
A manutenção deve ser sempre acompanhada de modificações na especificação do sistema. Entretanto, isso nem sempre ocorre devido:
 - Analistas alocados em outros projetos
 - Urgência na implatação das modificações
 - Inexistência de ma política que **valorize a manutenção da especificação**.
 
**4) Qualidade**
 
Este fator pode ser medido considerando-se os seguintes fatores:
  - **Eficácia**: Resultados obtidos x Resultados pretendidos
  - **Eficiência**: Resultados obtidos x Resultados consumidos
  
Problemas que acusam falta de qualidade em sistemas:
  - Não contribuem para os objetivos da empresa
  - Não atendem às necessidades dos usuários
  - Não são confiáveis
  - São ineficientes
  - Tem manutenção díficil, constante e onerosas
  
**5) Portabilidade**

Consiste em escrever sistemas que podem ser transferidos para outras plataformas.

**6) Segurança dos Sistemas de Informação**

Consiste em:

 - Impedir o acesso de pessoas não autorizadas
 - Conceder certas funcionalidades a apenas algumas pessoas
 
### Ciclo de vida de um sistema

Trata-se do processo para gerenciar o desenvolvimento do seu sistema.

**Objetivos**:
  - Definir atividdes a serem executadas em um projeto de desenvolvimento:
    
    - **1)** Facilita a adaptção de pessoas novas.
    - **2)** Participantes têm uma visão do que estão fazendo no projeto e qual sua importância.
  
  - Manter consistência entre projetos de uma mesma organização:
  
    - **1)** Facilita a supervisão do projeto
  
  - Introduz pontos de verificação:
    - **1)** Permite verificar se o projeto está atrasado.

------------
> Aula: 08 de setembro

----------

#### Fases

**1) Concepção - considerações**:
 
 - Na existência de um problema é necessário buscar uma alternativa para resolvê-lo.
 - Requer que a alta administração esteja empenhada em resolver o problema.
 - O analista deve fazer uma estimativa de custo e ecaminhar à alta administração.
 - A administração deve ou não dar continuidade ao trabalho.
 
**2) Estudo de viabilidade - considerações**:

 - O estudo deve ser realizado pelo analista em conjunto com o usuário e administração.
 - A equipe de análise deve apresentar um relatório detalhado, demonstrando custos e benefícios que suas alternativas trarão à organização (empresa).
 
**3) Processo de Análise - Considerações**:

 - O usuário discute seu problema diretamente com o pessoal da análise.
 - A construção de um modelo lógico do sistema pelo analista usando ferramentas como **análise estruturada**.
 
**4) Projeto do sistema - considerações**:

 - A escolha da alternativa é bastante pessoal e deve obedecer a uma **rigorosa** análise técnica e econômica.
 - A alta administração faz a opção que melhor se adequa à empresa.
 - A descrição da alternativa escolhida será tomada como modelo lógico para o desenvolvimento do sistema físico proposto.
 
**5) Projeto Detalhado - considerações**:

 - Consultar os usuários sobre a ordem que os dados devem ser impressos nos relatórios para facilitar seu trabalho.
 - Definir os módulos que irão compor o sistema, de preferência em conjunto com os programadores. Estas definições deverão conter as especificações necessárias para a codificação de cada módulo.
 - Definir um plano de teste.
 
**6) Implementação - considerações**:

 - A partir das descrições detalhadas dos módulos, o programador passará a codificá-lo na linguagem escolhida.
 - Cada módulo deve ser testado isolodamente e em conjunto com os demais, observando o plano de teste.
 - Caso necessite de instalação de novos equipamentos, nesta fase já devem ter sido instalados e testados.
 - Aplicar treinamento a todos que utilizarão o sistema.
 - Elaborar o manual do sistema.
 - Elaborar o manual do usuário.
 
**7) Manutenção**: 

Operações que consiste na correção de possíveis erros, na melhoria de seu desempenho e na alteração dos requisitos.


------------
> Aula: 14 de setembro

----------

### Metodologia para Coleta de Informações

**1) Entrevista**:
 - **Quando Usar**: quando poucas pessoas conhecem as informações necessárias para o desenvolvimento do sistema.
 - Preparar antecipadamente 
 - Perguntas objetivas 
 - Evitar constrangimento dos participantes
 
 ###### Procedimentos para entrevista:

  - **Antes**: Planejar; Identificar a posição e responsabilidades do entrevistado (evitar constrangimento); Marcar horário com antecedência; Escolher local sossegado.
  - **Durante**: Apresenta-se informando a finalidade da entrevista e porque o entrevistado foi selecionado; Explique as anotações que fizer (anotar pontos chaves); Não demore mais que duas horas (tempo limite alto); Encerre com observação positiva (fale que a pessoa ajudou e depois fará revisão da entrevista).
  - **Depois**: Documente os pontos relevantes; Envie a documentação ao entrevistado; Se for necessário esclarecimento posterior, contate o entrevistado para marcar outra reunião.
 
 
**2) Questionário**:
 - **Quando Usar**: quando muitas pessoas conhecem as informações necessárias ao desenvolvimento.
 - Preparar antecipadamente com questões objetivas.
 - **Desvantagem**: comunicação com usuários é restrita, não há troca de informação face a face.
 
 ###### Procedimento para aplicar Questionário:
 
  - **Preparação**: Identificar o tipo de informação que deseja obter; Escolher o formato adequado; Deixar espaço suficiente para resposta; Elaborar questões claras; Enviar carta acompanhando o questionário enfatizando sua importância.
  - **Identificar os respondentes**: Nome, função e localização; Controlar para que todos recebam.
  - **Distribuição**: Deve ser distribuído juntamente com as instruções detalhadas de como preenchê-lo e o prazo de devolução.


------------
> Aula: 15 de setembro

----------
(continuação)
  - **Análise das Respostas**: Analisar e considerar as informações recebidas; documentar as principais descobertas; enviar cópia do relatório para todos os respondentes (satisfação para quem ajudou).
  
**3) Casos de uso**:
  - Descrever a funcionalidade específica que um sistema deve desempenhar, por meio de modelagem de diálogo que um ator terá com o sistema a ser desenvolvido.
  - **Ator**: entidade que interage com o sistema. Pode ser um usuário, um dispositivo ou outro sistema.
  - Cada caso de uso descreve um possível cenário de como a entidade externa interage com o sistema.
  - **Úteis para**:
  
    **a) Cliente**: Pode verifificar se todas as funções desejadas estão especificadas.
    
    **b) Projetista**: Representam as informações a serem manipuladas pelo sistema.
    
    **c) Testadores**: Base para os testes de sistema (em princípio, o sistema é uma caixa preta).
    
**4) Prototipação iterativa**:

###### Diretrizes:
 
  - Trabalhar com módulos gerenciáveis.
  - Construir o protótipo rapidamente.
  - Modificar o protótipo em iterações sucessivas
  - Enfatizar com o usuário.
    
###### Vantagens da Prototipação iterativa:
  - Permite alterar o sistema com antecedência.
  - Permite descartar um sistema quando este se mostrar inadequado.
  - Possibilidade de atender melhor às necessidades e expectativas do usuário.
    
    
------------
> Aula: 21 de setembro

----------

**5) Observação direta**:
  Usada em situações que o usuário não tem possibilidade/percepção suficiente para formalizar os requistos.
  
###### Usada para:
  
  - Complementar/confirmar informações obtidas com a entrevista ou questionário.
  - Identificar os documentos que devem ser coletados para análise posterior.
  - Esclarecer o que está sendo feito no ambiente atual e de que forma.
  
###### Antes da observação deve-se:
    
  - Observar as áreas a serem observadas.
  - Obter aprovação da gerência.
  - Obter nomes e funções das pessoas que serão envolvidas no estudo.
  - Explicar para as pessoas observadas o que será feito e porquê.
    
###### Durante a observação deve-se:
  
  - Familiarizar-se com o local de trabalho sendo observado.
  - Observar as facilidades manuais e automatizadas em uso.
  - Coletar amostras de documentos e procedimentos em uso.
  - Acumular informações estatísticas sobre as tarefas: frequência que ocorrem e tempo de duração.
  - Observar as exceções que podem ocorrer.
    
###### Depois da observação deve-se:
  
  - Documentar as descobertas
  - Consolidar os resultados
  - Revisar os resultados consolidados com as pessoas observadas e/ou seus superiores.
    
### Estudo de viabilidade - Etapas:

  - **1)** Definir a delimitação esperada para o projeto e os objetivos do sistema. **Pergunta**: Estou trabalhando no problema certo?
  - **2)** Estudar o sistema existente (se houver): se o novo sistema não fornecer benefícios adicionais ou não reduzir custos, o sistema antigo deve ser mantido.
  - **3)** Desenvolver um modelo lógico de alto nível do sistema proposto.
  - **4)** Revisar a definição do problema com suas delimitações e objetivos com as pessoas chaves (analista e usuário).
  - **5)** Desenvolver e avaliar soluções alternativas: considerar viabilidade técnica, viabilidade organizacional e econômica (análise custo/benefício).
  - **6)** Decidir sobre o curso de ação recomendado: continuar ou parar o projeto. Se for continuar, indicar a melhor alternativa e justificar a opção.
  - **7)** Rascunhas um plano de desenvolvimento: desenvolva um cronograma de implantação, calcule as necessidades de mão-de-obra e indique quando se farão necessárias.
  - **8)** Redigir o estudo de viabilidade (tem que ser escrito).
  - **9)** Apresentar os resultados para a administração e o usuário (se está de acordo).
  
------------
> Aula: 22 de setembro

----------

### Análise custo benefício:

O sistema é um bom investimento?

**1) Cálculo**: Cada fase do ciclo tem um custo, em que é preciso considerar o pessoal, o equipamento, materiais, despesas gerais, entre outros.

**2) Análise**: Ver qual é a expectativa de economia para uma média de **5 anos** de utilização do sistema.

**3) Risco**: Quanto maior o risco, mais alta a taxa de retorno necessária.

### Inspeção e Revisões
-  **Inspeção**: Revisão **formal** dos critérios de saída, realizada por pessoal técnico.
-  **Revisão**: **Informal**, feita antes de apresentar a documentação para uma equipe de inspeção.

###### Fases do Processo de Inspeção
   - **1) Planejamento**: A inspeção deve ser prevista no cronograma do projeto e tão logo a documentação esteja concluída, deve ser agendada a reunião.
  
   - **2) Preparação**: Leitura antecipada da documentação pelos inspetores e moderador, anotando as perguntas e os problemas encontrados.
  
   - **3) Sessão de inspeção**: Um dos inspetores faz um resumo dos pontos-chaves da documentação e o autor responde às perguntas. O objetivo dessa sessão é encontrar erros e não corrigir.
  
   - **4) Reelaboração**: Após a inspeção, o autor e o moderador se reúnem para discutir os erros encontrados e o tempo estimada para reelaboração do documento.
  
  - **5) Prosseguimento**: Quando a reelaboração for concluída, o autor e o moderador se reúnem para rever os resultados e, se necessário, agendar outra reunião de prosseguimento e outra sessão de inspeção.
  
  
###### Pontos de Inspeção - Perguntas-Chave:
  
  - **1) Análise**: O analista realmente compreende o problema? - Representantes dos usuários na equipe de inspeção.
  
  - **2) Projeto**: As alternativas apresentadas são tecnicamente realistas e resolverão o problema do usuário? (usuário pode responder) - Representantes dos usuários e dos programadores.
  
  - **3) Projeto detalhado**: O programador pode descrever o código baeando-se nestas especificações?
  
  **4) Implmentação**: O código satisfaz as especificações? Como o teste do sistema Normalmente é marcado no final desta fase, a inserção formal pode não ser realizada. É importante considerar a inspeção para os documentos de procedimentos operacionais (manual do sistema e do usuário).
    
### Análise estruturada - Proposta:

  - Construção de um modelo lógico do sistema moldado de forma gráfica que facilite a compreensão e a visualização global das necessidades dos clientes/usuários.
  Ferramentas de análise são importantes. Algumas caracterísitcas:
    - Ser gráfico com detalhamento textual de apoio.
    - Permitir a divisão do modelo.
    - Ter o mínimo possível de redundância.
    - Ser clara para o leitor.
    
###### Importância de um modelo:
  - Comunicar com o usuário de uma maneira clara.
  - Discutir modificações e correções nos requisitos do usuário (baratear).
  - Documentar e permitir que outros profissionais possam assumir o trabalho iniciado por outra pessoa.
  
  Modelagem funcional e fluxo de informações:
  
    **Elementos básicos**:
      - Entrada
      
      - Transformação
      
      - Saída