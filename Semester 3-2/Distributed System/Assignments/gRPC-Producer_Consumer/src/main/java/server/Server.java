package server;

import io.grpc.ServerBuilder;
import service.UserService;

import java.io.IOException;
import java.util.logging.Logger;

public class Server {
    private static final Logger logger = Logger.getLogger(Server.class.getName());

    public static void main(String[] args) throws IOException, InterruptedException {
        io.grpc.Server server = ServerBuilder.forPort(6665).addService(new UserService()).build();
        server.start();
        logger.info("Server started at port " + server.getPort());
        server.awaitTermination();
    }
}
