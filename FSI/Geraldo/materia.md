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
