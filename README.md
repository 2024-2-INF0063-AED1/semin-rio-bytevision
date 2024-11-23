[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=17281039&assignment_repo_type=AssignmentRepo)
# INF0063 - AED1
GRUPO ByteVision Tema: Restaurante fast food
Membros:
202302551 - JEOVANE DO NASCIMENTO MENDONÇA
202302578 - PEDRO CAMPOS JACOB
202302593 - VITOR ALFREDO CARDOSO DE PADUA
   
   —> INTRODUÇÃO:
   
   —> PROBLEMA: Muitos restaurantes de fast food têm um grande problema em armazenamento e ordenamento de pedidos para ajudar no controle dos pedidos, esse projeto ajuda a armazenar e organizar diversos pedidos que a cozinha tem que preparar vindos dos clientes da loja, dos clientes do iFood e outros meios e aplicativo de pedidos.
   O maior problemas desse sistema é saber a ordem de preparo dos pedidos, pois nos horários de pico(ocorrência de maior número de pedidos simultâneos) chegam 5 - 10 pedidos ao mesmo tempo, na cozinha fica difícil saber qual dar prioridade e se não ocorram erros nos pedidos, se estão corretos, saber quais foram feitos e quais ainda precisam ser feitos e entregues.
   Outro problema é a organização para facilitar a leitura dos pedidos, pois em um só pedido tem a escolha do molho e do lanche, se é no combo ou não, se vai bebida no pedido, se quer remover ou adicionar algum item no sanduíche essas informações tem que estão organizadas em um único pedido de forma fácil e prática para facilitar a leitura do pedido na hora de montagem isso tendo em mente a velocidade acelerada do fast food e a cotidade grande de comandas ao mesmo tempo.
  
   —> LITERATURA:
. Os desafios do Supply Chain para restaurantes e fast food (POSTS): https://www.teknisa.com/blog/supply-chain/
. Confira dicas para melhorar o fluxo de pedidos do seu restaurante (#5 Conte com um sistema que centraliza os pedidos): https://www.kcms.com.br/blog/fluxo-pedidos-delivery/
. Automação comercial: a estratégia para aumentar os lucros do varejo de food (essa última mostra como alguns programas podem aumentar muito os lucros dos restaurantes fast food): https://www.teknisa.com/blog/automacao-comercial-para-o-food-service/
   
   —> DATASET: Os dados a serem armazenados.
      Nome do cliente.
      Número do pedido (numero da comanda).
      Endereço (caso seja delivery).
      Data e hora em que o pedido foi feito.
      Qual sanduíche o cliente escolheu?
      Se tem alteração no sanduíche (ingrediente a ser adicionado ou removido).
      Qual molho o cliente escolheu?
      Se é só sanduíche ou no combo.
      Qual bebida o cliente escolheu? 

   —> MÉTODOS: Os métodos utilizados para o projeto incluem:
. Implementação de uma estrutura de dados baseada em filas prioritárias para organizar os pedidos, priorizando com base em tempo de espera e tipo de pedido.
. Utilização de ferramentas para acompanhar em tempo real o status dos pedidos na fila.
. Desenvolvimento de uma interface gráfica intuitiva para faciltar a entrada de dados pelo cliente e o gerenciamento dos pedidos pelo funcionário.

   —> AVALIAÇÃO: Os resultados serão medidos com as seguintes métricas e métodos:
. Tempo Médio de processamento de pedidos.
. Redução de erros: Contagem de erros nos pedidos antes e após a implementação do sistema.
. Satisfação do cliente: Realizar pesquisas de satisfação dos clientes para avaliar a qualidade do serviço.
. Satisfação do funcionário: Avaliar a facilidade e eficiência do sistema pelos funcionários.
     
   —> METODOLOGIA 
 
   O programa irá funcionar com dois usuários em mente: o cliente e o funcionário que está na cozinha,
no lado do cliente ele terá a opção somente de cadastrar seu pedido, o pedido do cliente será armazenado em uma
comanda dentro do sistema e será colocado em uma fila de pedidos, o pedido na fila por sua vez será encaminhado
para um dos funcionários assim que um deles tiver terminado o preparo de outro pedido.
	No lado do funcionário ele tem as opções de visualizar a comanda que vai mostrar todos os dados do pedido
feito pelo cliente e ele também tem a opção de finalizar o pedido que atualiza o status do funcionário como livre
e a opção de chamar o proximo pedido que manda para ele o pedido seguinte na fila. Nota-se que na parte do empregado
cada um tem um número associado e precisa inserir esse número para ter acesso ao programa.		
