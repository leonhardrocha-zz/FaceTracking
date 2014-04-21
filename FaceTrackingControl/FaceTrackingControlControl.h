#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace FaceTrackingControl {

	/// <summary>
	/// Summary for FaceTrackingControlControl
	/// </summary>
	public ref class FaceTrackingControlControl : public System::Windows::Forms::UserControl
	{
	public:
		FaceTrackingControlControl(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FaceTrackingControlControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: AxMicrosoft::Vbe::Interop::Forms::AxImage^  axTrackerImage;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FaceTrackingControlControl::typeid));
			this->axTrackerImage = (gcnew AxMicrosoft::Vbe::Interop::Forms::AxImage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axTrackerImage))->BeginInit();
			this->SuspendLayout();
			// 
			// axTrackerImage
			// 
			this->axTrackerImage->Location = System::Drawing::Point(0, 0);
			this->axTrackerImage->Name = L"axTrackerImage";
			this->axTrackerImage->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^  >(resources->GetObject(L"axTrackerImage.OcxState")));
			this->axTrackerImage->Size = System::Drawing::Size(150, 150);
			this->axTrackerImage->TabIndex = 0;
			// 
			// FaceTrackingControlControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->axTrackerImage);
			this->Name = L"FaceTrackingControlControl";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axTrackerImage))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
