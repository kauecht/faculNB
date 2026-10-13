// Kaue Chatan
import java.util.Scanner;
import java.util.ArrayList;

class Aluno {

    private int matricula;
    private String nome;
    private double nota1;
    private double nota2;

    public Aluno(int matricula, String nome) {
        this.matricula = matricula;
        this.nome = nome;
    }

    public int getMatricula() {
        return matricula;
    }

    public void setMatricula(int matricula) {
        this.matricula = matricula;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public double getNota1() {
        return nota1;
    }

    public void setNota1(double nota1) {
        this.nota1 = nota1;
    }

    public double getNota2() {
        return nota2;
    }

    public void setNota2(double nota2) {
        this.nota2 = nota2;
    }
}

public class Main {

    public static void main(String[] args) {

        Scanner teclado = new Scanner(System.in);
        ArrayList<Aluno> alunos = new ArrayList<>();

        int opcao = 1;
        int matricula;
        int i;
        boolean existe;

        while (opcao != 0) {

            System.out.println("\n===== VIAPAS - ESCOLA FUTURO DIGITAL =====");
            System.out.println("1 - Cadastrar aluno");
            System.out.println("2 - Cadastrar notas");
            System.out.println("3 - Listar todos os alunos");
            System.out.println("4 - Buscar aluno pela matricula");
            System.out.println("5 - Aluno com maior media");
            System.out.println("6 - Alterar notas");
            System.out.println("7 - Remover aluno");
            System.out.println("0 - Encerrar programa");
            System.out.print("Escolha uma opcao: ");

            opcao = teclado.nextInt();

            switch (opcao) {

                case 1:
                    System.out.print("Digite a matricula: ");
                    matricula = teclado.nextInt();
                    teclado.nextLine();

                    existe = false;

                    for (i = 0; i < alunos.size(); i++) {
                        if (alunos.get(i).getMatricula() == matricula) {
                            existe = true;
                        }
                    }

                    if (existe == true) {
                        System.out.println("Matricula ja cadastrada!");
                    } else {
                        System.out.print("Digite o nome: ");
                        String nome = teclado.nextLine();

                        Aluno aluno = new Aluno(matricula, nome);
                        alunos.add(aluno);

                        System.out.println("Aluno cadastrado com sucesso!");
                    }
                    break;

                case 2:
                    System.out.print("Digite a matricula do aluno: ");
                    matricula = teclado.nextInt();

                    existe = false;

                    for (i = 0; i < alunos.size(); i++) {
                        if (alunos.get(i).getMatricula() == matricula) {
                            existe = true;

                            System.out.print("Digite a primeira nota: ");
                            alunos.get(i).setNota1(teclado.nextDouble());

                            System.out.print("Digite a segunda nota: ");
                            alunos.get(i).setNota2(teclado.nextDouble());

                            System.out.println("Notas cadastradas!");
                            break;
                        }
                    }

                    if (existe == false) {
                        System.out.println("Aluno nao encontrado!");
                    }
                    break;

                case 3:
                    if (alunos.size() == 0) {
                        System.out.println("Nenhum aluno cadastrado!");
                    } else {
                        for (i = 0; i < alunos.size(); i++) {
                            System.out.println("\nMatricula: "
                                    + alunos.get(i).getMatricula());
                            System.out.println("Nome: "
                                    + alunos.get(i).getNome());
                            System.out.println("Nota 1: "
                                    + alunos.get(i).getNota1());
                            System.out.println("Nota 2: "
                                    + alunos.get(i).getNota2());
                        }
                    }
                    break;

                case 4:
                    System.out.print("Digite a matricula: ");
                    matricula = teclado.nextInt();

                    existe = false;

                    for (i = 0; i < alunos.size(); i++) {
                        if (alunos.get(i).getMatricula() == matricula) {
                            existe = true;

                            System.out.println("Matricula: "
                                    + alunos.get(i).getMatricula());
                            System.out.println("Nome: "
                                    + alunos.get(i).getNome());
                            System.out.println("Nota 1: "
                                    + alunos.get(i).getNota1());
                            System.out.println("Nota 2: "
                                    + alunos.get(i).getNota2());
                            break;
                        }
                    }

                    if (existe == false) {
                        System.out.println("Aluno nao encontrado!");
                    }
                    break;

                case 5:
                    int posicao = -1;
                    double maiorMedia = -1;
                    double media;

                    for (i = 0; i < alunos.size(); i++) {
                        media = (alunos.get(i).getNota1()
                                + alunos.get(i).getNota2()) / 2;

                        if (media > maiorMedia) {
                            maiorMedia = media;
                            posicao = i;
                        }
                    }

                    if (posicao == -1) {
                        System.out.println("Nenhum aluno cadastrado!");
                    } else {
                        System.out.println("Aluno com maior media: "
                                + alunos.get(posicao).getNome());
                        System.out.println("Media: " + maiorMedia);
                    }
                    break;

                case 6:
                    System.out.print("Digite a matricula do aluno: ");
                    matricula = teclado.nextInt();

                    existe = false;

                    for (i = 0; i < alunos.size(); i++) {
                        if (alunos.get(i).getMatricula() == matricula) {
                            existe = true;

                            System.out.print("Digite a nova primeira nota: ");
                            alunos.get(i).setNota1(teclado.nextDouble());

                            System.out.print("Digite a nova segunda nota: ");
                            alunos.get(i).setNota2(teclado.nextDouble());

                            System.out.println("Notas alteradas com sucesso!");
                            break;
                        }
                    }

                    if (existe == false) {
                        System.out.println("Aluno nao encontrado!");
                    }
                    break;

                case 7:
                    System.out.print("Digite a matricula do aluno: ");
                    matricula = teclado.nextInt();

                    existe = false;

                    for (i = 0; i < alunos.size(); i++) {
                        if (alunos.get(i).getMatricula() == matricula) {
                            alunos.remove(i);
                            existe = true;

                            System.out.println("Aluno removido com sucesso!");
                            break;
                        }
                    }

                    if (existe == false) {
                        System.out.println("Aluno nao encontrado!");
                    }
                    break;

                case 0:
                    System.out.println("Programa encerrado!");
                    break;

                default:
                    System.out.println("Opcao invalida!");
                    break;
            }
        }

        teclado.close();
    }
}
