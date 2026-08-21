import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner teclado = new Scanner(System.in);

        int opcao;
        int quantidade;
        double resultado;

        System.out.println("Escolha o produto:\n\n1-Cachorro Quente 12.00$\n2-X-Salada 15.00$\n3-X-Bacon 18.00$\n4-Refrigerante 6.00$\n5-Suco 7.00$\n");

        System.out.println("Digite o codigo do produto:");
        opcao = teclado.nextInt();

        System.out.println("Digite a quantidade:");
        quantidade = teclado.nextInt();

        switch (opcao) {
            case 1:
                resultado = quantidade * 12.00;
                System.out.println("Total: R$ " + resultado);
                break; 
        }


    }
}