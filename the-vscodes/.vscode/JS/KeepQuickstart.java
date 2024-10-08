import com.google.api.client.auth.oauth2.Credential;
import com.google.api.client.extensions.java6.auth.oauth2.AuthorizationCodeInstalledApp;
import com.google.api.client.extensions.jetty.auth.oauth2.LocalServerReceiver;
import com.google.api.client.googleapis.auth.oauth2.GoogleAuthorizationCodeFlow;
import com.google.api.client.googleapis.auth.oauth2.GoogleClientSecrets;
import com.google.api.client.googleapis.javanet.GoogleNetHttpTransport;
import com.google.api.client.http.javanet.NetHttpTransport;
import com.google.api.client.json.JsonFactory;
import com.google.api.client.json.gson.GsonFactory;
import com.google.api.client.util.store.FileDataStoreFactory;
import com.google.api.services.keep.v1.Keep;
import com.google.api.services.keep.v1.model.Note;
import com.google.api.services.keep.v1.model.Section;
import com.google.api.services.keep.v1.model.TextContent;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.security.GeneralSecurityException;
import java.util.Collections;
import java.util.List;

public class KeepQuickstart {

    private static final String APPLICATION_NAME = "Google Keep API Java Quickstart";
    private static final JsonFactory JSON_FACTORY = GsonFactory.getDefaultInstance();

    /**
     * Global instance of the scopes required by this quickstart. If modifying these scopes, delete
     * your previously saved tokens/ folder.
     */
    private static final List<String> KEEP_SCOPES =
        Collections.singletonList("https://www.googleapis.com/auth/keep");

    private static final String CREDENTIALS_FILE_PATH = "/credentials.json";

    /**
     * Creates an authorized Credential object.
     *
     * @param HTTP_TRANSPORT The network HTTP Transport.
     * @return An authorized Credential object.
     * @throws IOException
     */
    private static Credential getOAuthCredentials(final NetHttpTransport HTTP_TRANSPORT)
        throws IOException {
      // Load client secrets.
      InputStream in = KeepQuickstart.class.getResourceAsStream(CREDENTIALS_FILE_PATH);
      if (in == null) {
        throw new FileNotFoundException("Resource not found: " + CREDENTIALS_FILE_PATH);
      }
      GoogleClientSecrets clientSecrets =
          GoogleClientSecrets.load(JSON_FACTORY, new InputStreamReader(in));
      // ...
    }
}