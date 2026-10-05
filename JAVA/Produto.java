import java.util.Scanner;
class Produto{
    private int codigoProduto;
    private String nomeProduto;
    private int quantidadeProduto;
    private double precoProduto;


    public Produto(int codigoProduto, String nomeProduto, int quantidadeProduto, double precoProduto) {
        this.codigoProduto = codigoProduto;
        this.nomeProduto = nomeProduto;
        this.quantidadeProduto = quantidadeProduto;
        this.precoProduto = precoProduto;
    }

    public int getCodigoProduto() {
        return codigoProduto;
    }

    public void setCodigoProduto(int codigoProduto) {
        this.codigoProduto = codigoProduto;
    }

    public String getNomeProduto() {
        return nomeProduto;
    }

    public void setNomeProduto(String nomeProduto) {
        this.nomeProduto = nomeProduto;
    }

    public int getQuantidadeProduto() {
        return quantidadeProduto;
    }

    public void setQuantidadeProduto(int quantidadeProduto) {
        this.quantidadeProduto = quantidadeProduto;
    }

    public double getPrecoProduto() {
        return precoProduto;
    }

    public void setPrecoProduto(double precoProduto) {
        this.precoProduto = precoProduto;
    }

    public void exibirInformacoes() {
        System.out.println("Codigo:  " + codigoProduto);
        System.out.println("Nome:  " + nomeProduto);
        System.out.println("Quantidade:  " + quantidadeProduto);
        System.out.println("Preco:  " + precoProduto);
    }

    public void atualizarEstoque(int quantidadeProduto) {
        this.quantidadeProduto += quantidadeProduto;
    }
}

class trabalho1{
public static void main(String[] args){
    Scanner teclado = new Scanner(System.in);

    System.out.println("Digite o codigo do Produto");
        int codigo = teclado.nextInt();

    System.out.println("Digite o nome do Produto");
        String nome = teclado.next();

    System.out.println("Digite a Quantidade");
        int quantidade = teclado.nextInt();

    System.out.println("Digite o preco");
        double preco = teclado.nextDouble();
    
    Produto novoProduto = new Produto(codigo, nome, quantidade, preco);

    int opcao;

    do{

    System.out.println("\nMENU DE OPCOES\n");
    System.out.println("1-Exibir todas as informacoes do produto");
    System.out.println("2-Atualizar o estoque");
    System.out.println("3-Mostrar nome e quantidade em estoque");
    System.out.println("4-Alterar o preco do produto");
    System.out.println("5-Mostrar preco do produto");
    System.out.println("0-Encerrar programa\n");
    System.out.println("Escolha uma opcao:");
        opcao = teclado.nextInt();

    switch (opcao) {
        case 1:
            System.out.println("Exibindo todas as informacoes do produto:\n");
            novoProduto.exibirInformacoes();
            break;

        case 2:
            System.out.println("Digite a quantidade que deseja adicionar ao estoque:\n");
            int quantidadeProduto = teclado.nextInt();
            novoProduto.atualizarEstoque(quantidadeProduto);
            System.out.println("Estoque atualizado com sucesso!");
            break;

        case 3:
            System.out.println("Nome do produto: " + novoProduto.getNomeProduto());
            System.out.println("Quantidade em estoque: " + novoProduto.getQuantidadeProduto());
            break;

        case 4:
            System.out.println("Digite o novo preco do produto\n");
            double novoPreco = teclado.nextDouble();
            novoProduto.setPrecoProduto(novoPreco);
            System.out.println("Preco alterado com sucesso!");
            break;

        case 5:
            System.out.println("Preco do produto: R$ " + novoProduto.getPrecoProduto());
            break;

        case 0:
            System.out.println("Encerrando programa...\n");
            break;

        default:
            System.out.println("Opção inválida! Tente novamente.");
             break;
         }
    } while (opcao != 0);   
    teclado.close();
}
}
