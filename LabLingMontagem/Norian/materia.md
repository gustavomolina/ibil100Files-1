
Organização de um Computador
------------------------------




![744px-computer_system_bus svg](https://cloud.githubusercontent.com/assets/3441126/9382374/9c35c54c-4716-11e5-9021-8ae27fcf9e9b.png)


- Palavra do Computador: 
Conjunto de bits que forma uma unidade basica de informação



--------

- EX: barramento de endereços de 3 bits e de dados de 4 bits


|Endereço | Dados(palavra)|
----------|--------------
|000 | 1 2 3 4|
|001 | 5 6 7 8|
|010 | 9 0 A B|
|011 | C D E F|
|100 | 0 1 2 3|
|101 | 4 5 6 7|
|110 | 8 9 0 A|
|111 | A B C D|


- Capacidade de endereçar 3 bits de endereços com palavras de 4 bits (dados)

  Byte = 8 bits
  
  Nible = 4 bits
  
  
  
  ------------------
  
  > aula 27/08
  
  --------------------
  
  ## The Art of Assembly Language
  
  Randall Hyde
  
  http://plantation-productions.com/Webster/www.artofasm.com/
  
  ![img1](https://raw.githubusercontent.com/ibil100team/ibil100Files/master/LabLingMontagem/Norian/img1.png)
  
- **Ciclo de busca de uma intrução**

  - REM <--- CP
  - RDM <--- M[REM]
  - CP <--- CP + 1
  - RI <--- RDM

  - Decodificaçao da Instrução
  - Busca de Operandos
  
  - Execução da Instrução

-----------------

### UCP

- Instruções de 8 bits
- Palavras de memoria de 8 bits
- Endereço de memoria de 16 bits
- Ciclo de instrução
    - 15 instruções
    - com 5 bits/ op


### Relação de Instruções

mnemônico|Cod op
---------|-------
PARA|00000
NOPE|00001


  




