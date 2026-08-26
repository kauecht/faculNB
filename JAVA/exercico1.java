import java.util.Scanner;
public class exercico1{
    public static void main(String[] args){
        Scanner teclado = new Scanner(System.in);

        int opcao;
        int quantidade;
        double resultado;

        System.out.println("Escolha o produto:\n");
        System.out.println("1-Cachorro Quente 12.00$\n");
        System.out.println("2-X-Salada 15.00$\n");
        System.out.println("3-X-Bacon 18.00$\n");
        System.out.println("4-Refrigerante 6.00$\n");
        System.out.println("5-Suco 7.00$\n");

        System.out.println("Digite o codigo do produto:");
        opcao = teclado.nextInt();

        System.out.println("Digite a quantidade:");
        quantidade = teclado.nextInt();

        switch (opcao) {
            case 1:
                resultado = quantidade * 12.00;
                System.out.println("Total: R$ " + resultado);
                break;

            case 2:
                resultado = quantidade * 15.00;
                System.out.println("Total: R$ " + resultado);
                break;

            case 3:
                resultado = quantidade * 18.00;
                System.out.println("Total: R$ " + resultado);
                break;

            case 4:
                resultado = quantidade * 6.00;
                System.out.println("Total: R$ " + resultado);
                break;

            case 5:
                resultado = quantidade * 7.00;
                System.out.println("Total R$ " + resultado);
                break;
        }
teclado.close();
    }
}