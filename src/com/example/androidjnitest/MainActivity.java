package com.example.androidjnitest;



import com.example.zeng.Client;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;
import android.widget.TextView;


public class MainActivity extends Activity {

	Button button;
	TextView mTextview;
	static {
		try {
			System.loadLibrary("AndroidJniTest");
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
		button = (Button) findViewById(R.id.Button1);
		mTextview = (TextView) findViewById(R.id.textname);
		button.setOnClickListener(new OnClickListener() {
			@Override
			public void onClick(View v) {
				// TODO Auto-generated method stub
				int get = Client.start("");	
				Log.i("","----------"+get);
				Client.stop();
			}

		});

	}


	@Override
	public void onBackPressed() {
		finish();
	}

	@Override
	protected void onDestroy() {
		super.onDestroy();
	}

}
