🌟 Readme do Projeto: Super Trunfo – Comparação de Cartas com Múltiplos Atributos 🌟📖 Descrição do ProjetoEste projeto consiste em uma implementação simples do popular jogo de cartas Super Trunfo na linguagem C. O objetivo é comparar dois "países" (cartas) com base em dois atributos escolhidos pelo jogador. O programa determina o vencedor de cada atributo individualmente, considerando regras especiais, e em seguida, calcula o vencedor final somando os valores dos atributos comparados de cada país.O jogo oferece uma experiência interativa por linha de comando, permitindo a escolha dinâmica dos atributos e exibindo um resultado detalhado de cada comparação.🚀 Funcionalidades ChaveEstrutura de Dados struct: Utilização de uma struct chamada Carta para armazenar de forma organizada todos os dados de um país (nome e seus atributos numéricos).Menu de Atributos Interativo: Um menu claro para o jogador escolher os dois atributos que deseja comparar. A opção escolhida na primeira vez é removida para a segunda escolha, garantindo a comparação de atributos distintos.Regra de Vantagem Especial: Implementação da regra onde o maior valor vence para a maioria dos atributos, mas o menor valor vence especificamente para a Densidade Demográfica.Comparação Detalhada: O programa compara as cartas (Brasil e Japão no exemplo) nos dois atributos selecionados.Cálculo do Vencedor Final: O vencedor final é determinado pela soma dos valores dos dois atributos comparados de cada país. O país com a maior soma vence. Em caso de somas iguais, é declarado um empate.Exibição de Resultados: Apresentação clara dos valores de cada país, o vencedor de cada atributo e, finalmente, o resultado e o vencedor final.🏷️ Atributos DisponíveisOs seguintes atributos dos países estão disponíveis para comparação no jogo:População (em número de habitantes)Área (em $\text{km}^2$)PIB (Produto Interno Bruto)PIB per CapitaDensidade Demográfica (em hab/$\text{km}^2$)📊 Regras de ComparaçãoAtributoRegra de VitóriaPopulação, Área, PIB, PIB per CapitaMaior valor vence.Densidade DemográficaMenor valor vence.Regra de Vitória Final:Os valores dos dois atributos escolhidos de cada país são somados.O país com a maior soma total é declarado o vencedor final.Se as somas forem iguais, o resultado é Empate.⚙️ RequisitosUm Compilador C (como GCC, Clang ou MinGW).Sistema operacional compatível com C padrão (Linux, Windows, macOS).🔧 Como Compilar e ExecutarSiga os passos abaixo para colocar o Super Trunfo em funcionamento:Salve o Código: Salve o código-fonte C fornecido em um arquivo chamado supertrunfo.c.Abra o Terminal: Navegue até o diretório onde você salvou o arquivo supertrunfo.c.Compile o Código: Utilize o compilador GCC para compilar o programa.Bashgcc supertrunfo.c -o supertrunfo
Execute o Programa: Rode o executável gerado.Bash./supertrunfo
Jogue: Siga as instruções no terminal, digitando o número correspondente aos atributos desejados para iniciar a comparação.🖥️ Exemplo de Fluxo do Programa (Simulação)Comparando cartas de Brasil e Japão!

Escolha um atributo:
1 - População
2 - Área
3 - PIB
4 - PIB per Capita
5 - Densidade Demográfica
Escolha: 3 (Usuário escolhe PIB)

Escolha um atributo:
1 - População
2 - Área
4 - PIB per Capita
5 - Densidade Demográfica
Escolha: 5 (Usuário escolhe Densidade Demográfica)

===== RESULTADO =====
Comparação entre Brasil e Japão

Atributo 1: PIB
Brasil: 1847000000000.00 | Japão: 4937000000000.00 --> Vencedor: Japão (Maior PIB vence)

Atributo 2: Densidade Demográfica
Brasil: 25.10 | Japão: 330.80 --> Vencedor: Brasil (Menor densidade vence)

Somas:
Brasil: 1847000000025.10
Japão: 4937000000330.80

Resultado Final: Japão venceu!