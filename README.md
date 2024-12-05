# Grupo: ByteVision | Tema: Restaurante Fast Food

## Membros:
- **202302551** - Jeovane do Nascimento Mendonça  
- **202302578** - Pedro Campos Jacob  
- **202302593** - Vitor Alfredo Cardoso de Pádua<br>

**Resumo**: O projeto visa resolver problemas comuns em restaurantes fast food, como organização e priorização de pedidos, minimização de erros e melhoria na experiência do cliente e dos funcionários. Utilizando estruturas de dados como filas prioritárias, o sistema armazena, organiza e apresenta os pedidos de maneira eficiente. O projeto também reforça o uso de conceitos como ponteiros e structs para uma solução robusta e escalável, com espaço para aprimoramentos futuros.<br>

**Palavras-chave**: Fast-Food, Organização de Pedidos, Fila Prioritária, Automação, Satisfação do Cliente

---

## I) Introdução

### Problema
Muitos restaurantes de fast food enfrentam dificuldades com armazenamento e ordenamento de pedidos. Esse projeto busca ajudar a:
- **Armazenar e organizar pedidos**: Clientes da loja, iFood e outros aplicativos.  
- **Determinar a ordem de preparo**: Especialmente em horários de pico, quando chegam entre 5 e 10 pedidos simultâneos.  
- **Evitar erros nos pedidos**: Garantindo que os pedidos estejam corretos, prontos para entrega, e organizados.  
- **Facilitar a leitura dos pedidos**: Incluindo detalhes como:
  - Escolha do molho e do lanche
  - Combo ou não
  - Bebidas incluídas
  - Alterações no sanduíche (adicionar/remover itens)  
Tudo isso deve ser apresentado de forma prática e rápida para atender à velocidade do serviço fast food.

---

### Literatura
- [Os desafios do Supply Chain para restaurantes e fast food](https://www.teknisa.com/blog/supply-chain/)  
- [Confira dicas para melhorar o fluxo de pedidos do seu restaurante](https://www.kcms.com.br/blog/fluxo-pedidos-delivery/)  
  - **#5**: Conte com um sistema que centraliza os pedidos. 
- [Automação comercial: a estratégia para aumentar os lucros do varejo de food](https://www.teknisa.com/blog/automacao-comercial-para-o-food-service/)
  - Mostra como programas podem aumentar os lucros.

---

### Conjunto de Dados
Os dados a serem armazenados incluem:
- Nome do cliente  
- Número do pedido (comanda)  
- Endereço (para delivery)  
- Data e hora do pedido  
- Detalhes do pedido:
  - Tipo de sanduíche  
  - Alterações no sanduíche  
  - Tipo de molho  
  - Se é combo ou não  
  - Tipo de bebida  

---

### Métodos
Os métodos utilizados incluem:
- **Estrutura de dados**: Filas prioritárias para organizar pedidos, com base em tempo de espera e tipo de pedido.  
- **Ferramentas de monitoramento**: Para analizar o pedido.

---

### Avaliação
Os resultados serão avaliados com base em:
1. **Tempo médio de processamento dos pedidos**  
2. **Redução de erros**:
   - Comparação antes e depois do sistema.  
3. **Satisfação do cliente**:
   - Pesquisas de satisfação.  
4. **Satisfação do funcionário**:
   - Avaliação da facilidade e eficiência do sistema.  

---

## II) Fundamentos Teóricos

- Inicialização da fila com atributos necessários para o pedido.  
- O programa pergunta ao cliente:
  - Nome
  - Tipo de sanduíche
  - Molho
  - Alterações no sanduíche
  - Combo ou não
  - Bebida  
- Detalhes do pedido e senha são retornados ao cliente e enviados para a cozinha.  
- Todos os pedidos são armazenados em uma fila, mantendo a ordem de chegada.  
- As principais métricas incluem:
  - **Hora do pedido**: Para medir o tempo de entrega.  
  - **Senha**: Para identificar o pedido.  
  - **Opção de sanduíche/combo**: Para calcular valores médios por venda.  

---

## III) Metodologia

O programa é projetado para **clientes** e **funcionários**.

### Cliente:
- Insere os detalhes do pedido, que são armazenados em uma comanda no sistema.  
- O pedido é colocado na fila e encaminhado a um funcionário disponível.

### Funcionário:
- Visualiza a comanda com todos os detalhes do pedido. 

---

## IV) Resultados e Conclusões

### Resultados
O programa atende às funcionalidades propostas, organizando e priorizando os pedidos de forma eficiente.
![Resultado](https://github.com/user-attachments/assets/7252d89a-16b8-40d9-8ebb-e7af753336c1)

### Conclusões
- O conhecimento sobre **ponteiros** e **structs** foi fundamental para implementar a fila de pedidos.  
- Melhorias podem ser feitas para otimizar o funcionamento do programa.  
