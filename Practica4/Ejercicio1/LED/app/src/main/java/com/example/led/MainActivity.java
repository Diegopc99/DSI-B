package com.example.led;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Button onButton = (Button) findViewById(R.id.LED_ON);

        onButton.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                try {
                    setOnButton();
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
        });

        Button offButton = (Button) findViewById(R.id.LED_OFF);

        offButton.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                try {
                    setOffButton();
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
        });
    }

    private static final String led = "/sys/class/leds/beaglebone:green:usr3/brightness";

    public void setOnButton() throws IOException {
        FileInputStream fileInputStream;
        FileOutputStream fileOutputStream;
        File file = new File(led);
        if (file.canRead()){
            fileInputStream = new FileInputStream(file);
            if (fileInputStream.read() == '1') {
                System.out.println("LED usr3 already ON\n");
                return;
            } else System.out.println("Turning LED ON\n");
        } else {
            System.out.println("Can’t read LED\n");
        }
        if (file.canWrite()) {
            fileOutputStream = new FileOutputStream(file);
            fileOutputStream.write('1');
        }
    }

    public void setOffButton() throws IOException {
        FileInputStream fileInputStream;
        FileOutputStream fileOutputStream;
        File file = new File(led);
        if (file.canRead()){
            fileInputStream = new FileInputStream(file);
            if (fileInputStream.read() == '0') {
                System.out.println("LED usr3 already OFF\n");
                return;
            } else System.out.println("Turning LED OFF\n");
        } else {
            System.out.println("Can’t read LED\n");
        }
        if (file.canWrite()) {
            fileOutputStream = new FileOutputStream(file);
            fileOutputStream.write('0');
        }
    }

}