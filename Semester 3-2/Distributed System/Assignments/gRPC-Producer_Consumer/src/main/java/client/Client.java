package client;

import com.demo.grpc.User;
import com.demo.grpc.userGrpc;
import io.grpc.ManagedChannel;
import io.grpc.ManagedChannelBuilder;
import java.util.Scanner;

public class Client {
    public static void main(String[] args)  {
        ManagedChannel managedChannel = ManagedChannelBuilder.forAddress("localhost", 6665).usePlaintext().build();
        userGrpc.userBlockingStub userBlockingStub = new userGrpc.userBlockingStub(managedChannel);

        String userName, password;
        boolean auth = false;
        Scanner input = new Scanner(System.in);

        System.out.println("Are you a new User?(Y/N)");
        String choice = input.nextLine();

        if(choice.equals("Y")) {
            registration(userBlockingStub);
        }

        while(!auth) {
            System.out.println("Enter Username: ");
            userName = input.next();
            System.out.println("Enter Password: ");
            password = input.next();
            User.LoginRequest loginRequest = User.LoginRequest.newBuilder().setUsername(userName).setPassword(password).build();
            User.LogResponse loginResponse = userBlockingStub.login(loginRequest);
            if (loginResponse.getResCode() == 200) {
                auth = true;
            }
            System.out.println(loginResponse.getMessage());
        }
    }

    private static void registration(userGrpc.userBlockingStub userBlockingStub)  {

        Scanner input = new Scanner(System.in);

        System.out.println("Enter UserID: ");
        int id = input.nextInt();
        String intentionalInput = input.nextLine();
        System.out.println("Enter Name: ");
        String name = input.nextLine();
        System.out.println("Enter country ");
        String country = input.nextLine();
        System.out.println("Enter a Username: ");
        String userName = input.nextLine();
        System.out.println("Enter a password: ");
        String password = input.nextLine();


        User.RegistrationRequest registrationRequest = User.RegistrationRequest.newBuilder().setUserid(id)
                .setName(name).setCountry(country).setUsername(userName).setPassword(password).build();
        User.RegistrationResponse registrationResponse = userBlockingStub.userRegistration(registrationRequest);
        System.out.println(registrationResponse.getResponseMessage());
    }
}
