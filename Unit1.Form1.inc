procedure InitializeComponent;
    begin
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(104, 45);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 0;
        self.button1.Text := 'Say Hello';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(104, 84);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(75, 23);
        self.button2.TabIndex := 1;
        self.button2.Text := 'Quit';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(282, 153);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.button1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedSingle;
        self.MaximizeBox := false;
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'Form1';
        self.ResumeLayout(false);
    end;
