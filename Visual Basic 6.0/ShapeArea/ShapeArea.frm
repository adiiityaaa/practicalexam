VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   4620
   ClientLeft      =   120
   ClientTop       =   465
   ClientWidth     =   12285
   LinkTopic       =   "Form1"
   ScaleHeight     =   4620
   ScaleWidth      =   12285
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox bBox 
      Height          =   405
      Left            =   5520
      TabIndex        =   10
      Top             =   2280
      Width           =   3975
   End
   Begin VB.TextBox wBox 
      Height          =   375
      Left            =   5520
      TabIndex        =   9
      Top             =   1560
      Width           =   3975
   End
   Begin VB.TextBox rBox 
      Height          =   375
      Left            =   5520
      TabIndex        =   8
      Top             =   840
      Width           =   3975
   End
   Begin VB.TextBox fBox 
      Enabled         =   0   'False
      Height          =   495
      Left            =   5520
      TabIndex        =   7
      Top             =   3000
      Width           =   3975
   End
   Begin VB.CommandButton cB 
      Caption         =   "Calculate"
      Height          =   495
      Left            =   1920
      TabIndex        =   6
      Top             =   3000
      Width           =   3135
   End
   Begin VB.ComboBox oBox 
      Height          =   315
      Left            =   5520
      TabIndex        =   0
      Text            =   "Select Shape"
      Top             =   360
      Width           =   3975
   End
   Begin VB.Label bT 
      Caption         =   "Enter Breadth"
      Height          =   375
      Left            =   2040
      TabIndex        =   5
      Top             =   2280
      Width           =   3015
   End
   Begin VB.Label wT 
      Caption         =   "Enter Width"
      Height          =   375
      Left            =   2040
      TabIndex        =   4
      Top             =   1560
      Width           =   2895
   End
   Begin VB.Label Label3 
      Caption         =   "Label2"
      Height          =   255
      Left            =   0
      TabIndex        =   3
      Top             =   0
      Width           =   2895
   End
   Begin VB.Label rT 
      Caption         =   "Enter Radius:"
      Height          =   255
      Left            =   2040
      TabIndex        =   2
      Top             =   960
      Width           =   2895
   End
   Begin VB.Label Label1 
      Caption         =   "Select a Shape:"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   285
      Left            =   2040
      TabIndex        =   1
      Top             =   360
      Width           =   2895
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub cB_Click()
Dim a As Double
If oBox.Text = "Circle" Then
 a = rBox.Text * 3.14 * rBox.Text
 fBox.Text = a
ElseIf oBox.Text = "Rectangle" Then
 a = wBox.Text * bBox.Text
 fBox.Text = a
End If
End Sub
Private Sub Form_Load()
oBox.AddItem ("Circle")
oBox.AddItem ("Rectangle")
rT.Visible = False
wT.Visible = False
bT.Visible = False
rBox.Visible = False
wBox.Visible = False
bBox.Visible = False
End Sub
Private Sub oBox_Click()
If oBox.Text = "Circle" Then
rT.Visible = True
wT.Visible = False
bT.Visible = False
rBox.Visible = True
wBox.Visible = False
bBox.Visible = False
fBox.Text = " "
ElseIf oBox.Text = "Rectangle" Then
rT.Visible = False
wT.Visible = True
bT.Visible = True
rBox.Visible = False
wBox.Visible = True
bBox.Visible = True
fBox.Text = " "
End If
End Sub
